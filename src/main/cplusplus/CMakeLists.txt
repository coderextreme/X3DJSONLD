cmake_minimum_required(VERSION 3.9.0)
project(x3djsonld)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/x3djsonld.pc.in
	       ${CMAKE_CURRENT_BINARY_DIR}/x3djsonld.pc)

set(pkgconfig-dir "${CMAKE_INSTALL_LIBDIR}/pkgconfig" CACHE STRING "pkg-config installation directory (default ${CMAKE_INSTALL_LIBDIR}/pkgconfig)")

set(PKGCONFIGDIR "${pkgconfig-dir}")

install(
	FILES ${CMAKE_CURRENT_BINARY_DIR}/xj3djonld.pc
	DESTINATION "${PKGCONFIGDIR}"
	COMPONENT "development")

add_subdirectory(src)


set(EXTRA_DIST
	x3djsonld.spec
	x3djsonld.pc.in
	reconf
	)

include_directories(
.
xerces-c-3.2.3/src
xerces-c-3.2.3
)
