#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/se01/micha_maraninchi/kadionikk-master/TP_IA_embarque/TP_DNN_MODEL_1/model_1/model_1_hls4ml_prj/model_1_hls4ml_prj_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
