#include <cstring>
#include <vector>
#include <immintrin.h>
#include <stdint.h>

frame conway_Fast(frame start, int gens) {
    int w = start.width();   // 1920
    int h = start.height();  // 1080

    const int STRIDE_REAL = w / 8;          // 1920/8 = 240
    const int STRIDE_PAD  = STRIDE_REAL + 2;  // +1 à gauche, +1 à droite

    const int pad_lines   = 2;
    const int total_lines = h + 2 * pad_lines;
    const int buffer_total_size = total_lines * STRIDE_PAD;

    unsigned char* buffer_base = new unsigned char[buffer_total_size]();
    unsigned char* dest_base   = new unsigned char[buffer_total_size]();

    unsigned char* buffer = buffer_base + pad_lines * STRIDE_PAD + 1;
    unsigned char* dest   = dest_base   + pad_lines * STRIDE_PAD + 1;

    const unsigned char* src =
        reinterpret_cast<const unsigned char*>(start.data());

    for (int y = 0; y < h; y++) {
        std::memcpy(buffer + y * STRIDE_PAD,
                    src    + y * STRIDE_REAL,
                    STRIDE_REAL);
    }

    const int simd_width = 32;
    // Dernier x autorisé pour que les loads x-1 / x / x+1 restent dans la ligne
    const int simd_limit = STRIDE_REAL - simd_width;

    // --- Masques d'activité par ligne ---
    std::vector<uint8_t> active_rows(h, 1);     // au début, tout actif
    std::vector<uint8_t> changed_rows(h, 1);    // dummy init
    std::vector<uint8_t> new_active_rows(h, 1);

    // Une seule région parallèle pour toute la simu
    #pragma omp parallel
    {
        for (int g = 0; g < gens; g++) {

            // Partage des lignes entre threads
            #pragma omp for schedule(static)
            for (int y = 0; y < h; y++) {

                unsigned char* p_prev = buffer + (y - 1) * STRIDE_PAD;
                unsigned char* p_curr = buffer + (y    ) * STRIDE_PAD;
                unsigned char* p_next = buffer + (y + 1) * STRIDE_PAD;
                unsigned char* p_dst  = dest   + (y    ) * STRIDE_PAD;

                // Si la ligne n'est pas active, on copie juste l'état courant
                // (la ligne ne change pas à cette génération)
                if (!active_rows[y]) {
                    std::memcpy(p_dst, p_curr, STRIDE_REAL);
                    changed_rows[y] = 0;
                    continue;
                }

                int x = 0;
                __m256i diff_vec = _mm256_setzero_si256();
                uint8_t diff_scalar = 0;

                // --------- Partie SIMD ---------
                for (; x <= simd_limit; x += simd_width) {
                    __m256i ul = _mm256_loadu_si256((__m256i*)(p_prev + x - 1));
                    __m256i ml = _mm256_loadu_si256((__m256i*)(p_curr + x - 1));
                    __m256i dl = _mm256_loadu_si256((__m256i*)(p_next + x - 1));

                    __m256i uc = _mm256_loadu_si256((__m256i*)(p_prev + x));
                    __m256i mc = _mm256_loadu_si256((__m256i*)(p_curr + x));
                    __m256i dc = _mm256_loadu_si256((__m256i*)(p_next + x));

                    __m256i ur = _mm256_loadu_si256((__m256i*)(p_prev + x + 1));
                    __m256i mr = _mm256_loadu_si256((__m256i*)(p_curr + x + 1));
                    __m256i dr = _mm256_loadu_si256((__m256i*)(p_next + x + 1));

                    __m256i nw = _mm256_or_si256(shift_right_1(uc), shift_left_7(ul));
                    __m256i w  = _mm256_or_si256(shift_right_1(mc), shift_left_7(ml));
                    __m256i sw = _mm256_or_si256(shift_right_1(dc), shift_left_7(dl));

                    __m256i ne = _mm256_or_si256(shift_left_1(uc), shift_right_7(ur));
                    __m256i e  = _mm256_or_si256(shift_left_1(mc), shift_right_7(mr));
                    __m256i se = _mm256_or_si256(shift_left_1(dc), shift_right_7(dr));

                    __m256i res = _mm256_reduce_neighbors_logic(
                        nw, uc, ne,
                        w,  e,
                        sw, dc, se,
                        mc
                    );

                    _mm256_storeu_si256((__m256i*)(p_dst + x), res);

                    // Accumule les différences sur la ligne
                    __m256i d = _mm256_xor_si256(res, mc);
                    diff_vec = _mm256_or_si256(diff_vec, d);
                }

                // --------- Partie scalaire éventuelle ---------
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

                    unsigned char res = reduce_neighbors_scalar(
                        nw, u_c, ne,
                        w,  e,
                        sw, d_c, se,
                        m_c
                    );

                    p_dst[x] = res;
                    if (res != m_c)
                        diff_scalar = 1;
                }

                // La ligne a-t-elle changé ?
                bool vec_changed =
                    !_mm256_testz_si256(diff_vec, diff_vec);
                changed_rows[y] = (vec_changed || diff_scalar) ? 1 : 0;
            } // fin for y

            // Un seul thread met à jour le masque d'activité pour la prochaine génération
            #pragma omp single
            {
                // active_rows_next[y] = changed[y-1] || changed[y] || changed[y+1]
                for (int y = 0; y < h; ++y) {
                    uint8_t c = changed_rows[y];
                    if (y > 0)     c |= changed_rows[y-1];
                    if (y < h - 1) c |= changed_rows[y+1];
                    new_active_rows[y] = c;
                }
                active_rows.swap(new_active_rows);

                // Swap des buffers
                unsigned char* tmp = buffer_base;
                buffer_base = dest_base;
                dest_base   = tmp;

                buffer = buffer_base + pad_lines * STRIDE_PAD + 1;
                dest   = dest_base   + pad_lines * STRIDE_PAD + 1;
            }
            // barrière implicite ici (fin de single)
        }
    } // fin region parallel

    frame res;
    res.set_w_h(w, h);

    unsigned char* out =
        reinterpret_cast<unsigned char*>(res.data());

    for (int y = 0; y < h; y++) {
        std::memcpy(out + y * STRIDE_REAL,
                    buffer + y * STRIDE_PAD,
                    STRIDE_REAL);
    }

    delete[] buffer_base;
    delete[] dest_base;

    return res;
}
