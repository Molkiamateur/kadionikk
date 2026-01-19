#
# Hello World bb file (Autotools)
#
DESCRIPTION = "Helloworld software (autotools)"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"

SRC_URI = "http://pficheux.free.fr/pub/tmp/mypack-auto-1.0.tar.gz"

inherit autotools

SRC_URI[md5sum] = "b282082e4e5cc8634b7c6caa822ce440"
