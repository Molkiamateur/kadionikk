#include <cstdint>
#include <cstring>
#include <vector>
#include <algorithm>

// ======================================================================
//  Conversion PBM → bitboard 64 bits
// ======================================================================

static inline void pbm_to_bitboard(
    frame& start,
    std::vector<uint64_t>& board,
    int& width,
    int& height,
    int& words_per_row
) {
    width  = start.width();
    height = start.height();

    const int bytes_per_row = width / 8;
    words_per_row = (width + 63) >> 6; // /64 arrondi haut

    board.assign((size_t)height * words_per_row, 0ULL);

    unsigned char* src =
        reinterpret_cast<unsigned char*>(start.data());

    for (int y = 0; y < height; ++y) {
        unsigned char* row = src + y * bytes_per_row;

        for (int b = 0; b < bytes_per_row; ++b) {
            unsigned char byte = row[b];

            // PBM P4 : bit7 = pixel le plus à gauche
            for (int k = 0; k < 8; ++k) {
                if (byte & (1u << k)) {
                    int x = b * 8 + (7 - k); // bit7 → x=0, bit0 → x=7
                    if (x >= width) continue;

                    int word = x >> 6;
                    int bit  = x & 63;
                    board[(size_t)y * words_per_row + word] |= (1ULL << bit);
                }
            }
        }
    }
}

// ======================================================================
//  Conversion bitboard → PBM
// ======================================================================

static inline void bitboard_to_pbm(
    const std::vector<uint64_t>& board,
    frame& out,
    int width,
    int height,
    int words_per_row
) {
    out.set_w_h(width, height);

    const int bytes_per_row = width / 8;
    unsigned char* dst =
        reinterpret_cast<unsigned char*>(out.data());

    for (int y = 0; y < height; ++y) {
        unsigned char* row = dst + y * bytes_per_row;

        for (int b = 0; b < bytes_per_row; ++b) {
            unsigned char byte = 0;

            for (int k = 0; k < 8; ++k) {
                int x = b * 8 + (7 - k);
                if (x >= width) continue;

                int word = x >> 6;
                int bit  = x & 63;

                if (board[(size_t)y * words_per_row + word] & (1ULL << bit)) {
                    byte |= (1u << k);
                }
            }

            row[b] = byte;
        }
    }
}

// ======================================================================
//  Additionneur logique 3 bits (pour 8 plans de voisins)
// ======================================================================

static inline uint64_t combine_neighbors_8(
    uint64_t n1, uint64_t n2, uint64_t n3, uint64_t n4,
    uint64_t n5, uint64_t n6, uint64_t n7, uint64_t n8,
    uint64_t self
) {
    uint64_t s0 = 0, s1 = 0, s2 = 0;

    uint64_t N[8] = {n1,n2,n3,n4,n5,n6,n7,n8};

    for (int i = 0; i < 8; ++i) {
        uint64_t x  = N[i];
        uint64_t c1 = s0 & x;
        uint64_t c2 = s1 & c1;
        s0 ^= x;
        s1 ^= c1;
        s2 |= c2;
    }

    // Règle de Conway : (s1 & ~s2) & (s0 | self)
    return (s1 & ~s2) & (s0 | self);
}

// ======================================================================
//  Noyau principal bit-parallèle optimisé (OpenMP: 1 région pour toutes les gens)
// ======================================================================

frame conway_BitParallel(frame start, int gens) {
    if (gens <= 0) {
        frame copy;
        copy.set_w_h(start.width(), start.height());
        std::memcpy(copy.data(), start.data(), start.width()*start.height()/8);
        return copy;
    }

    int w, h, words_per_row;
    std::vector<uint64_t> cur;
    pbm_to_bitboard(start, cur, w, h, words_per_row);

    std::vector<uint64_t> next(cur.size(), 0ULL);
    std::vector<uint64_t> zero_row(words_per_row, 0ULL);

    uint64_t last_mask;
    if ((w & 63) == 0) {
        last_mask = ~0ULL;
    } else {
        last_mask = (1ULL << (w & 63)) - 1ULL;
    }

    // Une seule région parallèle pour toutes les générations
    #pragma omp parallel
    {
        for (int gen = 0; gen < gens; ++gen) {

            #pragma omp for schedule(static)
            for (int y = 0; y < h; ++y) {
                const uint64_t* row_u = (y > 0)     ? &cur[(size_t)(y - 1) * words_per_row] : zero_row.data();
                const uint64_t* row   =              &cur[(size_t) y      * words_per_row];
                const uint64_t* row_d = (y + 1 < h) ? &cur[(size_t)(y + 1) * words_per_row] : zero_row.data();

                uint64_t* dst = &next[(size_t) y * words_per_row];

                // On traite chaque mot 64 bits de la ligne
                for (int i = 0; i < words_per_row; ++i) {

                    uint64_t u  = row_u[i];
                    uint64_t c  = row[i];
                    uint64_t d  = row_d[i];

                    uint64_t uL = (i > 0) ? row_u[i-1] : 0ULL;
                    uint64_t uR = (i + 1 < words_per_row) ? row_u[i+1] : 0ULL;
                    uint64_t cL = (i > 0) ? row[i-1]     : 0ULL;
                    uint64_t cR = (i + 1 < words_per_row) ? row[i+1]   : 0ULL;
                    uint64_t dL = (i > 0) ? row_d[i-1]   : 0ULL;
                    uint64_t dR = (i + 1 < words_per_row) ? row_d[i+1] : 0ULL;

                    // Shifts horizontaux avec propagation inter-mots
                    uint64_t u_e = (u >> 1) | (uR << 63);
                    uint64_t u_w = (u << 1) | (uL >> 63);

                    uint64_t c_e = (c >> 1) | (cR << 63);
                    uint64_t c_w = (c << 1) | (cL >> 63);

                    uint64_t d_e = (d >> 1) | (dR << 63);
                    uint64_t d_w = (d << 1) | (dL >> 63);

                    uint64_t out = combine_neighbors_8(
                        u_w, u,   u_e,   // NW, N, NE
                        c_w,        c_e, // W,     E
                        d_w, d,   d_e,   // SW, S, SE
                        c             // self
                    );

                    if (i == words_per_row - 1)
                        out &= last_mask;

                    dst[i] = out;
                }
            }

            // Un seul thread fait le swap, puis barrière implicite
            #pragma omp single
            {
                std::swap(cur, next);
            }
            // barrière implicite ici avant gen+1
        }
    }

    frame res;
    bitboard_to_pbm(cur, res, w, h, words_per_row);
    return res;
}
