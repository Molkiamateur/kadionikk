/*
 * File: decoder.scala                                                         *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-22 09:20:53 am                                       *
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

// trait TABLE
// {  
//     //                        is Valid ?                      Use BRU ?                   Use Mem                              WB ?
//     //                           | Use ALU ?                     |   BRU op                  |   Mem RW                          |
//     //                           |     |    ALU op               |      |       BRU PC rel ? |      |   MEM size                 |
//     //                           |     |       |     ALU signed  |      |            |       |      |      |        MEM signed   |
//     //                           |     |       |         |       |      |            |       |      |      |           |         |
//   val default: List[UInt] =
//                List[UInt](      0.B,  0.B,  ALUUOP.X,   0.B,    0.B,  BRUUOP.B,     0.B,    0.B,  0.B,  MEMSIZE.X,    0.B,      0.B)
//   val table: Array[(BitPat, List[UInt])]
// }

class Decoder(p: CoreParams) extends Module {
  import learn.core.RISCV._

  val io = IO(new Bundle {	
	  val i_pc = Input(UInt(p.nAddrBit.W))	
	  val i_instr = Input(UInt(p.nInstrBit.W))			

    val o_seq = Output(UInt(SEQ.NBIT.W))

    val o_ctrl = Output(new CtrlBus(p))

    val o_rs1 = Output(UInt(log2Ceil(p.nGpr).W))
    val o_rs2 = Output(UInt(log2Ceil(p.nGpr).W))
    val o_s1_reg = Output(Bool())
    val o_s1_data = Output(UInt(p.nDataBit.W))
    val o_s2_reg = Output(Bool())
    val o_s2_data = Output(UInt(p.nDataBit.W))
    val o_s3_reg = Output(Bool())
    val o_s3_data = Output(UInt(p.nDataBit.W))
  })  

  io.o_seq := SEQ.X

  io.o_ctrl.alu.uop := ALUUOP.X 
  io.o_ctrl.alu.signed := false.B     

  io.o_ctrl.bru.uop := BRUUOP.X
  io.o_ctrl.bru.pc_rel := false.B
  
  io.o_ctrl.mem.rw := false.B
  io.o_ctrl.mem.size := MEMSIZE.X
  io.o_ctrl.mem.signed := false.B

  io.o_ctrl.wb.en := false.B
  io.o_ctrl.wb.addr := io.i_instr(7 + log2Ceil(p.nGpr) - 1, 7)

  io.o_rs1 := io.i_instr(15 + log2Ceil(p.nGpr) - 1, 15)
  io.o_rs2 := io.i_instr(20 + log2Ceil(p.nGpr) - 1, 20)

  io.o_s1_reg := false.B
  io.o_s1_data := 0.U
  io.o_s2_reg := false.B
  io.o_s2_data := 0.U
  io.o_s3_reg := false.B
  io.o_s3_data := 0.U

  switch (io.i_instr(6, 0)) {
    is (OPCODE_LUI) {
      io.o_seq := SEQ.ALU
      io.o_ctrl.alu.uop := ALUUOP.ADD 
      io.o_ctrl.alu.signed := false.B 

      io.o_ctrl.wb.en := true.B

      io.o_s1_reg := false.B
      io.o_s1_data := 0.U
      io.o_s2_reg := false.B
      io.o_s2_data := Cat(io.i_instr(31, 12), 0.U(12.W))
      io.o_s3_reg := false.B
      io.o_s3_data := 0.U
    }

    is (OPCODE_AUIPC) {
      io.o_seq := SEQ.ALU
      io.o_ctrl.alu.uop := ALUUOP.ADD 
      io.o_ctrl.alu.signed := false.B 

      io.o_ctrl.wb.en := true.B

      io.o_s1_reg := false.B
      io.o_s1_data := io.i_pc
      io.o_s2_reg := false.B
      io.o_s2_data := Cat(io.i_instr(31, 12), 0.U(12.W))
      io.o_s3_reg := false.B
      io.o_s3_data := 0.U
    }

    is (OPCODE_JAL) {
      io.o_seq := SEQ.BRU

      io.o_ctrl.alu.uop := ALUUOP.ADD 
      io.o_ctrl.alu.signed := false.B 

      io.o_ctrl.bru.uop := BRUUOP.J
      io.o_ctrl.bru.pc_rel := true.B

      io.o_ctrl.wb.en := true.B

      io.o_s1_reg := false.B
      io.o_s1_data := 0.U
      io.o_s2_reg := false.B
      io.o_s2_data := Cat(io.i_instr(31, 12), 0.U(12.W))
      io.o_s3_reg := false.B
      io.o_s3_data := Cat(Fill(12, io.i_instr(31)), io.i_instr(19, 12), io.i_instr(20), io.i_instr(30, 21), 0.U(1.W))
    }

    is (OPCODE_JALR) {
      io.o_seq := SEQ.BRU

      io.o_ctrl.alu.uop := ALUUOP.ADD 
      io.o_ctrl.alu.signed := false.B 

      io.o_ctrl.bru.uop := BRUUOP.J
      io.o_ctrl.bru.pc_rel := false.B

      io.o_ctrl.wb.en := true.B

      io.o_s1_reg := true.B
      io.o_s1_data := 0.U
      io.o_s2_reg := false.B
      io.o_s2_data := Cat(Fill(20, io.i_instr(31)), io.i_instr(31, 25), io.i_instr(11, 7))
      io.o_s3_reg := false.B
      io.o_s3_data := 0.U
    }

    is (OPCODE_BRANCH) {
      io.o_ctrl.alu.uop := ALUUOP.ADD 
      io.o_ctrl.alu.signed := false.B 

      io.o_ctrl.bru.pc_rel := true.B
      switch (io.i_instr(14, 12)) {
        is (FUNC3_BEQ) {
          io.o_seq := SEQ.BRU
          io.o_ctrl.bru.uop := BRUUOP.BEQ
        }
        is (FUNC3_BNE) {
          io.o_seq := SEQ.BRU
          io.o_ctrl.bru.uop := BRUUOP.BNE
        }
        is (FUNC3_BLT) {
          io.o_seq := SEQ.BRU
          io.o_ctrl.bru.uop := BRUUOP.BLT
        }
        is (FUNC3_BGE) {
          io.o_seq := SEQ.BRU
          io.o_ctrl.bru.uop := BRUUOP.BGE
        }
        is (FUNC3_BLTU) {
          io.o_seq := SEQ.BRU
          io.o_ctrl.bru.uop := BRUUOP.BLTU
        }
        is (FUNC3_BGEU) {
          io.o_seq := SEQ.BRU
          io.o_ctrl.bru.uop := BRUUOP.BGEU
        }
      }

      io.o_s1_reg := true.B
      io.o_s1_data := 0.U
      io.o_s2_reg := true.B
      io.o_s2_data := 0.U
      io.o_s3_reg := false.B
      io.o_s3_data := Cat(Fill(20, io.i_instr(31)), io.i_instr(7), io.i_instr(30, 25), io.i_instr(11, 8), 0.U(1.W))
    }

    is (OPCODE_LOAD) {
      io.o_seq := SEQ.MEM

      io.o_ctrl.alu.uop := ALUUOP.ADD 
      io.o_ctrl.alu.signed := false.B 

      io.o_ctrl.wb.en := true.B

      io.o_ctrl.mem.rw := false.B
      switch (io.i_instr(14, 12)) {
        is (FUNC3_LB) {
          io.o_ctrl.mem.size := MEMSIZE.B
          io.o_ctrl.mem.signed := true.B
        }
        is (FUNC3_LBU) {
          io.o_ctrl.mem.size := MEMSIZE.B
          io.o_ctrl.mem.signed := false.B
        }
        is (FUNC3_LH) {
          io.o_ctrl.mem.size := MEMSIZE.H
          io.o_ctrl.mem.signed := true.B
        }
        is (FUNC3_LHU) {
          io.o_ctrl.mem.size := MEMSIZE.H
          io.o_ctrl.mem.signed := false.B
        }
        is (FUNC3_LW) {
          io.o_ctrl.mem.size := MEMSIZE.W
          io.o_ctrl.mem.signed := false.B
        }
      }

      io.o_s1_reg := true.B
      io.o_s1_data := 0.U
      io.o_s2_reg := false.B
      io.o_s2_data := Cat(Fill(20, io.i_instr(31)), io.i_instr(31, 20))
      io.o_s3_reg := false.B
      io.o_s3_data := 0.U
    }

    is (OPCODE_STORE) {
      io.o_seq := SEQ.MEM

      io.o_ctrl.alu.uop := ALUUOP.ADD 
      io.o_ctrl.alu.signed := false.B 

      io.o_ctrl.mem.rw := true.B
      switch (io.i_instr(14, 12)) {
        is (FUNC3_SB) {
          io.o_ctrl.mem.size := MEMSIZE.B
        }
        is (FUNC3_SH) {
          io.o_ctrl.mem.size := MEMSIZE.H
        }
        is (FUNC3_SW) {
          io.o_ctrl.mem.size := MEMSIZE.W
        }
      }

      io.o_s1_reg := true.B
      io.o_s1_data := 0.U
      io.o_s2_reg := false.B
      io.o_s2_data := Cat(Fill(20, io.i_instr(31)), io.i_instr(31, 25), io.i_instr(11, 7))
      io.o_s3_reg := true.B
      io.o_s3_data := 0.U
    }

    is (OPCODE_OP_IMM) {
      io.o_seq := SEQ.ALU

      io.o_ctrl.wb.en := true.B

      switch (io.i_instr(14, 12)) {
        is (FUNC3_ADD) {
          io.o_ctrl.alu.uop := ALUUOP.ADD 
          io.o_ctrl.alu.signed := false.B       
        }
        is (FUNC3_SLL) {
          io.o_ctrl.alu.uop := ALUUOP.SLL
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_SLT) {
          io.o_ctrl.alu.uop := ALUUOP.SLT
          io.o_ctrl.alu.signed := true.B
        }
        is (FUNC3_SLTU) {
          io.o_ctrl.alu.uop := ALUUOP.SLT
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_XOR) {
          io.o_ctrl.alu.uop := ALUUOP.XOR
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_SR) {
          io.o_ctrl.alu.uop := ALUUOP.SR
          switch (io.i_instr(31, 25)) {
            is (FUNC7_SRL) {
              io.o_ctrl.alu.signed := false.B
            }
            is (FUNC7_SRA) {
              io.o_ctrl.alu.signed := true.B
            }
          } 
        }
        is (FUNC3_OR) {
          io.o_ctrl.alu.uop := ALUUOP.OR
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_AND) {
          io.o_ctrl.alu.uop := ALUUOP.AND
          io.o_ctrl.alu.signed := false.B
        }
      }

      io.o_s1_reg := true.B
      io.o_s1_data := 0.U
      io.o_s2_reg := false.B
      io.o_s2_data := Cat(Fill(20, io.i_instr(31)), io.i_instr(31, 20))
      io.o_s3_reg := false.B
      io.o_s3_data := 0.U
    }

    is (OPCODE_OP) {
      io.o_seq := SEQ.ALU
      
      io.o_ctrl.wb.en := true.B

      switch (io.i_instr(14, 12)) {
        is (FUNC3_ADD) {
          io.o_ctrl.alu.uop := ALUUOP.ADD
          switch (io.i_instr(31, 25)) {
            is (FUNC7_ADD) {
              io.o_ctrl.alu.signed := false.B
            }
            is (FUNC7_SUB) {
              io.o_ctrl.alu.signed := true.B
            }
          }          
        }
        is (FUNC3_SLL) {
          io.o_ctrl.alu.uop := ALUUOP.SLL
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_SLT) {
          io.o_ctrl.alu.uop := ALUUOP.SLT
          io.o_ctrl.alu.signed := true.B
        }
        is (FUNC3_SLTU) {
          io.o_ctrl.alu.uop := ALUUOP.SLT
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_XOR) {
          io.o_ctrl.alu.uop := ALUUOP.XOR
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_SR) {
          io.o_ctrl.alu.uop := ALUUOP.SR
          switch (io.i_instr(31, 25)) {
            is (FUNC7_SRL) {
              io.o_ctrl.alu.signed := false.B
            }
            is (FUNC7_SRA) {
              io.o_ctrl.alu.signed := true.B
            }
          } 
        }
        is (FUNC3_OR) {
          io.o_ctrl.alu.uop := ALUUOP.OR
          io.o_ctrl.alu.signed := false.B
        }
        is (FUNC3_AND) {
          io.o_ctrl.alu.uop := ALUUOP.AND
          io.o_ctrl.alu.signed := false.B
        }
      }

      io.o_s1_reg := true.B
      io.o_s1_data := 0.U
      io.o_s2_reg := true.B
      io.o_s2_data := 0.U
      io.o_s3_reg := false.B
      io.o_s3_data := 0.U
    }
  }
}

object Decoder extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Decoder(CoreConfig.Default),
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
