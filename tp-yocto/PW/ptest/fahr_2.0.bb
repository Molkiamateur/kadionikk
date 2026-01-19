#
# Celsius to Fahrenheit utility (CMake version)
#
DESCRIPTION = "Celsius to Fahrenheit utility"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
PR = "r0"

SRC_URI = "http://pficheux.free.fr/pub/tmp/fahr-2.0.tar.gz ???"

inherit cmake ???

do_install_ptest () {
	cp ${WORKDIR}/test.dat ${D}${PTEST_PATH}/
}

SRC_URI[md5sum] = "8cd41891470ea0e909181d3a1ec6d47e"
