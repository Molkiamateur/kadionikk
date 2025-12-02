#include <cstring>
#include <immintrin.h>

frame conway_Fast(frame start, int gens) {
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

    #pragma omp parallel for
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
