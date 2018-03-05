# CMake build for x3djsonld
# John Carlson, derived from xerces-c-3.2.0

# Definitions required for building
add_definitions(
  -DHAVE_CONFIG_H=1
)

# Search the project binary dir for config.h
include_directories(
  ${PROJECT_BINARY_DIR}
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}
  .
  ../xerces-c-3.2.0/src
  ../xerces-c-3.2.0
)

set(EXTRA_DIST
  bubs2.json
  )

macro(add_sample_executable name ${installdir})
  add_executable(${name} ${ARGN})
  target_link_libraries(${name} xerces-c_3_2D)
  set_target_properties(${name}
	 PROPERTIES
	 FOLDER "Samples"
	 RUNTIME DESTINATION ${installdir} 
	 COMPONENT "runtime"
  )
  list(APPEND sample_programs ${name})
endmacro()

add_sample_executable(X3DJSONLD "${CMAKE_INSTALL_BINDIR}"
  X3DJSONLD.cpp
  X3DJSONLD.h
  gason.cpp
  gason.h
  DOMPrint.cpp
  DOMPrint.h
  pretty-print.cpp
  ../xerces-c-3.2.0/samples/src/DOMPrint/DOMTreeErrorReporter.hpp
  ../xerces-c-3.2.0/samples/src/DOMPrint/DOMPrintFilter.hpp
  ../xerces-c-3.2.0/samples/src/DOMPrint/DOMPrintErrorHandler.cpp
  ../xerces-c-3.2.0/samples/src/DOMPrint/DOMPrintErrorHandler.hpp
  )
