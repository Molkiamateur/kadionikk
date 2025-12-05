#include "../frame/frame.hpp"

#define KN 6
extern frame(*kernels[KN])(frame, int);
extern const char *kernel_name[KN];

frame conway_Naive(frame start, int gens);
frame conway_Smart(frame start, int gens);
frame conway_OpenMP(frame start, int gens);
frame conway_SIMD(frame start, int gens);
frame conway_Fast(frame start, int gens);
frame conway_BitParallel(frame start, int gens);



