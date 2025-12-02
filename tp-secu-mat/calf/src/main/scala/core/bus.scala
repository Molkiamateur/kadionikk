/*
 * File: bus.scala                                                             *
 * Created Date: 2025-02-24 05:07:35 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-22 09:15:28 am                                       *
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

class AluCtrlBus extends Bundle {
  val uop = UInt(ALUUOP.NBIT.W)
  val signed = Bool()
}

class BruCtrlBus extends Bundle {
  val uop = UInt(BRUUOP.NBIT.W)
  val pc_rel = Bool()
}

class MemCtrlBus extends Bundle {
  val rw = Bool()
  val size = UInt(MEMSIZE.NBIT.W)
  val signed = Bool()
}

class WbCtrlBus(p: CoreParams) extends Bundle {
  val en = Bool()
  val addr = UInt(log2Ceil(p.nGpr).W)
}

class CtrlBus(p: CoreParams) extends Bundle {
  val alu = new AluCtrlBus()
  val bru = new BruCtrlBus()
  val mem = new MemCtrlBus()
  val wb = new WbCtrlBus(p)
}