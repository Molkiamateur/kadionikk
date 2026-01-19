SUMMARY = "Samples device tree overlay"
SECTION = "bsp"

inherit devicetree

PROVIDES = "virtual/dtb"

SRC_URI += "file://mydevice.dts"

COMPATIBLE_MACHINE = "(qemuarm|qemuarmv5)"

