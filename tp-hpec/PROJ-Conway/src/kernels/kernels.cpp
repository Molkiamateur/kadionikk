#include "kernels.hpp"

frame (*kernels[KN])(frame, int) = {
    conway_Naive,
    conway_Smart,
    conway_OpenMP,
    conway_SIMD,
    conway_Fast,
    conway_BitParallel,
    conway_GPU            // <<<<< NOUVEAU KERNEL
};

const char *kernel_name[KN] = {
    "Naive",
    "Smart",
    "OpenMP",
    "SIMD",
    "Fast",
    "BitParallel",
    "GPU"                 // <<<<< NOM DU KERNEL
};

#include "kernel_Naive.cpp"
#include "kernel_Smart.cpp"
#include "kernel_OpenMP.cpp"
#include "kernel_SIMD.cpp"
#include "kernel_Fast.cpp"
#include "kernel_Bit.cpp"
// PAS besoin d’inclure kernel_GPU.cu ici (nvcc s’en occupe)
