/**
 *
 *
  Copyright (c) 2012-2020 "Bordeaux INP, Bertrand LE GAL"
  bertrand.legal@ims-bordeaux.fr
  [http://legal.vvv.enseirb-matmeca.fr]

  This file is part of a LDPC library for realtime LDPC decoding
  on processor cores.
 *
 *
 */
#ifdef __AVX2__
#include "vec_max_index_avx2.hpp"
#include <cstdint>
#include <cmath>
#include <algorithm>
#include <limits.h>
#include <immintrin.h>
#include <float.h>
/*
 *
 *
 *##############################################################################
 *
 *
 */
int vec_max_index_avx2(
        const float* __restrict src,
        const int               length)
{
        if (length <= 0) return -1;

        const int simd  = sizeof(__m256) / sizeof(float); // 8
        const int first = length & ~(simd - 1);

        // vector of maxima per lane and corresponding indices
        __m256  max_vec = _mm256_set1_ps(-FLT_MAX);
        __m256i max_idx = _mm256_set1_epi32(0);

        // constant increment vector 0..7
        const __m256i idx_inc = _mm256_setr_epi32(0,1,2,3,4,5,6,7);

        // process blocks of 8 floats, updating lane-wise max and its index
        for (int x = 0; x < first; x += simd)
        {
                __m256 a = _mm256_loadu_ps(src + x);
                __m256i base = _mm256_set1_epi32(x);
                __m256i cur_idx = _mm256_add_epi32(base, idx_inc);

                // compare and get mask (all bits set where a > max_vec)
                __m256  mask_ps = _mm256_cmp_ps(a, max_vec, _CMP_GT_OS);
                __m256i mask_i = _mm256_castps_si256(mask_ps);

                // blend using the mask
                max_vec = _mm256_blendv_ps(max_vec, a, mask_ps);
                max_idx = _mm256_blendv_epi8(max_idx, cur_idx, mask_i);
        }

        // reduce SIMD maxima to scalar max and corresponding index
        alignas(32) float tempf[8];
        alignas(32) int tempi[8];
        _mm256_store_ps(tempf, max_vec);
        _mm256_store_si256((__m256i*)tempi, max_idx);

        float max_val = tempf[0];
        int   max_i   = tempi[0];
        for (int i = 1; i < simd; ++i)
        {
                if (tempf[i] > max_val)
                {
                        max_val = tempf[i];
                        max_i = tempi[i];
                }
        }

        // consider tail elements (scalar)
        for (int i = first; i < length; ++i)
        {
                if (src[i] > max_val)
                {
                        max_val = src[i];
                        max_i = i;
                }
        }

        return max_i;
}
/*
 *
 *
 *##############################################################################
 *
 *
 */
#endif