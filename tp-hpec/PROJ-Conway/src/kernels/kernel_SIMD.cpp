#include <cstring>
#include <immintrin.h>

// =========================================================
// 1. HELPERS SIMD (Bit Shifting 8-bits simulé)
// =========================================================
// PBM : Bit 7 est à Gauche (Ouest), Bit 0 est à Droite (Est)

// Déplacer les données vers la Droite (>> 1) 
// Cela permet à une cellule de "voir" son voisin de GAUCHE (Ouest)
// (Le voisin de gauche se déplace vers la droite pour se superposer à nous)
inline __m256i shift_right_1(__m256i v) {
    // srli_epi16 décale des mots de 16 bits. Le bit 0 du byte HAUT bave sur le bit 7 du byte BAS.
    // Masque 0x7F (01111111) nettoie le bit 7 qui a reçu la bavure.
    return _mm256_and_si256(_mm256_srli_epi16(v, 1), _mm256_set1_epi8((char)0x7F));
}

// Récupérer le bit qui "tombe" lors d'un décalage >> 1 (Le bit 0)
// On le décale de 7 vers la gauche pour qu'il devienne le bit 7 du voisin
inline __m256i shift_left_7(__m256i v) {
    return _mm256_and_si256(_mm256_slli_epi16(v, 7), _mm256_set1_epi8((char)0x80));
}

// Déplacer les données vers la Gauche (<< 1)
// Cela permet à une cellule de "voir" son voisin de DROITE (Est)
inline __m256i shift_left_1(__m256i v) {
    return _mm256_and_si256(_mm256_slli_epi16(v, 1), _mm256_set1_epi8((char)0xFE));
}

// Récupérer le bit qui "tombe" lors d'un décalage << 1 (Le bit 7)
// On le décale de 7 vers la droite pour qu'il devienne le bit 0 du voisin
inline __m256i shift_right_7(__m256i v) {
    return _mm256_and_si256(_mm256_srli_epi16(v, 7), _mm256_set1_epi8((char)0x01));
}

// =========================================================
// 2. ADDITIONNEUR LOGIQUE (Cœur du calcul)
// =========================================================

inline __m256i _mm256_reduce_neighbors_logic(
    __m256i n1, __m256i n2, __m256i n3, 
    __m256i n4, __m256i n5, __m256i n6, 
    __m256i n7, __m256i n8, 
    __m256i self) 
{
    // Accumulateurs de somme sur 3 bits (s2, s1, s0)
    __m256i s0 = _mm256_setzero_si256();
    __m256i s1 = _mm256_setzero_si256();
    __m256i s2 = _mm256_setzero_si256();
    
    __m256i neighbors[8] = { n1, n2, n3, n4, n5, n6, n7, n8 };

    for (int i = 0; i < 8; i++) {
        __m256i n  = neighbors[i];
        __m256i c1 = _mm256_and_si256(s0, n);     // retenue du bit 0
        __m256i c2 = _mm256_and_si256(s1, c1);    // retenue du bit 1
        s0 = _mm256_xor_si256(s0, n);
        s1 = _mm256_xor_si256(s1, c1);
        s2 = _mm256_or_si256(s2, c2);            // saturation à 4+
    }

    __m256i three_or_two = _mm256_andnot_si256(s2, s1);      // s1=1 et s2=0 => {2,3}
    __m256i three_or_two_and_self = _mm256_or_si256(s0, self); // {3} (s0=1) ou {2 avec self=1}

    return _mm256_and_si256(three_or_two, three_or_two_and_self);
}

// Version Scalaire pour la fin de ligne
inline unsigned char reduce_neighbors_scalar(
    unsigned char n1, unsigned char n2, unsigned char n3,
    unsigned char n4, unsigned char n5, unsigned char n6,
    unsigned char n7, unsigned char n8,
    unsigned char self)
{
    unsigned char s0 = 0, s1 = 0, s2 = 0;
    unsigned char neighbors[8] = {n1, n2, n3, n4, n5, n6, n7, n8};
    for (unsigned char n : neighbors) {
        unsigned char c1 = s0 & n;
        unsigned char c2 = s1 & c1;
        s0 ^= n;
        s1 ^= c1;
        s2 |= c2;
    }
    return (s1 & ~s2) & (s0 | self);
}

// =========================================================
// 3. FONCTION PRINCIPALE (Avec Padding Sécurisé H+V)
// =========================================================

// Hypothèse : frame stocke les données en bits packés par octet, largeur multiple de 8.
// start.data() est un buffer contigu de height * (width/8) octets.

frame conway_SIMD(frame start, int gens) {
    int w = start.width();   // 1920
    int h = start.height();  // 1080
    // Nombre d'octets par ligne de l'image logique
    const int STRIDE_REAL = w / 8;   // 1920/8 = 240

    // On ajoute 1 octet de padding à gauche ET à droite => +2
    const int STRIDE_PAD  = STRIDE_REAL + 2;  // 242

    // Padding vertical : nombre de lignes mortes en haut et en bas
    const int pad_lines = 2;

    // Nombre total de lignes en mémoire
    const int total_lines = h + 2 * pad_lines;

    // Taille totale du buffer (en octets)
    const int buffer_total_size = total_lines * STRIDE_PAD;

    // Allocation zérotée : très important pour que le padding représente des cellules mortes
    unsigned char* buffer_base = new unsigned char[buffer_total_size]();
    unsigned char* dest_base   = new unsigned char[buffer_total_size]();

    // Pointeur vers le début réel de l'image logique :
    // - on saute pad_lines lignes * STRIDE_PAD
    // - et 1 octet de padding horizontal
    unsigned char* buffer = buffer_base + pad_lines * STRIDE_PAD + 1;
    unsigned char* dest   = dest_base   + pad_lines * STRIDE_PAD + 1;

    // Copie des données d'entrée dans la zone centrale, ligne par ligne
    const unsigned char* src =
        reinterpret_cast<const unsigned char*>(start.data());

    for (int y = 0; y < h; y++) {
        std::memcpy(buffer + y * STRIDE_PAD,
                    src    + y * STRIDE_REAL,
                    STRIDE_REAL);
    }

    // Largeur SIMD : 256 bits = 32 octets
    const int simd_width = 32;

    // On traite autant de blocs de 32 octets que possible dans STRIDE_REAL
    const int limit = STRIDE_REAL & ~(simd_width - 1);  // multiple de 32 <= STRIDE_REAL

    for (int g = 0; g < gens; g++) {

        // Pour chaque ligne de l'image logique
        for (int y = 0; y < h; y++) {

            // Ces pointeurs pointent sur le premier octet de données de la ligne (pad gauche exclu)
            unsigned char* p_prev = buffer + (y - 1) * STRIDE_PAD;
            unsigned char* p_curr = buffer + (y    ) * STRIDE_PAD;
            unsigned char* p_next = buffer + (y + 1) * STRIDE_PAD;

            unsigned char* p_dst  = dest   + (y    ) * STRIDE_PAD;

            int x = 0;

            // --------- Partie SIMD (blocs de 32 octets) ---------
            for (; x < limit; x += simd_width) {
                // On lit 3 lignes * 3 colonnes (gauche / centre / droite) autour du bloc
                __m256i ul = _mm256_loadu_si256((__m256i*)(p_prev + x - 1));
                __m256i ml = _mm256_loadu_si256((__m256i*)(p_curr + x - 1));
                __m256i dl = _mm256_loadu_si256((__m256i*)(p_next + x - 1));

                __m256i uc = _mm256_loadu_si256((__m256i*)(p_prev + x));
                __m256i mc = _mm256_loadu_si256((__m256i*)(p_curr + x));
                __m256i dc = _mm256_loadu_si256((__m256i*)(p_next + x));

                __m256i ur = _mm256_loadu_si256((__m256i*)(p_prev + x + 1));
                __m256i mr = _mm256_loadu_si256((__m256i*)(p_curr + x + 1));
                __m256i dr = _mm256_loadu_si256((__m256i*)(p_next + x + 1));

                // Voisins Nord-Ouest, Ouest, Sud-Ouest
                __m256i nw = _mm256_or_si256(shift_right_1(uc), shift_left_7(ul));
                __m256i w  = _mm256_or_si256(shift_right_1(mc), shift_left_7(ml));
                __m256i sw = _mm256_or_si256(shift_right_1(dc), shift_left_7(dl));

                // Voisins Nord-Est, Est, Sud-Est
                __m256i ne = _mm256_or_si256(shift_left_1(uc), shift_right_7(ur));
                __m256i e  = _mm256_or_si256(shift_left_1(mc), shift_right_7(mr));
                __m256i se = _mm256_or_si256(shift_left_1(dc), shift_right_7(dr));

                // Calcul de Conway pour chaque bit du bloc
                __m256i res = _mm256_reduce_neighbors_logic(
                    nw, uc, ne,
                    w,  e,
                    sw, dc, se,
                    mc
                );

                _mm256_storeu_si256((__m256i*)(p_dst + x), res);
            }

            // --------- Partie scalaire (queue éventuelle) ---------
            // Si STRIDE_REAL est multiple de 32 (cas 1920x1080), cette boucle ne s'exécute pas.
            for (; x < STRIDE_REAL; x++) {
                unsigned char u_c = p_prev[x];
                unsigned char u_l = p_prev[x - 1];
                unsigned char u_r = (x < STRIDE_REAL - 1) ? p_prev[x + 1] : 0;

                unsigned char m_c = p_curr[x];
                unsigned char m_l = p_curr[x - 1];
                unsigned char m_r = (x < STRIDE_REAL - 1) ? p_curr[x + 1] : 0;

                unsigned char d_c = p_next[x];
                unsigned char d_l = p_next[x - 1];
                unsigned char d_r = (x < STRIDE_REAL - 1) ? p_next[x + 1] : 0;

                unsigned char nw = (unsigned char)((u_c >> 1) | (u_l << 7));
                unsigned char w  = (unsigned char)((m_c >> 1) | (m_l << 7));
                unsigned char sw = (unsigned char)((d_c >> 1) | (d_l << 7));

                unsigned char ne = (unsigned char)((u_c << 1) | (u_r >> 7));
                unsigned char e  = (unsigned char)((m_c << 1) | (m_r >> 7));
                unsigned char se = (unsigned char)((d_c << 1) | (d_r >> 7));

                p_dst[x] = reduce_neighbors_scalar(
                    nw, u_c, ne,
                    w,  e,
                    sw, d_c, se,
                    m_c
                );
            }
        }

        // Swap des buffers de génération
        unsigned char* tmp = buffer_base;
        buffer_base = dest_base;
        dest_base   = tmp;

        // Recalculer les pointeurs centrés (image logique)
        buffer = buffer_base + pad_lines * STRIDE_PAD + 1;
        dest   = dest_base   + pad_lines * STRIDE_PAD + 1;
    }

    // Construction de la frame résultat
    frame res;
    res.set_w_h(w, h);

    unsigned char* out =
        reinterpret_cast<unsigned char*>(res.data());

    // Recopie des données sans le padding horizontal
    for (int y = 0; y < h; y++) {
        std::memcpy(out + y * STRIDE_REAL,
                    buffer + y * STRIDE_PAD,
                    STRIDE_REAL);
    }

    delete[] buffer_base;
    delete[] dest_base;

    return res;
}
