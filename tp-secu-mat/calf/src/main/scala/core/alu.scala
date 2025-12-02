/*
 * File: alu.scala                                                             *
 * Created Date: 2025-04-22 08:23:20 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-22 08:26:15 am                                       *
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


class Alu (p: CoreParams) extends Module {
  import learn.core.ALUUOP._

  val io = IO(new Bundle {
	  val i_uop	= Input(UInt(ALUUOP.NBIT.W))		
	  val i_signed = Input(Bool())			
	  val i_s1 = Input(UInt(p.nDataBit.W))	
	  val i_s2 = Input(UInt(p.nDataBit.W))	
	  val o_res = Output(UInt(p.nDataBit.W))		 
  })  

  val w_amount = Wire(UInt(5.W))

  w_amount := io.i_s2(4, 0)

  io.o_res := 0.U
  switch(io.i_uop){
    is (ADD) {
      when (io.i_signed) {
        io.o_res := io.i_s1 - io.i_s2
      }.otherwise {
        io.o_res := io.i_s1 + io.i_s2
      }
    }
    is (SLL) {
      io.o_res := io.i_s1 << w_amount
    }
    is (SLT) {
      when (io.i_signed) {
        io.o_res := io.i_s1.asSInt < io.i_s2.asSInt
      }.otherwise {
        io.o_res := io.i_s1 < io.i_s2
      }
    }
    is (XOR) {
      io.o_res := io.i_s1 ^ io.i_s2
    }
    is (SR) {
      when (io.i_signed) {
        io.o_res := (io.i_s1.asSInt >> w_amount).asUInt
      }.otherwise{
        io.o_res := io.i_s1 >> w_amount
      }
    }
    is (OR) {
      io.o_res := io.i_s1 | io.i_s2
    }
    is (AND) {
      io.o_res := io.i_s1 & io.i_s2
    }
  }
}

object Alu extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Alu(CoreConfig.Default),
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