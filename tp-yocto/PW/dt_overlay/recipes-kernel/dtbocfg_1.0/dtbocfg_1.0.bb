DESCRIPTION = "DT overlay module"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e83d63de93384e6cce0fd3632041d91"

inherit module

S = "${WORKDIR}"

SRC_URI = "file://dtbocfg.c file://Makefile file://LICENSE"
