/*
 * File: uart_rx.scala                                                         *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-12 09:07:00 am                                       *
 * Modified By: Mathieu Escouteloup                                            *
 * Email: mathieu.escouteloup@enseirb-matmeca.fr                               *
 * -----                                                                       *
 * License: See LICENSE.md                                                     *
 * Copyright (c) 2025 ENSEIRB-MATMECA                                          *
 * -----                                                                       *
 * Description:                                                                *
 */


package learn.io

import chisel3._
import chisel3.util._

import learn.common._


class UartRxFSM extends ChiselEnum {
  val s0IDLE, s1START, s2DATA, s3STOP = Value
}

class UartRx extends Module {
  val f_fsm = new UartRxFSM()

  val io = IO(new Bundle {	
    val i_ncycle = Input(UInt(16.W))

    val o_valid = Output(Bool())
    val o_data = Output(UInt(8.W))

    val i_rx = Input(Bool())
  })  

  val r_cstate = RegInit(f_fsm.s0IDLE)
  val r_data = Reg(UInt(8.W))
  val r_bit_cnt = Reg(UInt(3.W))
  val r_cycle_cnt = Reg(UInt(16.W))
  val r_rx = RegInit(1.B)

  r_rx := io.i_rx
  io.o_valid := false.B
  io.o_data := r_data

  switch (r_cstate) {
    is (f_fsm.s0IDLE) {
      r_data := 0.U
      r_bit_cnt := 0.U
      r_cycle_cnt := 0.U

      when (~r_rx) {
        r_cstate := f_fsm.s1START
      }
    }

    is (f_fsm.s1START) {
      r_rx := 0.B
      r_bit_cnt := 0.U

      when (r_cycle_cnt === (io.i_ncycle >> 1.U)) {
        when (~r_rx) {
          r_cstate := f_fsm.s2DATA
        }.otherwise {
          r_cstate := f_fsm.s0IDLE
        }
        r_cycle_cnt := 0.U
      }.otherwise {
        r_cycle_cnt := r_cycle_cnt + 1.U
      }
    }

    is (f_fsm.s2DATA) {
      when (r_cycle_cnt === io.i_ncycle) {
        r_cycle_cnt := 0.U
        r_data := Cat(r_rx, r_data(7, 1))
        
        when (r_bit_cnt === 7.U) {
          r_cstate := f_fsm.s3STOP
          r_bit_cnt := 0.U
        }.otherwise {
          r_bit_cnt := r_bit_cnt + 1.U
        }
      }.otherwise {
        r_cycle_cnt := r_cycle_cnt + 1.U
      }
    }

    is (f_fsm.s3STOP) {
      r_rx := 1.B

      when (r_cycle_cnt === io.i_ncycle) {
        r_cstate := f_fsm.s0IDLE
        r_cycle_cnt := 0.U

        io.o_valid := true.B
      }.otherwise {
        r_cycle_cnt := r_cycle_cnt + 1.U
      }
    }
  }
}

object UartRx extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new UartRx(),
    firtoolOpts = Array.concat(
      Array(
        "--disable-all-randomization",
        "--strip-debug-info",
        "--split-verilog"
      ),
      args
    )      
  )
}
