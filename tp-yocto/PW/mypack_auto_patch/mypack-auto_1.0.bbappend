FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://hello.patch"

# Update package revision
PR = "r1"
