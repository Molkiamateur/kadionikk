#include <cuda_runtime.h>
#include "kernels.hpp"

typedef unsigned char u8;

// ============================================================
//  Helper : accès sécurisé aux octets (1 byte = 8 pixels)
// ============================================================
__device__ __forceinline__
u8 ld_global(const u8* in, int h, int bpr, int y, int x_byte)
{
    if (y < 0 || y >= h)          return 0;
    if (x_byte < 0 || x_byte >= bpr) return 0;
    return in[y * bpr + x_byte];
}

// ============================================================
//  Réduction bit-parallèle des voisins (8 bits en parallèle)
//  même logique que ton additionneur logique s0/s1/s2
// ============================================================
__device__ __forceinline__
u8 bit_reduce(u8 nw, u8 n, u8 ne,
              u8 w,         u8 e,
              u8 sw, u8 s, u8 se,
              u8 self)
{
    u8 s0 = 0, s1 = 0, s2 = 0;
    u8 nn[8] = {nw, n, ne, w, e, sw, s, se};

#pragma unroll
    for (int i = 0; i < 8; i++) {
        u8 v  = nn[i];
        u8 c1 = s0 & v;
        u8 c2 = s1 & c1;
        s0 ^= v;
        s1 ^= c1;
        s2 |= c2;
    }

    // Conway : (s1 & ~s2) & (s0 | self)
    return (u8)((~s2 & s1) & (s0 | self));
}

// ============================================================
//  Kernel CUDA global-memory bit-packé
//  1 thread = 1 octet (8 cellules)
// ============================================================
__global__
void conway_kernel_global(
    const u8* __restrict__ in,
    u8*       __restrict__ out,
    int w,          // largeur en pixels
    int h,          // hauteur en pixels
    int bpr         // bytes per row = w/8
) {
    int gx = blockIdx.x * blockDim.x + threadIdx.x; // index d’octet
    int gy = blockIdx.y * blockDim.y + threadIdx.y; // ligne

    if (gx >= bpr || gy >= h) return;

    // On charge les 3×3 octets autour de (gx,gy)
    u8 uL = ld_global(in, h, bpr, gy-1, gx-1);
    u8 uC = ld_global(in, h, bpr, gy-1, gx  );
    u8 uR = ld_global(in, h, bpr, gy-1, gx+1);

    u8 cL = ld_global(in, h, bpr, gy,   gx-1);
    u8 cC = ld_global(in, h, bpr, gy,   gx  );
    u8 cR = ld_global(in, h, bpr, gy,   gx+1);

    u8 dL = ld_global(in, h, bpr, gy+1, gx-1);
    u8 dC = ld_global(in, h, bpr, gy+1, gx  );
    u8 dR = ld_global(in, h, bpr, gy+1, gx+1);

    // Voisinage bit-parallèle (même convention que ton kernel BitParallel CPU)
    u8 W  = (u8)((cC >> 1) | (cL << 7));
    u8 E  = (u8)((cC << 1) | (cR >> 7));

    u8 N  = uC;
    u8 S  = dC;

    u8 NW = (u8)((uC >> 1) | (uL << 7));
    u8 NE = (u8)((uC << 1) | (uR >> 7));
    u8 SW = (u8)((dC >> 1) | (dL << 7));
    u8 SE = (u8)((dC << 1) | (dR >> 7));

    u8 out_byte = bit_reduce(NW, N, NE, W, E, SW, S, SE, cC);

    out[gy * bpr + gx] = out_byte;
}

// ============================================================
//  API publique : conway_GPU
// ============================================================
frame conway_GPU(frame start, int gens)
{
    int w   = start.width();
    int h   = start.height();
    int bpr = w / 8;
    int size = bpr * h;

    if (gens <= 0) return start;

    u8* host = reinterpret_cast<u8*>(start.data());

    // Allocation device
    u8 *dA = nullptr, *dB = nullptr;
    cudaMalloc(&dA, size);
    cudaMalloc(&dB, size);

    cudaMemcpy(dA, host, size, cudaMemcpyHostToDevice);

    // Config grille/bloc
    dim3 block(32, 8);
    dim3 grid(
        (bpr + block.x - 1) / block.x,
        (h   + block.y - 1) / block.y
    );

    // Boucle sur les générations
    for (int i = 0; i < gens; i++) {
        conway_kernel_global<<<grid, block>>>(dA, dB, w, h, bpr);
        cudaDeviceSynchronize();
        u8* tmp = dA; dA = dB; dB = tmp;
    }

    cudaMemcpy(host, dA, size, cudaMemcpyDeviceToHost);

    cudaFree(dA);
    cudaFree(dB);

    return start;
}
