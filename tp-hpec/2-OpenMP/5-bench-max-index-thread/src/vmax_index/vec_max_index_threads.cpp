/*
*	Optimized byte interleaving functions - Copyright (c) 2021 Bertrand LE GAL
*
*  This software is provided 'as-is', without any express or
*  implied warranty. In no event will the authors be held
*  liable for any damages arising from the use of this software.
*
*  Permission is granted to anyone to use this software for any purpose,
*  including commercial applications, and to alter it and redistribute
*  it freely, subject to the following restrictions:
*
*  1. The origin of this software must not be misrepresented;
*  you must not claim that you wrote the original software.
*  If you use this software in a product, an acknowledgment
*  in the product documentation would be appreciated but
*  is not required.
*
*  2. Altered source versions must be plainly marked as such,
*  and must not be misrepresented as being the original software.
*
*  3. This notice may not be removed or altered from any
*  source distribution.
*
*/

#include <cfloat>
#include <climits>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include <thread>

/*
 *
 *
 *##############################################################################
 *
 *
 */
int vec_max_index_x86(
        const float* __restrict src,
        const int               length)
{
    float maxv = -FLT_MAX;
    int index  =        0;
    for (int i = 0; i < length; i+= 1)
    {
        if( src[i] > maxv )
        {
            maxv  = src[i];
            index = i;
        }
    }
    return index;
};
/*
 *
 *
 *##############################################################################
 *
 *
 */
static void thread_vec_max_index(
    const float* src,
    const int start,
    const int stop,
    float* maxv,
    int*   idx)
{
    (*maxv) = src[start];  //
    (*idx)  = start;       //

    for (int i = start; i < stop; i+= 1)
    {
        if( src[i] > (*maxv) )
            {
                (*maxv)  = src[i];
                (*idx)   = i;
            }
        }
}
/*
 *
 *
 *##############################################################################
 *
 *
 */

int vec_max_index_threads(
        const float* __restrict src,
        const int               length,
        const int               nThreads)
{
    const int numThreads = std::min(nThreads, (int)std::thread::hardware_concurrency());
    std::thread* threads = new std::thread[numThreads];

    float* maxv = new float[numThreads];
    int*   idx  = new int[numThreads];

    const int blockSize = length / numThreads;
    for (int t = 0; t < numThreads; t++)
    {
        const int start = t * blockSize;
        const int stop  = (t == (numThreads - 1)) ? length : start + blockSize;

        threads[t] = std::thread(
            thread_vec_max_index,
            src,
            start,
            stop,
            &maxv[t],
            &idx[t]
        );
    }

    for (int t = 0; t < numThreads; t++)
    {
        threads[t].join();
    }

    float global_maxv = -FLT_MAX;
    int   global_idx  =        0;

    for (int t = 0; t < numThreads; t++)
    {
        if( maxv[t] > global_maxv )
        {
            global_maxv = maxv[t];
            global_idx  = idx[t];
        }
    }

    delete[] threads;
    delete[] maxv;
    delete[] idx;

    return global_idx;

};
/*
 *
 *
 *##############################################################################
 *
 *
 */
int vec_max_index_x86_novect(
        const float* __restrict src,
        const int32_t length)
{
    float maxv = -FLT_MAX;
    int index  =        0;
#if defined (__clang__)
    #pragma clang loop vectorize(disable)
#endif
    for (int i = 0; i < length; i+= 1)
    {
        if( src[i] > maxv )
        {
            maxv  = src[i];
            index = i;
        }
    }
    return index;
};
/*
 *
 *
 *##############################################################################
 *
 *
 */
