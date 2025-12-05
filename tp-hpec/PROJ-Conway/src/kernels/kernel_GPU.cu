#include "kernels.hpp"
#include <cuda_runtime.h>
#include <cstdio>

// =====================================================
// Additionneur bit-parallèle (8 cellules d'un coup)
// =====================================================
__device__ inline uint8_t combine_neighbors_8(
    uint8_t n1, uint8_t n2, uint8_t n3,
    uint8_t n4, uint8_t n5,
    uint8_t n6, uint8_t n7, uint8_t n8,
    uint8_t self
) {
    uint8_t s0 = 0, s1 = 0, s2 = 0;
    uint8_t N[8] = {n1,n2,n3,n4,n5,n6,n7,n8};

    #pragma unroll
    for (int i = 0; i < 8; i++) {
        uint8_t x  = N[i];
        uint8_t c1 = s0 & x;
        uint8_t c2 = s1 & c1;
        s0 ^= x;
        s1 ^= c1;
        s2 |= c2;
    }
    return (uint8_t)((s1 & (uint8_t)~s2) & (uint8_t)(s0 | self));
}

// =====================================================
// Safe load (0 si bord)
// =====================================================
__device__ inline uint8_t load_safe(
    const unsigned char* row, int idx, int max
) {
    if (!row) return 0;
    if (idx < 0 || idx >= max) return 0;
    return row[idx];
}

// =====================================================
// Kernel conforme au CPU BitParallel
// =====================================================
__global__ void conway_kernel_bitpacked(
    const unsigned char* __restrict__ in,
    unsigned char* __restrict__ out,
    int w, int h, int bytes_per_row
) {
    int bx = blockIdx.x * blockDim.x + threadIdx.x;
    int y  = blockIdx.y * blockDim.y + threadIdx.y;

    if (bx >= bytes_per_row || y >= h) return;

    const unsigned char* row_u = (y > 0)     ? in + (y - 1) * bytes_per_row : nullptr;
    const unsigned char* row   =              in +  y      * bytes_per_row;
    const unsigned char* row_d = (y + 1 < h) ? in + (y + 1) * bytes_per_row : nullptr;

    uint8_t uL = load_safe(row_u, bx - 1, bytes_per_row);
    uint8_t uC = load_safe(row_u, bx,     bytes_per_row);
    uint8_t uR = load_safe(row_u, bx + 1, bytes_per_row);

    uint8_t cL = load_safe(row,   bx - 1, bytes_per_row);
    uint8_t cC = load_safe(row,   bx,     bytes_per_row);
    uint8_t cR = load_safe(row,   bx + 1, bytes_per_row);

    uint8_t dL = load_safe(row_d, bx - 1, bytes_per_row);
    uint8_t dC = load_safe(row_d, bx,     bytes_per_row);
    uint8_t dR = load_safe(row_d, bx + 1, bytes_per_row);

    // EXACTEMENT comme ton CPU BitParallel
    uint8_t W  = (uint8_t)((cC >> 1) | (cL << 7));
    uint8_t E  = (uint8_t)((cC << 1) | (cR >> 7));

    uint8_t N  = uC;
    uint8_t S  = dC;

    uint8_t NW = (uint8_t)((uC >> 1) | (uL << 7));
    uint8_t NE = (uint8_t)((uC << 1) | (uR >> 7));
    uint8_t SW = (uint8_t)((dC >> 1) | (dL << 7));
    uint8_t SE = (uint8_t)((dC << 1) | (dR >> 7));

    uint8_t next = combine_neighbors_8(
        NW, N, NE,
        W,     E,
        SW, S, SE,
        cC
    );

    out[y * bytes_per_row + bx] = next;
}

// =====================================================
// API publique
// =====================================================
frame conway_GPU(frame start, int gens) {
    int w = start.width();
    int h = start.height();
    int bytes_per_row = w / 8;
    int size = bytes_per_row * h;

    if (gens <= 0) return start;

    unsigned char* host_data =
        reinterpret_cast<unsigned char*>(start.data());

    unsigned char *d_cur = nullptr, *d_next = nullptr;
    cudaMalloc(&d_cur,  size);
    cudaMalloc(&d_next, size);

    cudaMemcpy(d_cur, host_data, size, cudaMemcpyHostToDevice);

    dim3 block(32, 8);
    dim3 grid(
        (bytes_per_row + block.x - 1) / block.x,
        (h            + block.y - 1) / block.y
    );

    for (int i = 0; i < gens; i++) {
        conway_kernel_bitpacked<<<grid, block>>>(d_cur, d_next, w, h, bytes_per_row);
        cudaDeviceSynchronize();
        unsigned char* tmp = d_cur; d_cur = d_next; d_next = tmp;
    }

    cudaMemcpy(host_data, d_cur, size, cudaMemcpyDeviceToHost);

    cudaFree(d_cur);
    cudaFree(d_next);

    return start;
}
