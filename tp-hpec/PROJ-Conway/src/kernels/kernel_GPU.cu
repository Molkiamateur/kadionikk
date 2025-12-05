#include "kernels.hpp"
#include <cuda_runtime.h>
#include <cstdio>

// Accès à un pixel PBM (1 bit / pixel)
__device__ int get_cell(
    const unsigned char* in,
    int w,
    int h,
    int bytes_per_row,
    int x,
    int y
) {
    if (x < 0 || x >= w || y < 0 || y >= h) return 0;

    int byte_index = y * bytes_per_row + (x >> 3);   // x/8
    int bit = 7 - (x & 7);                           // bit7 = pixel gauche

    return (in[byte_index] >> bit) & 1;
}

// Kernel CUDA 1 thread = 1 octet (8 cellules)
__global__ void conway_kernel(
    const unsigned char* __restrict__ in,
    unsigned char* __restrict__ out,
    int w,
    int h,
    int bytes_per_row
) {
    int byte_x = blockIdx.x * blockDim.x + threadIdx.x;
    int y      = blockIdx.y * blockDim.y + threadIdx.y;

    if (byte_x >= bytes_per_row || y >= h) return;

    int base_x = byte_x * 8;
    unsigned char new_byte = 0;

    // 8 bits du byte
    for (int bit = 0; bit < 8; bit++) {
        int x = base_x + (7 - bit);
        if (x >= w) continue;

        int self = get_cell(in, w, h, bytes_per_row, x, y);

        int neighbors = 0;
        for (int dy = -1; dy <= 1; dy++) {
            for (int dx = -1; dx <= 1; dx++) {
                if (dx != 0 || dy != 0)
                    neighbors += get_cell(in, w, h, bytes_per_row, x + dx, y + dy);
            }
        }

        int alive = (neighbors == 3) || (self && neighbors == 2);
        if (alive) new_byte |= (1u << bit);
    }

    out[y * bytes_per_row + byte_x] = new_byte;
}

// =====================================================================
//  API publique : conway_GPU
// =====================================================================
extern "C" frame conway_GPU(frame start, int gens)
{
    int w = start.width();
    int h = start.height();
    int bytes_per_row = w / 8;
    int size = bytes_per_row * h;

    unsigned char* host_data =
        reinterpret_cast<unsigned char*>(start.data());

    // GPU: malloc
    unsigned char *d_cur = nullptr, *d_next = nullptr;
    cudaMalloc(&d_cur,  size);
    cudaMalloc(&d_next, size);

    cudaMemcpy(d_cur, host_data, size, cudaMemcpyHostToDevice);

    dim3 block(32, 8);
    dim3 grid(
        (bytes_per_row + block.x - 1) / block.x,
        (h + block.y - 1) / block.y
    );

    for (int i = 0; i < gens; i++) {
        conway_kernel<<<grid, block>>>(d_cur, d_next, w, h, bytes_per_row);
        cudaDeviceSynchronize();

        unsigned char* tmp = d_cur;
        d_cur = d_next;
        d_next = tmp;
    }

    cudaMemcpy(host_data, d_cur, size, cudaMemcpyDeviceToHost);

    cudaFree(d_cur);
    cudaFree(d_next);

    return start;
}
