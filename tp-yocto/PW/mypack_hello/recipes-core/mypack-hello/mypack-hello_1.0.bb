DESCRIPTION = "HelloWorld"
SECTION = "examples"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"

SRC_URI = "file://helloworld.c file://COPYING"
 
S = "${WORKDIR}"

do_compile() {
	     ${CC} ${CFLAGS} ${LDFLAGS} helloworld.c -o helloworld
}
 
do_install() {
	     install -d ${D}${bindir}
	     install -m 0755 helloworld ${D}${bindir}
}