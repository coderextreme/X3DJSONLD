bin_PROGRAMS = x3djsonld

SUBDIRS =

EXTRA_DIST = version.incl \
             CMakeLists.txt \
             cmake \
             config.h.cmake.in

AUTOMAKE_OPTIONS = foreign dist-bzip2 dist-zip dist-xz
ACLOCAL_AMFLAGS = -I m4
AM_CPPFLAGS = -I${top_builddir}/src -I${top_srcdir}/src -I${top_builddir}/xerces-c-3.2.0/src -I${top_builddir}/xerces-c-3.2.0

x3djsonlddir = .

if X3DJSONLD_USE
x3djsonld_HEADERS = DOMPrint.h gason.h X3DJSONLD.h
x3djsonld_SOURCES = DOMPrint.cpp gason.cpp pretty-print.cpp X3DJSONLD.cpp DOMPrintErrorHandler.cpp
x3djsonld_LDADD = -L../xerces-c-3.2.0/src -lxerces-c
endif
