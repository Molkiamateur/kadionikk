#include "kernels.hpp"

#ifdef HAVE_CUDA
frame (*kernels[KN])(frame, int) = {
    conway_Naive,
    conway_Smart,
    conway_OpenMP,
    conway_SIMD,
    conway_Fast,
    conway_BitParallel,
    conway_GPU
};

const char *kernel_name[KN] = {
    "Naive", "Smart", "OpenMP", "SIMD", "Fast", "BitParallel", "GPU"
};

#else

frame (*kernels[KN])(frame, int) = {
    conway_Naive,
    conway_Smart,
    conway_OpenMP,
    conway_SIMD,
    conway_Fast,
    conway_BitParallel
};

const char *kernel_name[KN] = {
    "Naive", "Smart", "OpenMP", "SIMD", "Fast", "BitParallel"
};

#endif

#include "kernel_Naive.cpp"
#include "kernel_Smart.cpp"
#include "kernel_OpenMP.cpp"
#include "kernel_SIMD.cpp"
#include "kernel_Fast.cpp"
#include "kernel_Bit.cpp"

#ifdef HAVE_CUDA
#include "kernel_GPU.cu"
#endif
