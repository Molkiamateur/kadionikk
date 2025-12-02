#include <cstring> 

frame conway_OpenMP(frame start, int gens) {
    int w = start.width();
    int h = start.height();
    
    // Largeur en octets
    int stride = w / 8; 
    int size_bytes = stride * h;

    unsigned char* buffer = new unsigned char[size_bytes];
    std::memcpy(buffer, start.data(), size_bytes);
    
    unsigned char* dest = new unsigned char[size_bytes];

    // ASTUCE OPTI : Une ligne remplie de 0 pour simuler les bords extérieurs du haut et du bas
    // Cela évite de mettre des 'if (y==0)' partout.
    unsigned char* zero_row = new unsigned char[stride](); // () initialise à 0

    #pragma omp parallel for
    for (int g = 0; g < gens; g++) {
        
        for (int y = 0; y < h; y++) {
            
            // GESTION VERTICALE "BORDS MORTS"
            // Si on est en haut (y=0), la ligne du dessus est la ligne de zéros.
            // Si on est en bas (y=h-1), la ligne du dessous est la ligne de zéros.
            unsigned char* p_row_prev = (y == 0)     ? zero_row : buffer + (y - 1) * stride;
            unsigned char* p_row_curr = buffer + (y * stride);
            unsigned char* p_row_next = (y == h - 1) ? zero_row : buffer + (y + 1) * stride;
            
            unsigned char* p_dest_row = dest + (y * stride);

            for (int x = 0; x < stride; x++) {
                
                // GESTION HORIZONTALE "BORDS MORTS"
                // Si on est tout à gauche (x=0), l'octet de gauche n'existe pas -> 0
                // Si on est tout à droite, l'octet de droite n'existe pas -> 0
                
                // Chargement des 3 octets de la ligne du DESSUS
                unsigned char u_c = p_row_prev[x];
                unsigned char u_l = (x > 0)          ? p_row_prev[x - 1] : 0;
                unsigned char u_r = (x < stride - 1) ? p_row_prev[x + 1] : 0;
                
                // Chargement des 3 octets de la ligne du MILIEU
                unsigned char m_c = p_row_curr[x];
                unsigned char m_l = (x > 0)          ? p_row_curr[x - 1] : 0;
                unsigned char m_r = (x < stride - 1) ? p_row_curr[x + 1] : 0;

                // Chargement des 3 octets de la ligne du DESSOUS
                unsigned char d_c = p_row_next[x];
                unsigned char d_l = (x > 0)          ? p_row_next[x - 1] : 0;
                unsigned char d_r = (x < stride - 1) ? p_row_next[x + 1] : 0;

                // --- CONSTRUCTION DES VECTEURS (BIT SHIFTING) ---
                // C'est ici qu'on gère le "Glissement" des bits entre les octets
                
                // Voisins OUEST (Gauche)
                // On décale >> 1. Le trou à gauche (bit 7) est rempli par le bit 0 de l'octet de gauche.
                unsigned char nw = (u_c >> 1) | (u_l << 7);
                unsigned char w  = (m_c >> 1) | (m_l << 7);
                unsigned char sw = (d_c >> 1) | (d_l << 7);

                // Voisins EST (Droite)
                // On décale << 1. Le trou à droite (bit 0) est rempli par le bit 7 de l'octet de droite.
                unsigned char ne = (u_c << 1) | (u_r >> 7);
                unsigned char e  = (m_c << 1) | (m_r >> 7);
                unsigned char se = (d_c << 1) | (d_r >> 7);

                unsigned char n = u_c;
                unsigned char s = d_c;

                // --- CALCUL PARALLELE ---
                p_dest_row[x] = reduce_neighbors_logic(
                    nw, n, ne, 
                    w,     e, 
                    sw, s, se, 
                    m_c
                );
            }
        }
        
        // Swap buffers
        unsigned char* temp = buffer;
        buffer = dest;
        dest = temp;
    }

    frame res;
    res.set_w_h(w, h);
    std::memcpy(res.data(), buffer, size_bytes);

    delete[] buffer;
    delete[] dest;
    delete[] zero_row; // Nettoyage
    return res;
}