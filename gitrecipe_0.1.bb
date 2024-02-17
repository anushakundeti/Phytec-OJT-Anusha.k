DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "git://github.com/anushakundeti/yocto_github;protocol=https;branch=master"

S = "${WORKDIR}/git"

SRCREV = "${AUTOREV}"

do_compile() {
    ${CC} text.c ${LDFLAGS} -o text
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 text ${D}${bindir}
}
