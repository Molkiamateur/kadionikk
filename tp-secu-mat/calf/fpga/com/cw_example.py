import chipwhisperer as cw
import time
import logging
import matplotlib.pyplot as plt

CW_SN = "502032204c5846303030303234313038"
FPGA_ID = "cw312t_a35"
PLATFORM = "ss2_a35"
BITFILE = "xpr/cw312/cw312.bit"

# ******************************
#             SCOPE
# ******************************
scope = cw.scope(sn=CW_SN)

scope.reset_fpga()
scope.default_setup()
scope.clock.clkgen_src = "system"
scope.clock.clkgen_freq = 25000000
scope.clock.adc_mul = 4
scope.clock.reset_dcms()
scope.io.hs2 = "clkgen"
scope.io.tio1 = "serial_rx"
scope.io.tio2 = "serial_tx"
scope.trigger.triggers = "tio4"
scope.adc.samples = 12000

time.sleep(1)
while(not scope.clock.adc_locked):
  None
print("[info] FPGA frequency (MHz): " + str(scope.clock.clkgen_freq/1000000))
print("[info] ADC frequency (MHz): " + str(scope.clock.adc_freq/1000000))
print("[info] Scope ready")

cw.logger.setLevel(logging.DEBUG)
# ******************************
#              FPGA
# ******************************
fpga = cw.target(scope, cw.targets.CW305, bsfile=BITFILE, force=True, fpga_id=FPGA_ID, platform=PLATFORM, program=True)
print("[info] FPGA loaded")

# ******************************
#              UART
# ******************************
uart = cw.target(scope, cw.targets.SimpleSerial2)
uart.baud = 9600
print("[info] UART loaded")

# ******************************
#             RESET
# ******************************
scope.io.nrst = "low"
uart.flush()
time.sleep(1.0)
scope.io.nrst = "high"
while (uart.in_waiting() <= 0):
  None
byte = uart.read(num_char=1)
if (byte == "r"):
  uart.write('r')
  print("[info] Reset done")
else:
  print("[err] Reset failed")
  print("[err] Exit ...")
  exit()

# ******************************
#             TARGET
# ******************************
while(1):
  uart.write('s')
  while (uart.in_waiting() <= 0):
    None
  byte = uart.read(num_char=1)
  print(byte)
  time.sleep(1)

  uart.write('t')
  while (uart.in_waiting() <= 0):
    None
  byte = uart.read(num_char=1)
  print(byte)
  time.sleep(1)