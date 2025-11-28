/*
*  Conway's Game of life project
*  Yannick Bornat - yannick.bornat@enseirb-matmeca.fr
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

#define START_IMG    "data/start.pbm"
#define DEST__IMG    "data/final.pbm"

#include "frame/frame.hpp"
#include "kernels/kernels.hpp"

#include <iostream>
#include <omp.h>

#include <cstring>
#include <chrono>

/*
 *##############################################################################
 */

void header( )
{
    printf("(II)\n");
    printf("(II) Conway's Game of Life project\n");
    printf("(II) Yannick Bornat - yannick.bornat@enseirb-matmeca.fr\n");
    printf("(II)\n");
}

/*
 *##############################################################################
 */

int main(int argc, char* argv[])
{

    header();

//    ###  ####  ###   ###  ####   ###        ##   #  #  ###  ###   #  #  ###
//   #     #     #  #   #   #     #          #  #  #  #   #   #  #  #  #   #
//    ##   ###   ###    #   ###    ##        #  #  #  #   #   ###   #  #   #
//      #  #     #  #   #   #        #       #  #  #  #   #   #     #  #   #
//   ###   ####  #  #  ###  ####  ###         ##   ####   #   #     ####   #
//

    frame start { START_IMG };
    if (argc>1) {
        int kernel_num = atoi(argv[1]);
        if ((kernel_num<0)||(kernel_num>=KN)) {
            printf("Available Kernels :\n");
            for (int i=0; i<KN; i++) {
                printf("%2d: %7s\n", i, kernel_name[i]);
            }
            return -1;
        }
        int nGens = 1000;
        if (argc>2) {
            nGens = atoi(argv[2]);
        }
        printf("Outputing %d generations with kernel_%s\n", nGens, kernel_name[kernel_num]);
        char dname[30] = "/tmp/glife/gen0001.pbm";
        for (int i=0; i<nGens; i++) {
            dname[14] = i/1000      + '0';
            dname[15] = (i/100)%10  + '0';
            dname[16] = (i/10 )%10  + '0';
            dname[17] =  i     %10  + '0';
            start.store(dname);
            start = kernels[kernel_num](start, 1);
        }
        return 0;
    }


//   #  ##  ####  ###   #   #  ####  #          ##   #  #  ####   ##   #  ##
//   # ##   #     #  #  ##  #  #     #         #  #  #  #  #     #  #  # ##
//   ###    ###   ###   # # #  ###   #         #     ####  ###   #     ###
//   # ##   #     #  #  #  ##  #     #         #  #  #  #  #     #  #  # ##
//   #  ##  ####  #  #  #   #  ####  ###        ##   #  #  ####   ##   #  ##
//

    // first build the references
    printf("Testing kernel accuracy\n");
    #define TEST_FRAMES 10
    frame rand_frames[TEST_FRAMES];
    frame refr_frames[TEST_FRAMES];
    for (int i=0; i<TEST_FRAMES; i++) {
        rand_frames[i] = frame(200, 200);
        refr_frames[i] = conway_Naive(rand_frames[i], 1);
    }

    // then check if each kernel output is equal to the reference
    int pass = 1;
    for (int k=1; k<KN; k+=1) {
        bool res = 1;
        for (int t=0; t<TEST_FRAMES; t++) {
            res = res && (refr_frames[t] == kernels[k](rand_frames[t], 1));
        }
        if (res) {
            printf("Kernel : %7s => \033[32mPASS\033[0m\n", kernel_name[k]);
        } else {
            printf("Kernel : %7s => \033[31mFAIL\033[0m\n", kernel_name[k]);
            pass = 0;
        }
    }
    // exit with Error if a kernel is wrong!
    if (!pass) exit(-1);


//   ###   ####  ###   ####       #   #  ####   ##    ###  #  #  ###   ####   ###
//   #  #  #     #  #  #          ## ##  #     #  #  #     #  #  #  #  #     #
//   ###   ###   ###   ###        # # #  ###   ####   ##   #  #  ###   ###    ##
//   #     #     #  #  #          #   #  #     #  #     #  #  #  #  #  #        #
//   #     ####  #  #  #          #   #  ####  #  #  ###   ####  #  #  ####  ###
//
    printf("Running frames for each kernel for time measurement\n");
    uint64_t time_ref = 0;
    for (int k=0; k<KN; k++) {
        // first compute 500 generations to have a rought reference
        auto start_i_ref = std::chrono::system_clock::now();
        start = kernels[k](start, 500);
        auto stop_i_ref = std::chrono::system_clock::now();
        uint64_t time_meas = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_i_ref - start_i_ref).count();

        // depending of computation time, set a number og generations for
        // a more precise measure
        uint64_t nTest = 1000000000000L/time_meas;

        if (nTest>600) {
            // if a hight number of generations is necessary, perform a second benchmark
            start_i_ref = std::chrono::system_clock::now();
            start = kernels[k](start, nTest);
            stop_i_ref = std::chrono::system_clock::now();
            time_meas = std::chrono::duration_cast<std::chrono::nanoseconds>(stop_i_ref - start_i_ref).count() / nTest;
        } else {
            // otherwise, keep 500 generations
            nTest = 500;
            time_meas /= nTest;
        }

        // if running the naive kernel, keep value as reference
        if (!k) time_ref = time_meas;

        // output measures
        printf("Kernel %7s (%6d generations) : Average [%8d ns / generation, %1.3f ns / cell ] (x %3.3f)\n", kernel_name[k], (uint32_t)nTest, (int32_t)time_meas, (time_meas/(float)(start.cells())), (float)time_ref/time_meas);
    }
    start.store(DEST__IMG);

    return 0;

}