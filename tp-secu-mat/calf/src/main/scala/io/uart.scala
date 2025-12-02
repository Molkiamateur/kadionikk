/*
 * File: uart.scala                                                            *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-23 02:16:27 pm                                       *
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

class UartIO extends Bundle {
  val rx = Input(Bool())
  val tx = Output(Bool())
}

class Uart(nDataByte: Int, nCycle: Int) extends Module {
  val io = IO(new Bundle {	
    val i_bl = Input(Bool())
    
	  val b_mem = Flipped(new MemIO(5, nDataByte))

    val o_bl_ready = Output(Bool())
    val i_bl_valid = Input(Bool())
    val i_bl_data = Input(UInt(8.W))
    val o_bl_valid = Output(Bool())
    val o_bl_data = Output(UInt(8.W))

    val b_uart = new UartIO()
  })  

  val m_rx = Module(new UartRx())
  val m_tx = Module(new UartTx())

  val r_ncycle = RegInit(nCycle.U(16.W))
  val r_rdata = Reg(UInt((nDataByte * 8).W))

  val r_rx_valid = RegInit(false.B)
  val r_rx_data = Reg(UInt(8.W))

  m_rx.io.i_ncycle := r_ncycle
  m_rx.io.i_rx := io.b_uart.rx

  m_tx.io.i_ncycle := r_ncycle
  m_tx.io.i_valid := false.B
  m_tx.io.i_data := DontCare
  io.b_uart.tx := m_tx.io.o_tx

  io.b_mem.ready := true.B
  io.b_mem.rdata := r_rdata

  // ******************************
  //              READ
  // ******************************
  r_rdata := 0.U
  switch (io.b_mem.addr(ADDR.UART_NBIT - 1, 0)) {
    is (ADDR.UART_CONFIG) {
      r_rdata := 0.U
    }
    is (ADDR.UART_NCYCLE) {
      r_rdata := Cat(0.U(16.W), r_ncycle)
    }
    is (ADDR.UART_STATUS) {
      r_rdata := Cat(
        0.U(8.W),
        0.U(8.W),
        0.U(8.W),
        0.U(3.W), m_tx.io.o_ready, 0.U(3.W), r_rx_valid,
      )
    }
    is (ADDR.UART_RX) {
      r_rdata := Cat(0.U(24.W), r_rx_data)
      r_rx_valid := r_rx_valid & (~io.b_mem.valid | io.b_mem.wen.asUInt.orR)
    }
  }

  when (~io.i_bl & m_rx.io.o_valid) {
    r_rx_valid := true.B
    r_rx_data := m_rx.io.o_data
  }

  // ******************************
  //             WRITE
  // ******************************
  switch (io.b_mem.addr(ADDR.UART_NBIT - 1, 0)) {
    is (ADDR.UART_NCYCLE) {
      when (io.b_mem.valid && io.b_mem.wen(0) & io.b_mem.wen(1)) {
        r_ncycle := io.b_mem.wdata
      }
    }
    is (ADDR.UART_TX) {
      when (io.b_mem.valid && io.b_mem.wen(0)) {
        m_tx.io.i_valid := true.B
        m_tx.io.i_data := io.b_mem.wdata
      }      
    }
  }

  // ******************************
  //           BOOTLOADER
  // ******************************
  io.o_bl_ready := m_tx.io.o_ready
  io.o_bl_valid := m_rx.io.o_valid
  io.o_bl_data := m_rx.io.o_data

  when (io.i_bl) {
    m_tx.io.i_valid := io.i_bl_valid
    m_tx.io.i_data := io.i_bl_data
  }
}

object Uart extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Uart(4, 5208),
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
