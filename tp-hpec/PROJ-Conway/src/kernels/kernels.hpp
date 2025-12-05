#include "../frame/frame.hpp"

#define KN 7
extern frame(*kernels[KN])(frame, int);
extern const char *kernel_name[KN];

frame conway_Naive(frame start, int gens);
frame conway_Smart(frame start, int gens);
frame conway_OpenMP(frame start, int gens);
frame conway_SIMD(frame start, int gens);
frame conway_Fast(frame start, int gens);
frame conway_BitParallel(frame start, int gens);

// Nouvelle entrée GPU :
extern "C" frame conway_GPU(frame start, int gens);

