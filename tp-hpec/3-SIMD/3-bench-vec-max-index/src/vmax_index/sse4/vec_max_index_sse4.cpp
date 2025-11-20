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
#ifdef __SSE4_2__
#include "vec_max_index_sse4.hpp"
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
int vec_max_index_sse4(
        const float* __restrict src,
        const int               length)
{
        if (length <= 0) return -1;

        const int simd  = sizeof(__m128) / sizeof(float); // 4
        const int first = length & ~(simd - 1);

        // vector of maxima per lane and corresponding indices
        __m128  max_vec = _mm_set1_ps(-FLT_MAX);
        __m128i max_idx = _mm_set1_epi32(0);

        // constant increment vector 0..7
        const __m128i idx_inc = _mm_setr_epi32(0,1,2,3);

        // process blocks of 8 floats, updating lane-wise max and its index
        for (int x = 0; x < first; x += simd)
        {
                __m128 a = _mm_loadu_ps(src + x);
                __m128i base = _mm_set1_epi32(x);
                __m128i cur_idx = _mm_add_epi32(base, idx_inc);

                // compare and get mask (all bits set where a > max_vec)
                __m128  cmp_ps = _mm_cmp_ps(a, max_vec, _CMP_GT_OS);
                __m128i mask_i = _mm_castps_si128(cmp_ps);
                __m128  mask_ps = _mm_castsi128_ps(mask_i);

                // blend using the mask (simpler than manual and/or)
                max_vec = _mm_blendv_ps(max_vec, a, mask_ps);
                max_idx = _mm_blendv_epi8(max_idx, cur_idx, mask_i);
        }

        // reduce SIMD maxima to scalar max and corresponding index
        alignas(32) float tempf[8];
        alignas(32) int tempi[8];
        _mm_store_ps(tempf, max_vec);
        _mm_store_si128((__m128i*)tempi, max_idx);

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

};
/*
 *
 *
 *##############################################################################
 *
 *
 */
#endif