/*
 * File: ram.scala                                                             *
 * Created Date: 2025-04-22 08:23:20 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-24 01:16:07 pm                                       *
 * Modified By: Mathieu Escouteloup                                            *
 * Email: mathieu.escouteloup@enseirb-matmeca.fr                               *
 * -----                                                                       *
 * License: See LICENSE.md                                                     *
 * Copyright (c) 2025 ENSEIRB-MATMECA                                          *
 * -----                                                                       *
 * Description:                                                                *
 */


package learn.common

import chisel3._
import chisel3.util._


class RamSv (INIT_FILE: String, N_DATA: Int, N_DATA_BYTE: Int)
  extends BlackBox(Map( "INIT_FILE" -> INIT_FILE,
                        "N_DATA" -> N_DATA,
                        "N_DATA_BYTE" -> N_DATA_BYTE)) with HasBlackBoxResource {
  val io = IO(new Bundle() {
    val i_clock = Input(Clock())
    val i_reset = Input(Reset())

    val i_en = Input(Bool())
    val i_addr = Input(UInt(log2Ceil(N_DATA).W))
    val i_wen = Input(UInt(N_DATA_BYTE.W))
    val i_wdata = Input(UInt((N_DATA_BYTE * 8).W))
    val o_rdata = Output(UInt((N_DATA_BYTE * 8).W))
  })

  addResource("/sv/RamSv.sv")
}

class Ram (initFile: String, nData: Int, nDataByte: Int) extends Module {
  val io = IO(new Bundle() {
    val b_port = Flipped(new MemIO(log2Ceil(nData), nDataByte))
  })

  val m_ram = Module(new RamSv(initFile, nData, nDataByte))

  m_ram.io.i_clock := clock
  m_ram.io.i_reset := reset
  
  m_ram.io.i_en := io.b_port.valid
  m_ram.io.i_addr := io.b_port.addr
  m_ram.io.i_wen := io.b_port.wen
  m_ram.io.i_wdata := io.b_port.wdata
  io.b_port.ready := true.B
  io.b_port.rdata := m_ram.io.o_rdata
}

object Ram extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Ram("", 32, 32),
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