#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 2
#define N_LAYER_2 200
#define N_LAYER_5 100
#define N_LAYER_8 50
#define N_LAYER_11 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,3> weight2_t;
typedef ap_fixed<16,3> bias2_t;
typedef ap_fixed<16,6> layer14_t;
typedef struct exponent_type14 { ap_uint<1> sign; ap_int<9> weight; } exponent_type14;
typedef ap_fixed<16,3> bias14_t;
typedef ap_ufixed<9,2> layer4_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_fixed<16,3> weight5_t;
typedef ap_fixed<16,3> bias5_t;
typedef ap_fixed<16,6> layer15_t;
typedef struct exponent_type15 { ap_uint<1> sign; ap_int<9> weight; } exponent_type15;
typedef ap_fixed<16,3> bias15_t;
typedef ap_ufixed<9,2> layer7_t;
typedef ap_fixed<16,6> layer8_t;
typedef ap_fixed<16,3> weight8_t;
typedef ap_fixed<16,3> bias8_t;
typedef ap_fixed<16,6> layer16_t;
typedef struct exponent_type16 { ap_uint<1> sign; ap_int<9> weight; } exponent_type16;
typedef ap_fixed<16,3> bias16_t;
typedef ap_ufixed<9,2> layer10_t;
typedef ap_fixed<16,6> layer11_t;
typedef ap_fixed<16,3> weight11_t;
typedef ap_fixed<16,3> bias11_t;
typedef ap_fixed<16,6> layer17_t;
typedef struct exponent_type17 { ap_uint<1> sign; ap_int<4> weight; } exponent_type17;
typedef ap_fixed<16,3> bias17_t;
typedef ap_fixed<9,3> result_t;

#endif
