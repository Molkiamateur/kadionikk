/*
 * File: addr.scala                                                            *
 * Created Date: 2025-02-24 04:35:23 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-21 10:19:28 am                                       *
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


object ADDR {
  def GPIO8_NBIT    : Int = 4

  def GPIO8_X       : UInt = "h0".U(GPIO8_NBIT.W)
  def GPIO8_ENO     : UInt = "h0".U(GPIO8_NBIT.W)
  def GPIO8_IN      : UInt = "h4".U(GPIO8_NBIT.W)
  def GPIO8_OUT     : UInt = "h8".U(GPIO8_NBIT.W)

  def UART_NBIT     : Int = 5

  def UART_X        : UInt = "h00".U(UART_NBIT.W)
  def UART_CONFIG   : UInt = "h00".U(UART_NBIT.W)
  def UART_NCYCLE   : UInt = "h04".U(UART_NBIT.W)
  def UART_STATUS   : UInt = "h08".U(UART_NBIT.W)
  def UART_RX       : UInt = "h10".U(UART_NBIT.W)
  def UART_TX       : UInt = "h14".U(UART_NBIT.W)
}
