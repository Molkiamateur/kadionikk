#
# Hello World bb file (CMake)
#
DESCRIPTION = "Helloworld software (CMake)"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"

SRC_URI = "http://pficheux.free.fr/pub/tmp/mypack-cmake-1.0.tar.gz"

inherit cmake

SRC_URI[md5sum] = "70e89c6e3bff196b4634aeb5870ddb61"
