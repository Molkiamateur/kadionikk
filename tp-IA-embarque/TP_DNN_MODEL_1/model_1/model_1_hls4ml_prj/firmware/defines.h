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
#define N_LAYER_4 100
#define N_LAYER_6 50
#define N_LAYER_8 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,2> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<8,2> layer2_t;
typedef ap_fixed<8,2> Dense_weight_t;
typedef ap_fixed<8,2> Dense_bias_t;
typedef ap_fixed<16,8> Activation_default_t;
typedef ap_fixed<16,8> layer3_t;
typedef ap_fixed<8,2> layer4_t;
typedef ap_fixed<16,8> layer5_t;
typedef ap_fixed<8,2> layer6_t;
typedef ap_fixed<16,8> layer7_t;
typedef ap_fixed<8,2> layer8_t;
typedef ap_fixed<16,8> result_t;

#endif
