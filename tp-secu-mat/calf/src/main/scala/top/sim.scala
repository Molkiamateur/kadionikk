/*
 * File: sim.scala                                                             *
 * Created Date: 2025-04-22 08:23:20 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-22 08:25:02 am                                       *
 * Modified By: Mathieu Escouteloup                                            *
 * Email: mathieu.escouteloup@enseirb-matmeca.fr                               *
 * -----                                                                       *
 * License: See LICENSE.md                                                     *
 * Copyright (c) 2025 ENSEIRB-MATMECA                                          *
 * -----                                                                       *
 * Description:                                                                *
 */


package learn.top

import chisel3._
import chisel3.util._

import learn.common._
import learn.core._
import learn.io.{Gpio8IO}
import learn.io.{UartTx,UartRx}

class Sim(p: SysParams) extends Module {
  val io = IO(new Bundle {
    val i_boot = Input(Bool())

    val b_gpio = new Gpio8IO()

    val o_uart_ready = Output(Bool())
    val i_uart_valid = Input(Bool())
    val i_uart_data = Input(UInt(8.W))
    val o_uart_valid = Output(Bool())
    val o_uart_data = Output(UInt(8.W))
  })  

  val m_sys = Module(new Sys(p))
  val m_uart_tx = Module(new UartTx())
  val m_uart_rx = Module(new UartRx())

  m_sys.io.i_boot := io.i_boot
  m_sys.io.b_gpio <> io.b_gpio

  m_uart_tx.io.i_ncycle := p.nUartCycle.U
  io.o_uart_ready := m_uart_tx.io.o_ready
  m_uart_tx.io.i_valid := io.i_uart_valid
  m_uart_tx.io.i_data := io.i_uart_data
  m_sys.io.b_uart.rx := m_uart_tx.io.o_tx

  m_uart_rx.io.i_ncycle := p.nUartCycle.U
  m_uart_rx.io.i_rx := m_sys.io.b_uart.tx
  io.o_uart_valid := m_uart_rx.io.o_valid
  io.o_uart_data := m_uart_rx.io.o_data
}

object Sim extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Sim(SysConfig.Default),
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