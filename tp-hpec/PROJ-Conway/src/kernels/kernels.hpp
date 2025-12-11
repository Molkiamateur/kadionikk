#include "../frame/frame.hpp"

#ifdef HAVE_CUDA
#define KN 7
#else
#define KN 6
#endif

extern frame (*kernels[KN])(frame, int);
extern const char *kernel_name[KN];

frame conway_Naive(frame start, int gens);
frame conway_Smart(frame start, int gens);
frame conway_OpenMP(frame start, int gens);
frame conway_SIMD(frame start, int gens);
frame conway_Fast(frame start, int gens);
frame conway_BitParallel(frame start, int gens);

#ifdef HAVE_CUDA
frame conway_GPU(frame start, int gens);
#endif
