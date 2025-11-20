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
#include "vec_max_avx2.hpp"
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
float vec_max_avx2(
        const float* __restrict src,
        const int               length)
{
        const int simd  = sizeof(__m256) / sizeof(float);
        const int first = length & ~(simd - 1);
        __m256 max_vec = _mm256_set1_ps(-FLT_MAX);
        float result = -FLT_MAX;

        //
        // processing the data set 8 elements by 8 elements
        //

        for(int x = 0; x < first; x += simd)
        {
                const __m256 a = _mm256_loadu_ps( src + x );
                max_vec = _mm256_max_ps(max_vec, a);
        }

        // The SIMD register contains up to 8 partial maxima; extract and reduce to the final maximum
        alignas(32) float temp[simd];
        _mm256_store_ps(temp, max_vec);
        for (int i = 0; i < simd; ++i)
        {
                if (temp[i] > result)
                        result = temp[i];
        }

        //
        // processing the rest of the elements
        //
        for (int i = first; i < length; i+= 1)
        {
                if (src[i] > result)
                        result = src[i];
        }
        return result;
};
/*
 *
 *
 *##############################################################################
 *
 *
 */
#endif