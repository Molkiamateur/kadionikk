#
# Hello World bb file + library (Autotools)
#
DESCRIPTION = "Helloworld software with library (autotools)"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
PR = "r0"

??? = "???"

SRC_URI = "http://pficheux.free.fr/pub/tmp/mypack-auto-lib-1.0.tar.gz"

inherit autotools

SRC_URI[md5sum] = "e8616e0146322a652192fd266b0b647c"
