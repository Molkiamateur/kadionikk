#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_batchnorm_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/s14.h"
#include "weights/b14.h"
#include "weights/w5.h"
#include "weights/b5.h"
#include "weights/s15.h"
#include "weights/b15.h"
#include "weights/w8.h"
#include "weights/b8.h"
#include "weights/s16.h"
#include "weights/b16.h"
#include "weights/w11.h"
#include "weights/b11.h"
#include "weights/s17.h"
#include "weights/b17.h"

//hls-fpga-machine-learning insert layer-config
// q_dense_1
struct config2 : nnet::dense_config {
    static const unsigned n_in = N_INPUT_1_1;
    static const unsigned n_out = N_LAYER_2;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 100;
    static const unsigned n_zeros = 300;
    static const unsigned n_nonzeros = 100;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<16,6> accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// q_dense_1_alpha
struct config14 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_2;
    static const unsigned n_filt = -1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 100;
    static const bool store_weights_in_bram = false;
    typedef bias14_t bias_t;
    typedef exponent_type14 scale_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::weight_exponential<x_T, y_T, res_T>;
};

// q_relu_1
struct relu_config4 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 100;
    typedef ap_fixed<18,8> table_t;
};

// q_dense_2
struct config5 : nnet::dense_config {
    static const unsigned n_in = N_LAYER_2;
    static const unsigned n_out = N_LAYER_5;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 100;
    static const unsigned n_zeros = 15000;
    static const unsigned n_nonzeros = 5000;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<16,6> accum_t;
    typedef bias5_t bias_t;
    typedef weight5_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// q_dense_2_alpha
struct config15 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_5;
    static const unsigned n_filt = -1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 100;
    static const bool store_weights_in_bram = false;
    typedef bias15_t bias_t;
    typedef exponent_type15 scale_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::weight_exponential<x_T, y_T, res_T>;
};

// q_relu_2
struct relu_config7 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_5;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 100;
    typedef ap_fixed<18,8> table_t;
};

// q_dense_3
struct config8 : nnet::dense_config {
    static const unsigned n_in = N_LAYER_5;
    static const unsigned n_out = N_LAYER_8;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 100;
    static const unsigned n_zeros = 3750;
    static const unsigned n_nonzeros = 1250;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<16,6> accum_t;
    typedef bias8_t bias_t;
    typedef weight8_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// q_dense_3_alpha
struct config16 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_8;
    static const unsigned n_filt = -1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 100;
    static const bool store_weights_in_bram = false;
    typedef bias16_t bias_t;
    typedef exponent_type16 scale_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::weight_exponential<x_T, y_T, res_T>;
};

// q_relu_3
struct relu_config10 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_8;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 100;
    typedef ap_fixed<18,8> table_t;
};

// q_dense_4
struct config11 : nnet::dense_config {
    static const unsigned n_in = N_LAYER_8;
    static const unsigned n_out = N_LAYER_11;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 50;
    static const unsigned n_zeros = 38;
    static const unsigned n_nonzeros = 12;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<16,6> accum_t;
    typedef bias11_t bias_t;
    typedef weight11_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// q_dense_4_alpha
struct config17 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_11;
    static const unsigned n_filt = -1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 100;
    static const bool store_weights_in_bram = false;
    typedef bias17_t bias_t;
    typedef exponent_type17 scale_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::weight_exponential<x_T, y_T, res_T>;
};


#endif
