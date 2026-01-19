DESCRIPTION = "Hello World kernel module recipe, based on the 'module' class"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=12f884d2ae1ff87c09e5b7ccc2c4ca7e"

inherit module

PV = "1.0"
PR = "r0"

SRC_URI = "file://hello.c file://Makefile file://COPYING"

S = "${WORKDIR}"

KERNEL_MODULE_AUTOLOAD += "hello"
KERNEL_MODULE_PROBECONF = "hello"
module_conf_hello = "options hello param=33"

