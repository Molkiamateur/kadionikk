###
 # File: bootloader.py                                                         #
 # Created Date: 2023-02-26 08:53:02 pm                                        #
 # Author: Mathieu Escouteloup                                                 #
 # -----                                                                       #
 # Last Modified: 2025-04-24 02:06:30 pm                                       #
 # Modified By: Mathieu Escouteloup                                            #
 # Email: mathieu.escouteloup@enseirb-matmeca.fr                               #
 # -----                                                                       #
 # License: See LICENSE.md                                                     #
 # Copyright (c) 2025 ENSEIRB-MATMECA                                          #
 # -----                                                                       #
 # Description:                                                                #
###


import serial 
import random
import time
import sys

SERIAL_PORT = "/dev/ttyUSB0"
if (len(sys.argv) > 1):
  SERIAL_PORT = sys.argv[1]

ser_port = serial.Serial()

ser_port.baudrate = 9600
ser_port.port = SERIAL_PORT
ser_port.timeout = 1
ser_port.bytesize = serial.EIGHTBITS
ser_port.stopbits = serial.STOPBITS_ONE
ser_port.parity = serial.PARITY_NONE

ser_port.open()

s_display = ""
if (ser_port.is_open):
  print("Start Bootloader.")
  input("Press reset button and ENTER.")
  print("Reset done.")

  while (ser_port.in_waiting != 0):
    ser_port.reset_input_buffer()

  print("Send number of commands.")
  ser_port.write(bytes.fromhex("03"))

  print("Send SEND (0x02) command.")
  ser_port.write(bytes.fromhex("02"))

  print("Send INIT (0x01) command.")
  ser_port.write(bytes.fromhex("01"))
  ser_port.write(bytes.fromhex("04"))
  ser_port.write(bytes.fromhex("00"))
  ser_port.write(bytes.fromhex("04"))
  ser_port.write(bytes.fromhex("00"))
  ser_port.write(bytes.fromhex("94"))
  ser_port.write(bytes.fromhex("00"))
  ser_port.write(bytes.fromhex("10"))
  ser_port.write(bytes.fromhex("00"))

  print("Send DUMP (0x03) command.")
  ser_port.write(bytes.fromhex("03"))
  ser_port.write(bytes.fromhex("00"))
  ser_port.write(bytes.fromhex("00"))
  ser_port.write(bytes.fromhex("40"))
  ser_port.write(bytes.fromhex("00"))
  
#  ser_port.write(bytes.fromhex("00"))
#  ser_port.write(bytes.fromhex("11"))

#  print("Send number of commands.")
#  ser_port.write(bytes.fromhex("01"))
#
#  print("Send SEND (0x02) command.")
#  ser_port.write(bytes.fromhex("02"))

  rec_bytes = 0
#  while (rec_bytes < 4):
  while (True):
    if (ser_port.in_waiting != 0): 
      v_read = ser_port.read(1)
      print(v_read)
      rec_bytes = rec_bytes + 1


  while True:
    None

#   v_str = ""
# 
#   while True:
# #    ser_port.write(b'\x01')
#     print(bytes.fromhex("01"))
#     user_input = input("Enter a byte value (in hex, e.g., '01'): ")
#     try:
#       byte_value = bytes.fromhex(user_input)
#       ser_port.write(byte_value)
#     except ValueError:
#       print("Invalid hex value. Please try again.")
# 
#     if (ser_port.in_waiting != 0):
#       v_read = ser_port.read(1)
#       print(v_read)
# #      v_byte = bytes.decode(v_read, 'utf-8')
# #      v_str = v_str + v_byte
# #      if (v_byte == '\n'):
# #        print(v_str, end='')
# #        v_str = ""

  ser_port.close()
