/*
 * File: params.scala                                                          *
 * Created Date: 2025-04-07 09:41:37 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-06-28 11:45:56 am                                       *
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


// ******************************
//           PARAMETERS
// ******************************
trait CoreParams {
  def pcBoot: String
  def nInstrBit: Int = 32
  def nAddrBit: Int
  def nDataBit: Int = 32
  def nDataByte: Int = (nDataBit / 8).toInt
  def useInstrReg: Boolean
  def nGpr: Int
}

// ******************************
//             CONFIG
// ******************************
case class CoreConfig(
  pcBoot: String,
  nAddrBit: Int,
  useInstrReg: Boolean,
  nGpr: Int
) extends CoreParams

// ******************************
//             OBJECT
// ******************************
object CoreConfig {
  def apply(
    pcBoot: String = "h0000",
    nAddrBit: Int = 16,
    useInstrReg: Boolean = true,
    nGpr: Int = 32
  ): CoreConfig = new CoreConfig(
    pcBoot = pcBoot,
    nAddrBit = nAddrBit,
    useInstrReg = useInstrReg,
    nGpr = nGpr
  )

  def Default: CoreParams = CoreConfig()
}