/*
 * File: fsm.scala                                                             *
 * Created Date: 2025-04-22 08:23:20 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-22 08:26:35 am                                       *
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

class CoreFSM extends ChiselEnum {
  val s0BOOT, s1IF0, s1IF1, s2ID, s3ALU, s3ADDR, s3BRU, s4MEM0, s4MEM1, s5WB = Value
}

class Fsm extends Module {
  val f_fsm = new CoreFSM()

  val io = IO(new Bundle {	
    val i_bl = Input(Bool())

	  val i_fetch_req = Input(Bool())	
	  val i_fetch_ack = Input(Bool())	
    val i_seq = Input(UInt(SEQ.NBIT.W))		
	  val i_mem_req = Input(Bool())	
	  val i_mem_ack = Input(Bool())

	  val o_fetch = Output(Bool())
	  val o_instr = Output(Bool())		
	  val o_decoder = Output(Bool())		
	  val o_alu = Output(Bool())		
	  val o_bru = Output(Bool())		
	  val o_mem_req = Output(Bool())	
	  val o_mem_ack = Output(Bool())		
	  val o_wb = Output(Bool())			 
  })  

  val r_cstate = RegInit(f_fsm.s0BOOT)

  val w_nstate = Wire(f_fsm())

  r_cstate := w_nstate
  w_nstate := f_fsm.s0BOOT

  io.o_fetch := 0.B
  io.o_instr := 0.B
  io.o_decoder := 0.B
  io.o_alu := 0.B
  io.o_bru := 0.B
  io.o_mem_req := 0.B
  io.o_mem_ack := 0.B
  io.o_wb := 0.B

  switch(r_cstate){
    is (f_fsm.s0BOOT) {
      when (~io.i_bl) {
        w_nstate := f_fsm.s1IF0
      }      
    }
    is (f_fsm.s1IF0) {
      when (io.i_fetch_req) {
        w_nstate := f_fsm.s1IF1
      }.otherwise {
        w_nstate := f_fsm.s1IF0
      }

      io.o_fetch := 1.B
    }
    is (f_fsm.s1IF1) {
      when (io.i_fetch_ack) {
        w_nstate := f_fsm.s2ID
      }.otherwise {
        w_nstate := f_fsm.s1IF1
      }

      io.o_instr := 1.B
    }
    is (f_fsm.s2ID) {
      w_nstate := f_fsm.s1IF0
      switch (io.i_seq) {
        is (SEQ.ALU) {
          w_nstate := f_fsm.s3ALU
        }
        is (SEQ.BRU) {
          w_nstate := f_fsm.s3BRU
        }
        is (SEQ.MEM) {
          w_nstate := f_fsm.s3ADDR
        }
      }

      io.o_decoder := 1.B
    }
    is (f_fsm.s3ALU) {
      w_nstate := f_fsm.s5WB

      io.o_alu := 1.B
    }
    is (f_fsm.s3BRU) {
      w_nstate := f_fsm.s5WB

      io.o_alu := 1.B
      io.o_bru := 1.B
    }
    is (f_fsm.s3ADDR) {
      w_nstate := f_fsm.s4MEM0

      io.o_alu := 1.B
      io.o_mem_req := 1.B
    }
    is (f_fsm.s4MEM0) {
      when (io.i_mem_req) {
        w_nstate := f_fsm.s4MEM1
      }.otherwise {
        w_nstate := f_fsm.s4MEM0
      }

      io.o_mem_req := 1.B
    }
    is (f_fsm.s4MEM1) {
      when (io.i_mem_ack) {
        w_nstate := f_fsm.s5WB
      }.otherwise {
        w_nstate := f_fsm.s4MEM1
      }

      io.o_mem_ack := 1.B
    }
    is (f_fsm.s5WB) {
      w_nstate := f_fsm.s1IF0

      io.o_wb := 1.B
    }
  }
}

object Fsm extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Fsm(),
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
