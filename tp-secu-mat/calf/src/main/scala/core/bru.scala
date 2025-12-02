/*
 * File: bru.scala                                                             *
 * Created Date: 2025-04-22 08:23:20 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-06-28 11:10:32 am                                       *
 * Modified By: Mathieu Escouteloup                                            *
 * Email: mathieu.escouteloup@enseirb-matmeca.fr                               *
 * -----                                                                       *
 * License: See LICENSE.md                                                     *
 * Copyright (c) 2025 ENSEIRB-MATMECA                                          *
 * -----                                                                       *
 * Description:                                                                *
 */

package learn.core

import chisel3._
import chisel3.util._


class Bru(p: CoreParams) extends Module {
  import learn.core.BRUUOP._

  val io = IO(new Bundle {
	  val i_uop	= Input(UInt(BRUUOP.NBIT.W))		
	  val i_pc = Input(UInt(p.nAddrBit.W))		
	  val i_s1 = Input(UInt(p.nDataBit.W))	
	  val i_s2 = Input(UInt(p.nDataBit.W))	
	  val o_br = Output(Bool())
	  val o_res = Output(UInt(p.nDataBit.W))		 
  })  

  io.o_br := false.B
  io.o_res := io.i_pc + 4.U

  val w_cmp_eq = Wire(Bool())
  val w_cmp_slow = Wire(Bool())
  val w_cmp_ulow = Wire(Bool())

  w_cmp_eq := (io.i_s1 === io.i_s2)
  w_cmp_slow := (io.i_s1.asSInt < io.i_s2.asSInt)
  w_cmp_ulow := (io.i_s1 < io.i_s2)

  switch(io.i_uop){
    is (J) {
      io.o_br := true.B
    }
    is (BEQ) {
      io.o_br := w_cmp_eq
    }
    is (BNE) {
      io.o_br := ~w_cmp_eq
    }
    is (BLT) {
      io.o_br := w_cmp_slow
    }
    is (BGE) {
      io.o_br := ~w_cmp_slow
    }
    is (BLTU) {
      io.o_br := w_cmp_ulow
    }
    is (BGEU) {
      io.o_br := ~w_cmp_ulow
    }
  }
}

object Bru extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Bru(CoreConfig.Default),
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