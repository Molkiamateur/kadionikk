#
# Hello World bb file (generic Makefile)
#
DESCRIPTION = "Helloworld software (generic)"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"

SRC_URI = "http://pficheux.free.fr/pub/tmp/mypack-gen-1.0.tar.gz"

do_install() {
        oe_runmake ???
}

???
