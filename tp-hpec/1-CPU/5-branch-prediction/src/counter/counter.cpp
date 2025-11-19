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

#include "counter.hpp"


void counter_naive(
        const signed char*  src_1,
        const int    length,
        long*  zeros,
        long*  ones)
{
    for (int i = 0; i < length; i+= 1)
    {
        if( src_1[i] > 0)
            *ones += 1;
        else
            *zeros += 1;
    }
}


void counter_v1(
        const signed char*  src_1,
        const int    length,
        long*  zeros,
        long*  ones)
{
    counter_naive(src_1, length, zeros, ones);
}


void counter_v2(
        const signed char*  src_1,
        const int    length,
        long*  zeros,
        long*  ones)
{
    counter_naive(src_1, length, zeros, ones);
}



void counter_v3(
        const signed char*  src_1,
        const int    length,
        long*  zeros,
        long*  ones)
{
    counter_naive(src_1, length, zeros, ones);
}

