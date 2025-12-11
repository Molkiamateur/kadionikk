#include "model_2_hls4ml_prj.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void model_2_hls4ml_prj::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"q_dense_1_input_V\" :  \"" << q_dense_1_input_V.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"layer17_out_0_V\" :  \"" << layer17_out_0_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_in_1\" :  \"" << const_size_in_1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_out_1\" :  \"" << const_size_out_1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q_dense_1_input_V_ap_vld\" :  \"" << q_dense_1_input_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_in_1_ap_vld\" :  \"" << const_size_in_1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_out_1_ap_vld\" :  \"" << const_size_out_1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer17_out_0_V_ap_vld\" :  \"" << layer17_out_0_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

