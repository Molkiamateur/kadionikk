#
# Hello World bb file (Autotools + local header)
#
DESCRIPTION = "Helloworld software (autotools + local header)"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"

PR = "r0"

SRC_URI = "http://pficheux.free.fr/pub/tmp/mypack-msg-1.0.tar.gz ???" 

inherit autotools

EXTRA_OEMAKE = "CFLAGS=-I../"

SRC_URI[md5sum] = "bafdc783aff3793efafde4d5dd8eeecf"
