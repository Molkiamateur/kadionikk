/*
 * File: uart_tx.scala                                                         *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-12 09:07:04 am                                       *
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


class UartTxFSM extends ChiselEnum {
  val s0IDLE, s1START, s2DATA, s3STOP = Value
}

class UartTx extends Module {
  val f_fsm = new UartTxFSM()

  val io = IO(new Bundle {	
    val i_ncycle = Input(UInt(16.W))

    val o_ready = Output(Bool())
    val i_valid = Input(Bool())
    val i_data = Input(UInt(8.W))

    val o_tx = Output(Bool())
  })  

  val r_cstate = RegInit(f_fsm.s0IDLE)
  val r_data = Reg(UInt(8.W))
  val r_bit_cnt = Reg(UInt(3.W))
  val r_cycle_cnt = Reg(UInt(16.W))
  val r_tx = RegInit(1.B)

  io.o_ready := false.B
  io.o_tx := r_tx

  switch (r_cstate) {
    is (f_fsm.s0IDLE) {
      io.o_ready := true.B

      r_tx := 1.B
      r_data := io.i_data
      r_bit_cnt := 0.U
      r_cycle_cnt := 0.U

      when (io.i_valid) {
        r_cstate := f_fsm.s1START
      }
    }

    is (f_fsm.s1START) {
      r_tx := 0.B
      r_bit_cnt := 0.U

      when (r_cycle_cnt === io.i_ncycle) {
        r_cstate := f_fsm.s2DATA
        r_cycle_cnt := 0.U
      }.otherwise {
        r_cycle_cnt := r_cycle_cnt + 1.U
      }
    }

    is (f_fsm.s2DATA) {
      r_tx := r_data(0)

      when (r_cycle_cnt === io.i_ncycle) {
        r_cycle_cnt := 0.U
        r_data := Cat(0.U(1.W), r_data(7, 1))
        
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
      r_tx := 1.B

      when (r_cycle_cnt === io.i_ncycle) {
        r_cstate := f_fsm.s0IDLE
        r_cycle_cnt := 0.U
      }.otherwise {
        r_cycle_cnt := r_cycle_cnt + 1.U
      }
    }
  }
}

object UartTx extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new UartTx(),
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
