/*
 * File: gpio8.scala                                                           *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-21 10:37:18 am                                       *
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

class Gpio8IO extends Bundle {
  val eno = Output(UInt(8.W))
  val in = Input(UInt(8.W))
  val out = Output(UInt(8.W))
}

class Gpio8(nDataByte: Int) extends Module {
  val io = IO(new Bundle {	
	  val b_mem = Flipped(new MemIO(4, nDataByte))

    val b_gpio = new Gpio8IO()
  })  

  val r_eno = RegInit(0.U(8.W))
  val r_in = RegInit(0.U(8.W))
  val r_out = RegInit(0.U(8.W))

  val r_rdata = Reg(UInt(8.W))

  io.b_gpio.eno := r_eno
  r_in := io.b_gpio.in
  io.b_gpio.out := r_out
  
  io.b_mem.ready := true.B
  io.b_mem.rdata := r_rdata

  // ******************************
  //              READ
  // ******************************
  r_rdata := 0.U

  switch (io.b_mem.addr(ADDR.GPIO8_NBIT - 1, 0)) {
    is (ADDR.GPIO8_ENO) {
      r_rdata := r_eno
    }
    is (ADDR.GPIO8_IN) {
      r_rdata := r_in
    }
    is (ADDR.GPIO8_OUT) {
      r_rdata := r_out
    }
  }

  // ******************************
  //             WRITE
  // ******************************
  when (io.b_mem.valid && io.b_mem.wen(0)) {
    switch (io.b_mem.addr(ADDR.GPIO8_NBIT - 1, 0)) {
      is (ADDR.GPIO8_ENO) {
        r_eno := io.b_mem.wdata(7, 0)
      }
      is (ADDR.GPIO8_OUT) {
        r_out := io.b_mem.wdata(7, 0)
      }
    }
  }
}

object Gpio8 extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Gpio8(4),
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
