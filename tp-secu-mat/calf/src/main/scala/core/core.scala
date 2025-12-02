/*
 * File: core.scala                                                            *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-06-28 11:02:15 am                                       *
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

import learn.common._

class Core(p: CoreParams) extends Module {
  val io = IO(new Bundle {	
    val i_bl = Input(Bool())

	  val b_mem = new MemIO(p.nAddrBit, 4)
  })  

  val m_fsm = Module(new Fsm())
  val m_gpr = Module(new Gpr(p))
  val m_decoder = Module(new Decoder(p))
  val m_alu = Module(new Alu(p))
  val m_bru = Module(new Bru(p))

  val r_pc = RegInit(p.pcBoot.U(p.nAddrBit.W))
  val r_instr = Reg(UInt(p.nInstrBit.W))
  val r_ctrl = Reg(new CtrlBus(p))
  val r_s1_res = Reg(UInt(p.nDataBit.W))
  val r_s2_pc = Reg(UInt(p.nDataBit.W))
  val r_s3_br = Reg(UInt(p.nDataBit.W))

  // ******************************
  //              FSM
  // ******************************
  m_fsm.io.i_bl := io.i_bl
  m_fsm.io.i_fetch_req := io.b_mem.ready
  m_fsm.io.i_fetch_ack := 1.B
  m_fsm.io.i_seq := m_decoder.io.o_seq
  m_fsm.io.i_mem_req := io.b_mem.ready
  m_fsm.io.i_mem_ack := 1.B

  // ******************************
  //        PC / INSTRUCTION
  // ******************************
  when (m_fsm.io.o_wb) {
    when (r_s3_br(0)) {
      r_pc := r_s2_pc(p.nAddrBit - 1, 0)
    }.otherwise {
      r_pc := r_pc + 4.U
    }
  }

  when (m_fsm.io.o_instr) {
    if (p.useInstrReg) {
      r_instr := io.b_mem.rdata
    } else {
      r_s1_res := io.b_mem.rdata
    }
  }

  // ******************************
  //             MEMORY
  // ******************************
  when (m_fsm.io.o_mem_req) {
    io.b_mem.valid := ~m_fsm.io.o_alu
    io.b_mem.addr := r_s1_res

    io.b_mem.wen := 0.U
    io.b_mem.wdata := r_s3_br
    when (r_ctrl.mem.rw) {
      switch (r_ctrl.mem.size) {
        is (MEMSIZE.B) {
          io.b_mem.wen := 1.U
        }
        is (MEMSIZE.H) {
          io.b_mem.wen := 3.U
        }
        is (MEMSIZE.W) {
          io.b_mem.wen := 15.U
        }
      }
    }
  }.otherwise {
    io.b_mem.valid := m_fsm.io.o_fetch
    io.b_mem.addr := Cat(r_pc(p.nAddrBit - 1, 2), 0.U(2.W))
    io.b_mem.wen := 0.U
    io.b_mem.wdata := DontCare
  }

  // ******************************
  //            DECODER
  // ******************************
  m_decoder.io.i_pc := r_pc
  if (p.useInstrReg) {
    m_decoder.io.i_instr := r_instr
  } else {
    m_decoder.io.i_instr := r_s1_res(p.nInstrBit - 1, 0)
  }

  m_gpr.io.b_read(0).addr := m_decoder.io.o_rs1
  m_gpr.io.b_read(1).addr := m_decoder.io.o_rs2

  when (m_fsm.io.o_decoder) {
    r_ctrl := m_decoder.io.o_ctrl
  }

  // ******************************
  //          DATA REGISTER
  // ******************************
  when (m_fsm.io.o_decoder) {
    when (m_decoder.io.o_s1_reg) {
      r_s1_res := m_gpr.io.b_read(0).data
    }.otherwise {
      r_s1_res := m_decoder.io.o_s1_data
    }

    when (m_decoder.io.o_s2_reg) {
      r_s2_pc := m_gpr.io.b_read(1).data
    }.otherwise {
      r_s2_pc := m_decoder.io.o_s2_data
    }

    when (m_decoder.io.o_s3_reg) {
      r_s3_br := m_gpr.io.b_read(1).data
    }.otherwise {
      r_s3_br := m_decoder.io.o_s3_data
    }
  }.elsewhen(m_fsm.io.o_bru) {
    r_s1_res := m_bru.io.o_res
    r_s2_pc := m_alu.io.o_res
    r_s3_br := m_bru.io.o_br.asTypeOf(r_s3_br)
  }.elsewhen(m_fsm.io.o_alu & m_fsm.io.o_mem_req) {
    r_s1_res := m_alu.io.o_res
  }.elsewhen(m_fsm.io.o_alu) {
    r_s1_res := m_alu.io.o_res
    r_s3_br := 0.U
  }.elsewhen(m_fsm.io.o_mem_ack) {
    when (~r_ctrl.mem.rw & io.b_mem.ready) {
      switch (r_ctrl.mem.size) {
        is (MEMSIZE.B) {
          when (r_ctrl.mem.signed) {
            r_s1_res := Cat(Fill(24, io.b_mem.rdata(7)), io.b_mem.rdata(7, 0))
          }.otherwise {
            r_s1_res := Cat(Fill(24, 0.B), io.b_mem.rdata(7, 0))
          }
        }
        is (MEMSIZE.H) {
          when (r_ctrl.mem.signed) {
            r_s1_res := Cat(Fill(16, io.b_mem.rdata(15)), io.b_mem.rdata(15, 0))
          }.otherwise {
            r_s1_res := Cat(Fill(16, 0.B), io.b_mem.rdata(15, 0))
          }
        }
        is (MEMSIZE.W) {
          r_s1_res := io.b_mem.rdata
        }
      }
    }

    when (io.b_mem.ready) {
      r_s3_br := 0.U
    }
  }

  // ******************************
  //              ALU
  // ******************************
  m_alu.io.i_uop := r_ctrl.alu.uop
  m_alu.io.i_signed := r_ctrl.alu.signed
  when (m_fsm.io.o_bru & r_ctrl.bru.pc_rel) {
    m_alu.io.i_s1 := r_s3_br
    m_alu.io.i_s2 := r_pc
  }.otherwise {
    m_alu.io.i_s1 := r_s1_res
    m_alu.io.i_s2 := r_s2_pc
  }

  // ******************************
  //              BRU
  // ******************************
  m_bru.io.i_uop := r_ctrl.bru.uop
  m_bru.io.i_pc := r_pc
  m_bru.io.i_s1 := r_s1_res
  m_bru.io.i_s2 := r_s2_pc

  // ******************************
  //              GPR
  // ******************************
  m_gpr.io.b_write.en := m_fsm.io.o_wb & r_ctrl.wb.en
  m_gpr.io.b_write.addr := r_ctrl.wb.addr
  m_gpr.io.b_write.data := r_s1_res
}

object Core extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Core(CoreConfig.Default),
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
