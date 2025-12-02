/*
 * File: gpr.scala                                                             *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-16 03:51:24 pm                                       *
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


class GprReadIO(p: CoreParams) extends Bundle {
  val addr = Input(UInt(log2Ceil(p.nGpr).W))
  val data = Output(UInt(p.nDataBit.W))
}

class GprWriteIO(p: CoreParams) extends Bundle {
  val en = Input(Bool())
  val addr = Input(UInt(log2Ceil(p.nGpr).W))
  val data = Input(UInt(p.nDataBit.W))
}

class Gpr(p: CoreParams) extends Module {
  val io = IO(new Bundle {	
	  val b_read = Vec(2, new GprReadIO(p))
	  val b_write = new GprWriteIO(p)
  })  

  val r_gpr = Reg(Vec(p.nGpr, UInt(p.nDataBit.W)))

  for (r <- 0 until 2) {
    io.b_read(r).data := 0.U
    when (io.b_read(r).addr =/= 0.U) {
      io.b_read(r).data := r_gpr(io.b_read(r).addr)
    }
  }

  when (io.b_write.en) {
    r_gpr(io.b_write.addr) := io.b_write.data
  }

  r_gpr(0) := 0.U

  dontTouch(r_gpr)
}

object Gpr extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Gpr(CoreConfig.Default),
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
