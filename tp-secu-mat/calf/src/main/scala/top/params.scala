/*
 * File: params.scala                                                          *
 * Created Date: 2025-04-07 09:41:37 am                                        *
 * Author: Mathieu Escouteloup                                                 *
 * -----                                                                       *
 * Last Modified: 2025-11-17 05:34:59 pm                                       *
 * Modified By: Mathieu Escouteloup                                            *
 * Email: mathieu.escouteloup@enseirb-matmeca.fr                               *
 * -----                                                                       *
 * License: See LICENSE.md                                                     *
 * Copyright (c) 2025 HerdWare                                                 *
 * -----                                                                       *
 * Description:                                                                *
 */


package learn.top

import chisel3._
import chisel3.util._

import learn.core.{CoreParams}


// ******************************
//           PARAMETERS
// ******************************
trait SysParams extends CoreParams {
  def pcBoot: String
  def nAddrBit: Int
  def useInstrReg: Boolean
  def nGpr: Int

  def nRamBase: String
  def nRamByte: String
  def initRamFile: String
  def nGpio8Base: String
  def nGpio8Byte: String = "h0040"
  def nUartBase: String
  def nUartByte: String = "h0040"
  def nUartCycle: Int = 2604
}

// ******************************
//             CONFIG
// ******************************
case class SysConfig(
  pcBoot: String,
  nAddrBit: Int,
  useInstrReg: Boolean,
  nGpr: Int,

  nRamBase: String,
  nRamByte: String,
  initRamFile: String,
  nGpio8Base: String,
  nUartBase: String
) extends SysParams

// ******************************
//             OBJECT
// ******************************
object SysConfig {
  def apply(
    pcBoot: String = "h0000",
    nAddrBit: Int = 16,
    useInstrReg: Boolean = true,
    nGpr: Int = 16,

    nRamBase: String = "h0000",
    nRamByte: String = "h0400",
    initRamFile: String = "sw.ram.mem",
    nGpio8Base: String = "h0800",
    nUartBase: String = "h0840"
  ): SysConfig = new SysConfig(
    pcBoot = pcBoot,
    nAddrBit = nAddrBit,
    useInstrReg = useInstrReg,
    nGpr = nGpr,
    
    nRamBase = nRamBase,
    nRamByte = nRamByte,
    initRamFile = initRamFile,
    nGpio8Base = nGpio8Base,
    nUartBase = nUartBase
  )

  def Default: SysParams = SysConfig()
  def TT: SysParams = SysConfig(
    pcBoot = "h0000",
    nAddrBit = 12,
    useInstrReg = false,
    nGpr = 8,

    nRamBase = "h0000",
    nRamByte = "h0080",
    initRamFile = "sw.ram.mem",
    nGpio8Base = "h0800",
    nUartBase = "h0840"
  )
}