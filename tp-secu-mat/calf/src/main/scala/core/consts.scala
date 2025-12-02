/*
 * File: consts.scala                                                          *
 * Created Date: 2025-02-24 04:35:23 pm                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-04-22 08:52:57 am                                       *
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


object SEQ {
  def NBIT: Int   = 2

  def X: UInt     = 0.U(NBIT.W)
  def ALU: UInt   = 0.U(NBIT.W)
  def BRU: UInt   = 1.U(NBIT.W)
  def MEM: UInt   = 2.U(NBIT.W)
}

object ALUUOP {
  def NBIT: Int   = 3

  def X: UInt     = 0.U(NBIT.W)
  def ADD: UInt   = 0.U(NBIT.W)
  def SLL: UInt   = 1.U(NBIT.W)
  def SLT: UInt   = 2.U(NBIT.W)
  def XOR: UInt   = 4.U(NBIT.W)
  def SR: UInt    = 5.U(NBIT.W)
  def OR: UInt    = 6.U(NBIT.W)
  def AND: UInt   = 7.U(NBIT.W)
}

object BRUUOP {
  def NBIT: Int   = 3

  def X: UInt     = 0.U(NBIT.W)
  def BEQ: UInt   = 0.U(NBIT.W)
  def BNE: UInt   = 1.U(NBIT.W)
  def J: UInt     = 2.U(NBIT.W)
  def BLT: UInt   = 4.U(NBIT.W)
  def BGE: UInt   = 5.U(NBIT.W)
  def BLTU: UInt  = 6.U(NBIT.W)
  def BGEU: UInt  = 7.U(NBIT.W)
}

object MEMSIZE {
  def NBIT: Int   = 2

  def X: UInt     = 0.U(NBIT.W)
  def B: UInt     = 0.U(NBIT.W)
  def H: UInt     = 1.U(NBIT.W)
  def W: UInt     = 2.U(NBIT.W)
}