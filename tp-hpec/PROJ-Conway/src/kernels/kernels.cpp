#include "kernels.hpp"

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
    "Naive",
    "Smart",
    "OpenMP",
    "SIMD",
    "Fast",
    "BitParallel",
    "GPU"
};


#include "kernel_Naive.cpp"
#include "kernel_Smart.cpp"
#include "kernel_OpenMP.cpp"
#include "kernel_SIMD.cpp"
#include "kernel_Fast.cpp"
#include "kernel_Bit.cpp"
// kernel_GPU.cu est compilé à part par nvcc → pas besoin de l’inclure ici
