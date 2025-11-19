#include "hls_stream.h"
#include "ap_axi_sdata.h"
#include "fft8_stream.h"

static int i = 0;

void FFT8_Stream ( hls::stream< ap_axis<32,2,5,6> > &A,
                   hls::stream< ap_axis<32,2,5,6> > &B)
{
    #pragma HLS INTERFACE axis port=A
    #pragma HLS INTERFACE axis port=B
    #pragma HLS INTERFACE s_axilite port=return

    ap_axis<32,2,5,6> data_in_R;
    ap_axis<32,2,5,6> data_in_I;
    ap_axis<32,2,5,6> data_out_R;
    ap_axis<32,2,5,6> data_out_I;

    static int tab_in_R[N];
    static int tab_in_I[N];
    static int tab_out_R[N];
    static int tab_out_I[N];

    int j;

    // Décalage des buffers internes
    for(j = N-1; j > 0; j--){
        #pragma HLS UNROLL factor=N
		#pragma HLS pipeline II=8
        tab_in_R[j]  = tab_in_R[j-1];
        tab_in_I[j]  = tab_in_I[j-1];
        tab_out_R[j] = tab_out_R[j-1];
        tab_out_I[j] = tab_out_I[j-1];
    }

    // Lecture 2 samples : réel puis imaginaire
    A.read(data_in_R);
    tab_in_R[0] = data_in_R.data;

    A.read(data_in_I);
    tab_in_I[0] = data_in_I.data;

    // Lancer FFT après N échantillons
    if(i++ == N-1){
        i = 0;

        FFT_add_point(tab_in_R, tab_in_I);
        FFT_compute_simple();
        FFT_get_res(tab_out_R, tab_out_I);
    }

    // Copie des champs AXIS (keep, strb...)
    data_out_R.keep = data_in_R.keep;
    data_out_R.strb = data_in_R.strb;
    data_out_R.user = data_in_R.user;
    data_out_R.id   = data_in_R.id;
    data_out_R.dest = data_in_R.dest;
    data_out_R.last = data_in_R.last;

    data_out_I.keep = data_in_I.keep;
    data_out_I.strb = data_in_I.strb;
    data_out_I.user = data_in_I.user;
    data_out_I.id   = data_in_I.id;
    data_out_I.dest = data_in_I.dest;
    data_out_I.last = data_in_I.last;

    // Renvoie la sortie la plus récente
    data_out_R.data = tab_out_R[N-1];
    B.write(data_out_R);

    data_out_I.data = tab_out_I[N-1];
    B.write(data_out_I);
}

// ------------------ TABLEAUX (équivalents membres de classe) ------------------

int FFT_tab_in_R[N];
int FFT_tab_in_I[N];
int FFT_tab_out_R[N];
int FFT_tab_out_I[N];

int FFT_W_R;
int FFT_W_I;

// ------------------ ÉQUIVALENTS DES MÉTHODES DE TA CLASSE ---------------------

void FFT_add_point(int in_R[N], int in_I[N]){
    for(int i=0;i<N;i++){
		#pragma HLS UNROLL factor=N
		#pragma HLS pipeline II=8
        FFT_tab_in_R[i] = in_R[i];
        FFT_tab_in_I[i] = in_I[i];
    }
}

void FFT_get_res(int out_R[N], int out_I[N]){
    for(int i=0;i<N;i++){
		#pragma HLS UNROLL factor=N
		#pragma HLS pipeline II=8
        out_R[i] = FFT_tab_out_R[i];
        out_I[i] = FFT_tab_out_I[i];
    }
}

void FFT_calc_W(int M, int n){
	if (n==0){
		FFT_W_R = 128;
		FFT_W_I = 0;
	}
	else if (n==1){
		if (M == 4){
			FFT_W_R = 0;
			FFT_W_I = -128;
		}
		else if (M == 8){
			FFT_W_R = 90;
			FFT_W_I = -90;
		}
	}
	else if (n==2){

			FFT_W_R = 0;
			FFT_W_I = -128;
		}
	else if (n == 3){
			FFT_W_R = -90;
			FFT_W_I = -90;
		}


//	FFT_W_R = (int)(cos(2*PI*n/M) * 128);
//    FFT_W_I = (int)(-sin(2*PI*n/M) * 128);
}

void FFT_papillon(int in_a_R, int in_a_I,
                  int in_b_R, int in_b_I,
                  int &out_s1_R, int &out_s1_I,
                  int &out_s2_R, int &out_s2_I)
{
    int tR = ((in_b_R * FFT_W_R)>>7) - ((in_b_I * FFT_W_I)>>7);
    int tI = ((in_b_R * FFT_W_I)>>7) + ((in_b_I * FFT_W_R)>>7);

    out_s1_R = in_a_R + tR;
    out_s1_I = in_a_I + tI;

    out_s2_R = in_a_R - tR;
    out_s2_I = in_a_I - tI;
}

void FFT_update_tab(){
    for(int i=0;i<N;i++){
		#pragma HLS UNROLL factor=N
		#pragma HLS pipeline II=8
        FFT_tab_in_R[i] = FFT_tab_out_R[i];
        FFT_tab_in_I[i] = FFT_tab_out_I[i];
    }
}

void FFT_compute_simple(){

    // -------- Étape 1 --------
    FFT_calc_W(2, 0);

    FFT_papillon(FFT_tab_in_R[0], FFT_tab_in_I[0], FFT_tab_in_R[4], FFT_tab_in_I[4],
                 FFT_tab_out_R[0], FFT_tab_out_I[0], FFT_tab_out_R[4], FFT_tab_out_I[4]);

    FFT_papillon(FFT_tab_in_R[1], FFT_tab_in_I[1], FFT_tab_in_R[5], FFT_tab_in_I[5],
                 FFT_tab_out_R[1], FFT_tab_out_I[1], FFT_tab_out_R[5], FFT_tab_out_I[5]);

    FFT_papillon(FFT_tab_in_R[2], FFT_tab_in_I[2], FFT_tab_in_R[6], FFT_tab_in_I[6],
                 FFT_tab_out_R[2], FFT_tab_out_I[2], FFT_tab_out_R[6], FFT_tab_out_I[6]);

    FFT_papillon(FFT_tab_in_R[3], FFT_tab_in_I[3], FFT_tab_in_R[7], FFT_tab_in_I[7],
                 FFT_tab_out_R[3], FFT_tab_out_I[3], FFT_tab_out_R[7], FFT_tab_out_I[7]);

    FFT_update_tab();

    // -------- Étape 2 --------
    FFT_calc_W(4, 0);
    FFT_papillon(FFT_tab_in_R[0], FFT_tab_in_I[0], FFT_tab_in_R[2], FFT_tab_in_I[2],
                 FFT_tab_out_R[0], FFT_tab_out_I[0], FFT_tab_out_R[2], FFT_tab_out_I[2]);

    FFT_papillon(FFT_tab_in_R[1], FFT_tab_in_I[1], FFT_tab_in_R[3], FFT_tab_in_I[3],
                 FFT_tab_out_R[1], FFT_tab_out_I[1], FFT_tab_out_R[3], FFT_tab_out_I[3]);

    FFT_calc_W(4, 1);
    FFT_papillon(FFT_tab_in_R[4], FFT_tab_in_I[4], FFT_tab_in_R[6], FFT_tab_in_I[6],
                 FFT_tab_out_R[4], FFT_tab_out_I[4], FFT_tab_out_R[6], FFT_tab_out_I[6]);

    FFT_papillon(FFT_tab_in_R[5], FFT_tab_in_I[5], FFT_tab_in_R[7], FFT_tab_in_I[7],
                 FFT_tab_out_R[5], FFT_tab_out_I[5], FFT_tab_out_R[7], FFT_tab_out_I[7]);

    FFT_update_tab();

    // -------- Étape 3 --------
    FFT_calc_W(8, 0);
    FFT_papillon(FFT_tab_in_R[0], FFT_tab_in_I[0], FFT_tab_in_R[1], FFT_tab_in_I[1],
                 FFT_tab_out_R[0], FFT_tab_out_I[0], FFT_tab_out_R[4], FFT_tab_out_I[4]);

    FFT_calc_W(8, 2);
    FFT_papillon(FFT_tab_in_R[2], FFT_tab_in_I[2], FFT_tab_in_R[3], FFT_tab_in_I[3],
                 FFT_tab_out_R[2], FFT_tab_out_I[2], FFT_tab_out_R[6], FFT_tab_out_I[6]);

    FFT_calc_W(8, 1);
    FFT_papillon(FFT_tab_in_R[4], FFT_tab_in_I[4], FFT_tab_in_R[5], FFT_tab_in_I[5],
                 FFT_tab_out_R[1], FFT_tab_out_I[1], FFT_tab_out_R[5], FFT_tab_out_I[5]);

    FFT_calc_W(8, 3);
    FFT_papillon(FFT_tab_in_R[6], FFT_tab_in_I[6], FFT_tab_in_R[7], FFT_tab_in_I[7],
                 FFT_tab_out_R[3], FFT_tab_out_I[3], FFT_tab_out_R[7], FFT_tab_out_I[7]);
}


