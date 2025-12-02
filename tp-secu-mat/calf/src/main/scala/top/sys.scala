/*
 * File: sys.scala                                                             *
 * Created Date: 2025-04-22 08:23:20 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-06-28 10:28:52 am                                       *
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
import learn.io.{Gpio8IO,UartIO}
import learn.io.{Gpio8,Uart,Bootloader}

class Sys(p: SysParams) extends Module {
  val io = IO(new Bundle {
    val i_boot = Input(Bool())

    val b_gpio = new Gpio8IO()
    val b_uart = new UartIO()
  })  

  val m_core = Module(new Core(p))
  val m_ram = Module(new Ram(p.initRamFile, (BigInt(p.nRamByte.substring(1), 16) / p.nDataByte).toInt, p.nDataByte))
  val m_gpio8 = Module(new Gpio8(p.nDataByte))
  val m_uart = Module(new Uart(p.nDataByte, p.nUartCycle))
  val m_bootloader = Module(new Bootloader(p.nAddrBit, p.nDataByte))

  val r_valid = RegInit(0.B)
  val r_addr = Reg(UInt(p.nAddrBit.W))

  m_core.io.i_bl := m_bootloader.io.o_bl

  m_ram.io.b_port := DontCare
  m_ram.io.b_port.valid := false.B

  m_gpio8.io.b_gpio <> io.b_gpio

  m_uart.io.i_bl := m_bootloader.io.o_bl
  m_uart.io.b_uart <> io.b_uart

  m_bootloader.io.i_boot := io.i_boot
  m_bootloader.io.i_valid := m_uart.io.o_bl_valid
  m_bootloader.io.i_data := m_uart.io.o_bl_data
  m_bootloader.io.i_ready := m_uart.io.o_bl_ready
  m_uart.io.i_bl_valid := m_bootloader.io.o_valid
  m_uart.io.i_bl_data := m_bootloader.io.o_data

  // ******************************
  //          INTERCONNECT
  // ******************************
  m_core.io.b_mem := DontCare
  m_core.io.b_mem.ready := true.B

  m_gpio8.io.b_mem := DontCare
  m_gpio8.io.b_mem.valid := false.B

  m_uart.io.b_mem := DontCare
  m_uart.io.b_mem.valid := false.B
  
  m_bootloader.io.b_mem := DontCare
  m_bootloader.io.b_mem.ready := false.B

  // ------------------------------
  //              REQ
  // ------------------------------
  when (m_bootloader.io.o_bl) {
    when ((m_bootloader.io.b_mem.addr >= p.nRamBase.U(p.nAddrBit.W)) && (m_bootloader.io.b_mem.addr < (p.nRamBase.U(p.nAddrBit.W) + p.nRamByte.U(p.nAddrBit.W)))) {
      m_ram.io.b_port <> m_bootloader.io.b_mem
      m_ram.io.b_port.addr := (m_bootloader.io.b_mem.addr >> 2.U)
      m_ram.io.b_port.wen := (m_bootloader.io.b_mem.wen << m_bootloader.io.b_mem.addr(1, 0))
      m_ram.io.b_port.wdata := (m_bootloader.io.b_mem.wdata << (m_bootloader.io.b_mem.addr(1, 0) << 3.U))
    }.elsewhen ((m_bootloader.io.b_mem.addr >= p.nGpio8Base.U(p.nAddrBit.W)) && (m_bootloader.io.b_mem.addr < (p.nGpio8Base.U(p.nAddrBit.W) + p.nGpio8Byte.U(p.nAddrBit.W)))) {
      m_gpio8.io.b_mem <> m_bootloader.io.b_mem
    }.elsewhen ((m_bootloader.io.b_mem.addr >= p.nUartBase.U(p.nAddrBit.W)) && (m_bootloader.io.b_mem.addr < (p.nUartBase.U(p.nAddrBit.W) + p.nUartByte.U(p.nAddrBit.W)))) {
      m_uart.io.b_mem <> m_bootloader.io.b_mem
    }
  }.otherwise {
    when ((m_core.io.b_mem.addr >= p.nRamBase.U(p.nAddrBit.W)) && (m_core.io.b_mem.addr < (p.nRamBase.U(p.nAddrBit.W) + p.nRamByte.U(p.nAddrBit.W)))) {
      m_ram.io.b_port <> m_core.io.b_mem
      m_ram.io.b_port.addr := (m_core.io.b_mem.addr >> 2.U)
      m_ram.io.b_port.wen := (m_core.io.b_mem.wen << m_core.io.b_mem.addr(1, 0))
      m_ram.io.b_port.wdata := (m_core.io.b_mem.wdata << (m_core.io.b_mem.addr(1, 0) << 3.U))
    }.elsewhen ((m_core.io.b_mem.addr >= p.nGpio8Base.U(p.nAddrBit.W)) && (m_core.io.b_mem.addr < (p.nGpio8Base.U(p.nAddrBit.W) + p.nGpio8Byte.U(p.nAddrBit.W)))) {
      m_gpio8.io.b_mem <> m_core.io.b_mem
    }.elsewhen ((m_core.io.b_mem.addr >= p.nUartBase.U(p.nAddrBit.W)) && (m_core.io.b_mem.addr < (p.nUartBase.U(p.nAddrBit.W) + p.nUartByte.U(p.nAddrBit.W)))) {
      m_uart.io.b_mem <> m_core.io.b_mem
    }
  }
  
  // ------------------------------
  //              ACK
  // ------------------------------
  when (r_valid) {
    r_valid := false.B
    when ((r_addr >= p.nRamBase.U(p.nAddrBit.W)) && (r_addr < (p.nRamBase.U(p.nAddrBit.W) + p.nRamByte.U(p.nAddrBit.W)))) {
      m_bootloader.io.b_mem.rdata := (m_ram.io.b_port.rdata >> (r_addr(1, 0) << 3.U))
      m_core.io.b_mem.rdata := (m_ram.io.b_port.rdata >> (r_addr(1, 0) << 3.U))
    }.elsewhen ((r_addr >= p.nGpio8Base.U(p.nAddrBit.W)) && (r_addr < (p.nGpio8Base.U(p.nAddrBit.W) + p.nGpio8Byte.U(p.nAddrBit.W)))) {
      m_bootloader.io.b_mem.rdata := m_gpio8.io.b_mem.rdata
      m_core.io.b_mem.rdata := m_gpio8.io.b_mem.rdata
    }.elsewhen ((r_addr >= p.nUartBase.U(p.nAddrBit.W)) && (r_addr < (p.nUartBase.U(p.nAddrBit.W) + p.nUartByte.U(p.nAddrBit.W)))) {
      m_bootloader.io.b_mem.rdata := m_uart.io.b_mem.rdata
      m_core.io.b_mem.rdata := m_uart.io.b_mem.rdata
    }
  }.otherwise {
    when (m_bootloader.io.o_bl) {
      r_valid := m_bootloader.io.b_mem.valid & m_bootloader.io.b_mem.ready
      r_addr := m_bootloader.io.b_mem.addr
    }.otherwise {
      r_valid := m_core.io.b_mem.valid & m_core.io.b_mem.ready
      r_addr := m_core.io.b_mem.addr
    }
  }  

  // ******************************
  //             DEBUG
  // ******************************

}

object Sys extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Sys(SysConfig.Default),
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

object TT extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilog(
    new Sys(SysConfig.TT),
    firtoolOpts = Array.concat(
      Array(
        "--disable-all-randomization",
        "--strip-debug-info",
        "--split-verilog",
        "--lowering-options=disallowLocalVariables"
      ),
      args
    )      
  )
}