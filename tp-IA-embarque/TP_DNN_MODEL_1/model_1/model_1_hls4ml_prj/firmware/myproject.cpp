//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t dense_input[N_INPUT_1_1],
    result_t layer9_out[N_LAYER_8],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=dense_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=dense_input,layer9_out 
    #pragma HLS PIPELINE 

    const_size_in_1 = N_INPUT_1_1;
    const_size_out_1 = N_LAYER_8;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<dense_weight_t, 400>(w2, "w2.txt");
        nnet::load_weights_from_txt<dense_bias_t, 200>(b2, "b2.txt");
        nnet::load_weights_from_txt<dense_1_weight_t, 20000>(w4, "w4.txt");
        nnet::load_weights_from_txt<dense_1_bias_t, 100>(b4, "b4.txt");
        nnet::load_weights_from_txt<dense_2_weight_t, 5000>(w6, "w6.txt");
        nnet::load_weights_from_txt<dense_2_bias_t, 50>(b6, "b6.txt");
        nnet::load_weights_from_txt<dense_3_weight_t, 50>(w8, "w8.txt");
        nnet::load_weights_from_txt<dense_3_bias_t, 1>(b8, "b8.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    layer2_t layer2_out[N_LAYER_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::dense<input_t, layer2_t, config2>(dense_input, layer2_out, w2, b2); // dense
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer2_t>(layer2_out, "dense", N_LAYER_2);
#endif

    layer3_t layer3_out[N_LAYER_2];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0
    nnet::relu<layer2_t, layer3_t, relu_config3>(layer2_out, layer3_out); // dense_relu
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer3_t>(layer3_out, "dense_relu", N_LAYER_2);
#endif

    layer4_t layer4_out[N_LAYER_4];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::dense<layer3_t, layer4_t, config4>(layer3_out, layer4_out, w4, b4); // dense_1
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer4_t>(layer4_out, "dense_1", N_LAYER_4);
#endif

    layer5_t layer5_out[N_LAYER_4];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::relu<layer4_t, layer5_t, relu_config5>(layer4_out, layer5_out); // dense_1_relu
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer5_t>(layer5_out, "dense_1_relu", N_LAYER_4);
#endif

    layer6_t layer6_out[N_LAYER_6];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0
    nnet::dense<layer5_t, layer6_t, config6>(layer5_out, layer6_out, w6, b6); // dense_2
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer6_t>(layer6_out, "dense_2", N_LAYER_6);
#endif

    layer7_t layer7_out[N_LAYER_6];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::relu<layer6_t, layer7_t, relu_config7>(layer6_out, layer7_out); // dense_2_relu
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer7_t>(layer7_out, "dense_2_relu", N_LAYER_6);
#endif

    layer8_t layer8_out[N_LAYER_8];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    nnet::dense<layer7_t, layer8_t, config8>(layer7_out, layer8_out, w8, b8); // dense_3
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer8_t>(layer8_out, "dense_3", N_LAYER_8);
#endif

    nnet::sigmoid<layer8_t, result_t, sigmoid_config9>(layer8_out, layer9_out); // dense_3_sigmoid
#ifndef __SYNTHESIS__
    nnet::save_layer_output<result_t>(layer9_out, "dense_3_sigmoid", N_LAYER_8);
#endif

}
