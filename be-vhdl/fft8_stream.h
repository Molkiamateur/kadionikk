#include "ap_axi_sdata.h"
#include "hls_stream.h"
#include <algorithm>
#include <cmath>
#include <cstdio>

#ifndef FFT_H_
#define FFT_H_
#define PI 3.14159265358979323846
#define N 8

typedef hls::stream< ap_axis<32,2,5,6>> data_t;

typedef ap_axis<32,2,5,6> coef_t;
typedef ap_axis<32,2,5,6> var_t;

void FFT8_Stream (
				data_t &A,
				data_t &B
  	  	  );

// Équivalent des attributs de la classe FFT
extern int FFT_tab_in_R[N];
extern int FFT_tab_in_I[N];
extern int FFT_tab_out_R[N];
extern int FFT_tab_out_I[N];

extern int FFT_W_R;
extern int FFT_W_I;

// Équivalent des méthodes FFT
void FFT_add_point(int in_R[N], int in_I[N]);
void FFT_compute_simple();
void FFT_get_res(int out_R[N], int out_I[N]);
void FFT_update_tab();
void FFT_calc_W(int M, int n);

void FFT_papillon(int in_a_R, int in_a_I,
                  int in_b_R, int in_b_I,
                  int &out_s1_R, int &out_s1_I,
                  int &out_s2_R, int &out_s2_I);

#endif
