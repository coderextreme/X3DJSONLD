SUBDIRS = src

EXTRA_DIST = version.incl \
             CMakeLists.txt \
             cmake \
             config.h.cmake.in \
             x3djsonld.spec \
             x3djsonld.pc.in \
             LICENSE \
             README \
             reconf

AUTOMAKE_OPTIONS = foreign dist-bzip2 dist-zip dist-xz
ACLOCAL_AMFLAGS = -I m4

pkgconfigdir = @pkgconfigdir@
pkgconfig_DATA= x3djsonld.pc
