/*
 * File: bootloader.scala                                                      *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-23 04:24:02 pm                                       *
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

object CMD {
  val IDLE = 0.U(8.W)
  val INIT = 1.U(8.W)
  val SEND = 2.U(8.W)
  val DUMP = 3.U(8.W)
}

class BootloaderFSM extends ChiselEnum {
  val s0BOOT, s1NUM, s2CMD, s3WAIT, s4END = Value
  val s5IDLE = Value
  val s5INIT0START, s5INIT1OFFSET, s5INIT2OP0, s5INIT2OP1, s5INIT2OP2 = Value
  val s5SEND = Value
  val s5DUMP0START, s5DUMP1OFFSET, s5DUMP2OP0, s5DUMP2OP1, s5DUMP2OP2 = Value
}

class Bootloader(nAddrBit: Int, nDataByte: Int) extends Module {
  val f_fsm = new BootloaderFSM()

  val io = IO(new Bundle {	
    val i_boot = Input(Bool())

    val i_valid = Input(Bool())
    val i_data = Input(UInt(8.W))
    val i_ready = Input(Bool())
    val o_valid = Output(Bool())
    val o_data = Output(UInt(8.W))

    val o_bl = Output(Bool())
	  val b_mem = new MemIO(nAddrBit, nDataByte)
  })  

  val r_cstate = RegInit(f_fsm.s0BOOT)
  val r_num_cnt = Reg(UInt(8.W))
  val r_byte_cnt = Reg(UInt(16.W))

  val r_num = Reg(UInt(8.W))
  val r_cmd = Reg(UInt(8.W))
  val r_start = Reg(Vec(2, UInt(8.W)))
  val r_offset = Reg(Vec(2, UInt(8.W)))
  val r_bl = RegInit(true.B)

  val r_mem_addr = Reg(UInt(nAddrBit.W))
  val r_mem_wen = Reg(UInt(nDataByte.W))
  val r_mem_data = Reg(UInt(8.W))

  io.b_mem.valid := false.B
  io.b_mem.addr := r_mem_addr
  io.b_mem.wen := r_mem_wen
  io.b_mem.wdata := r_mem_data

  io.o_valid := false.B
  io.o_data := r_mem_data

  io.o_bl := r_bl

  // ******************************
  //              FSM
  // ******************************
  switch (r_cstate) {
    // ------------------------------
    //              BOOT
    // ------------------------------
    is (f_fsm.s0BOOT) {
      r_num_cnt := 0.U

      when (io.i_boot) {
        r_cstate := f_fsm.s1NUM
      }.otherwise {
        r_cstate := f_fsm.s4END
      }
    }

    // ------------------------------
    //             NUMBER
    // ------------------------------
    is (f_fsm.s1NUM) {
      when (io.i_valid) {
        r_num := io.i_data
        when (io.i_data === 0.U) {
          r_cstate := f_fsm.s4END
        }.otherwise {
          r_cstate := f_fsm.s2CMD
        }
      }
    }

    // ------------------------------
    //            COMMAND
    // ------------------------------
    is (f_fsm.s2CMD) {
      when (io.i_valid) {
        r_num_cnt := r_num_cnt + 1.U

        // Default        
        r_cstate := f_fsm.s5IDLE

        // Known commands
        switch (io.i_data) {
          is (CMD.IDLE) {
            r_cstate := f_fsm.s5IDLE           
          }
          is (CMD.INIT) {
            r_cstate := f_fsm.s5INIT0START
            r_byte_cnt := 0.U
            r_mem_wen := 1.U
          }
          is (CMD.SEND) {
            r_cstate := f_fsm.s5SEND
            r_byte_cnt := 0.U
            r_mem_data := "haa".U
          }
          is (CMD.DUMP) {
            r_cstate := f_fsm.s5DUMP0START
            r_byte_cnt := 0.U
            r_mem_wen := 0.U
          }
        }
      }
    }

    // ------------------------------
    //              WAIT
    // ------------------------------
    is (f_fsm.s3WAIT) {
      when (io.i_ready) {
        r_cstate := f_fsm.s4END
      }
    }

    // ------------------------------
    //              END
    // ------------------------------
    is (f_fsm.s4END) {
      r_bl := false.B
    }

    // ------------------------------
    //              IDLE
    // ------------------------------
    is (f_fsm.s5IDLE) {
      when (r_num_cnt === r_num) {
        r_cstate := f_fsm.s4END
      }.otherwise {
        r_cstate := f_fsm.s2CMD
      }
    }

    // ------------------------------
    //              INIT
    // ------------------------------
    is (f_fsm.s5INIT0START) {
      when (io.i_valid) {
        r_start(r_byte_cnt(0)) := io.i_data
        when (r_byte_cnt === 1.U) {
          r_cstate := f_fsm.s5INIT1OFFSET
          r_byte_cnt := 0.U
        }.otherwise {
          r_byte_cnt := r_byte_cnt + 1.U
        }        
      }
    }

    is (f_fsm.s5INIT1OFFSET) {
      when (io.i_valid) {
        r_offset(r_byte_cnt(0)) := io.i_data
        when (r_byte_cnt === 1.U) {
          r_cstate := f_fsm.s5INIT2OP0
          r_byte_cnt := 0.U
          r_mem_addr := r_start.asUInt
        }.otherwise {
          r_byte_cnt := r_byte_cnt + 1.U
        }        
      }
    }

    is (f_fsm.s5INIT2OP0) {
      when (io.i_valid) {
        r_cstate := f_fsm.s5INIT2OP1
        r_mem_data := io.i_data
      }
    }

    is (f_fsm.s5INIT2OP1) {
      io.b_mem.valid := true.B

      when (io.b_mem.ready) {
        r_cstate := f_fsm.s5INIT2OP2
      }
    }

    is (f_fsm.s5INIT2OP2) {      
      when (r_byte_cnt === (r_offset.asUInt - 1.U)) {
        r_byte_cnt := 0.U
        when (r_num_cnt === r_num) {
          r_cstate := f_fsm.s4END
        }.otherwise {
          r_cstate := f_fsm.s2CMD
        } 
      }.otherwise {
        r_cstate := f_fsm.s5INIT2OP0
        r_byte_cnt := r_byte_cnt + 1.U
        r_mem_addr := r_mem_addr + 1.U
      }
    }

    // ------------------------------
    //              SEND
    // ------------------------------
    is (f_fsm.s5SEND) {
      io.o_valid := true.B

      when (io.i_ready) {
        when (r_num_cnt === r_num) {
          r_cstate := f_fsm.s4END
        }.otherwise {
          r_cstate := f_fsm.s2CMD
        } 
      }
    }

    // ------------------------------
    //              DUMP
    // ------------------------------
    is (f_fsm.s5DUMP0START) {
      when (io.i_valid) {
        r_start(r_byte_cnt(0)) := io.i_data
        when (r_byte_cnt === 1.U) {
          r_cstate := f_fsm.s5DUMP1OFFSET
          r_byte_cnt := 0.U
        }.otherwise {
          r_byte_cnt := r_byte_cnt + 1.U
        }        
      }
    }

    is (f_fsm.s5DUMP1OFFSET) {
      when (io.i_valid) {
        r_offset(r_byte_cnt(0)) := io.i_data
        when (r_byte_cnt === 1.U) {
          r_cstate := f_fsm.s5DUMP2OP0
          r_byte_cnt := 0.U
          r_mem_addr := r_start.asUInt
        }.otherwise {
          r_byte_cnt := r_byte_cnt + 1.U
        }        
      }
    }

    is (f_fsm.s5DUMP2OP0) {
      io.b_mem.valid := true.B

      when (io.b_mem.ready) {
        r_cstate := f_fsm.s5DUMP2OP1
      }
    }

    is (f_fsm.s5DUMP2OP1) {
      r_cstate := f_fsm.s5DUMP2OP2
      r_mem_data := io.b_mem.rdata
    }

    is (f_fsm.s5DUMP2OP2) {
      io.o_valid := true.B

      when (io.i_ready) {
        when (r_byte_cnt === (r_offset.asUInt - 1.U)) {
          r_byte_cnt := 0.U
          when (r_num_cnt === r_num) {
            r_cstate := f_fsm.s3WAIT
          }.otherwise {
            r_cstate := f_fsm.s2CMD
          } 
        }.otherwise {
          r_cstate := f_fsm.s5DUMP2OP0
          r_byte_cnt := r_byte_cnt + 1.U
          r_mem_addr := r_mem_addr + 1.U
        }
      }
    }   
  }
}

object Bootloader extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Bootloader(16, 4),
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