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

#include "counter/counter.hpp"
#include <cstring>
#include <chrono>
#include <random>


//   #   #                    #
//   #   #                    #
//   #   #   ###    ###    ## #   ###   # ##
//   #####  #   #      #  #  ##  #   #  ##  #
//   #   #  #####   ####  #   #  #####  #
//   #   #  #      #   #  #   #  #      #
//   #   #   ###    ####   ####   ###   #
//

void header( )
{
    printf("#############################################################################\n");
#if defined (__APPLE__)
    printf("# Stage 5 - Branch predictions, remove “if” from your codes ! on MacOS\n");
#elif defined (__linux__)
    printf("# Stage 5 - Branch predictions, remove “if” from your codes ! on Linux\n");
#else
    printf("# Stage 5 - Branch predictions, remove “if” from your codes ! on Windows\n");
#endif
    printf("# Bertrand LE GAL - bertrand.legal@irisa.fr\n");
    printf("# Yannick  BORNAT - yannick.bornat@enseirb-matmeca.fr\n");
    printf("#\n");

#if defined (__clang__)
    printf("# Code compiled with LLVM (%d.%d.%d) ", __clang_major__, __clang_minor__, __clang_patchlevel__);
#elif defined (__GNUC__)
    printf("# Code compiled with GCC (%d.%d.%d) ", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
#else
    printf("# Code compiled with UNKWON compiler ");
#endif
    printf("the %s at %s\n", __DATE__, __TIME__);
    printf("#############################################################################\n");
}

//   #   #          #
//   ## ##
//   # # #   ###   ##   # ##
//   # # #      #   #   ##  #
//   #   #   ####   #   #   #
//   #   #  #   #   #   #   #
//   #   #   ####  ###  #   #
//

int main(int argc, char* argv[])
{

    header();

    // const int v_begin  =       1; // 1024;
    // const int v_end    = 16*1024; // 65536
    const int buffSize = 128*1024; // 65536

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(-10.f, +10.f);

    int nTest = (8388608/256)/64;
    long num0n = 0;
    long num1n = 0;
    long num0v1 = 0;
    long num1v1 = 0;
    long num0v2 = 0;
    long num1v2 = 0;
    long num0v3 = 0;
    long num1v3 = 0;

    signed char a_tab[buffSize];


//    for(int alter = v_begin; alter <= v_end; alter=alter*1.1 +1)
    for(int alter = 0; alter <= 256; alter=alter+8)
      {

        printf("%5d : ", alter);
        for (int i = 0; i < buffSize; i += 1)
        {
            // if ((i%(2*alter))<alter)
            //     a_tab[i] = 1;
            // else
            //     a_tab[i] = -1;

            a_tab[i] = (rand()%128) + alter;
        }



        num0n = 0;
        num1n = 0;

        auto start_i_ref_naive = std::chrono::system_clock::now();
        for(int32_t loop = 0; loop < nTest; loop += 1)
            counter_naive(a_tab, buffSize, &num0n, &num1n);
        auto stop_i_ref_naive = std::chrono::system_clock::now();

        const uint64_t time_ref_naive = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_i_ref_naive - start_i_ref_naive).count() / nTest;
        printf(" Average naive [%8ld ns / exec : %1.3f ns / data] | ", (int64_t)time_ref_naive, (time_ref_naive/(float)buffSize));

        num0v1 = 0;
        num1v1 = 0;

        auto start_i_ref_v1 = std::chrono::system_clock::now();
        for(int32_t loop = 0; loop < nTest; loop += 1)
            counter_v1(a_tab, buffSize, &num0v1, &num1v1);
        auto stop_i_ref_v1 = std::chrono::system_clock::now();

        const uint64_t time_ref_v1 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_i_ref_v1 - start_i_ref_v1).count() / nTest;
        printf(" v1 [%8ld ns / exec : %1.3f ns / data] | ", (int64_t)time_ref_v1, (time_ref_v1/(float)buffSize));

        num0v2 = 0;
        num1v2 = 0;

        auto start_i_ref_v2 = std::chrono::system_clock::now();
        for(int32_t loop = 0; loop < nTest; loop += 1)
            counter_v2(a_tab, buffSize, &num0v2, &num1v2);
        auto stop_i_ref_v2 = std::chrono::system_clock::now();

        const uint64_t time_ref_v2 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_i_ref_v2 - start_i_ref_v2).count() / nTest;
        printf(" v2 [%8ld ns / exec : %1.3f ns / data] | ", (int64_t)time_ref_v2, (time_ref_v2/(float)buffSize));

        num0v3 = 0;
        num1v3 = 0;

        auto start_i_ref_v3 = std::chrono::system_clock::now();
        for(int32_t loop = 0; loop < nTest; loop += 1)
            counter_v3(a_tab, buffSize, &num0v3, &num1v3);
        auto stop_i_ref_v3 = std::chrono::system_clock::now();

        const uint64_t time_ref_v3 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_i_ref_v3 - start_i_ref_v3).count() / nTest;
        printf(" v3 [%8ld ns / exec : %1.3f ns / data]\n", (int64_t)time_ref_v3, (time_ref_v3/(float)buffSize));

        if ((num0n != num0v1) || (num1n != num1v1)) {
            printf("Failed : Counters do not match ! (ptr)\n");
            break;
        }
        if ((num0n != num0v2) || (num1n != num1v2)) {
            printf("Failed : Counters do not match ! (reg)\n");
            break;
        }
        if ((num0n != num0v3) || (num1n != num1v3)) {
            printf("Failed : Counters do not match ! (reg)\n");
            break;
        }

    }

    return EXIT_SUCCESS;
}
