/*
 * File: bus.scala                                                             *
 * Created Date: 2025-04-22 08:23:20 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-22 08:24:15 am                                       *
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


class MemIO(nAddrBit: Int, nDataByte: Int) extends Bundle {
  val valid = Output(Bool())
  val addr = Output(UInt(nAddrBit.W))
  val wen = Output(UInt(nDataByte.W))
  val wdata = Output(UInt((nDataByte * 8).W))
  val ready = Input(Bool())
  val rdata = Input(UInt((nDataByte * 8).W))
}