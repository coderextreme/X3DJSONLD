# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake

# Include any dependencies generated for this target.
include samples/CMakeFiles/EnumVal.dir/depend.make

# Include the progress variables for this target.
include samples/CMakeFiles/EnumVal.dir/progress.make

# Include the compile flags for this target's objects.
include samples/CMakeFiles/EnumVal.dir/flags.make

samples/CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.o: samples/CMakeFiles/EnumVal.dir/flags.make
samples/CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.o: ../samples/src/EnumVal/EnumVal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object samples/CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.o"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.o -c /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/samples/src/EnumVal/EnumVal.cpp

samples/CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.i"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/samples/src/EnumVal/EnumVal.cpp > CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.i

samples/CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.s"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/samples/src/EnumVal/EnumVal.cpp -o CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.s

# Object files for target EnumVal
EnumVal_OBJECTS = \
"CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.o"

# External object files for target EnumVal
EnumVal_EXTERNAL_OBJECTS =

samples/EnumVal: samples/CMakeFiles/EnumVal.dir/src/EnumVal/EnumVal.cpp.o
samples/EnumVal: samples/CMakeFiles/EnumVal.dir/build.make
samples/EnumVal: src/libxerces-c-3.2.so
samples/EnumVal: /usr/lib/x86_64-linux-gnu/libnsl.so
samples/EnumVal: samples/CMakeFiles/EnumVal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EnumVal"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/samples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EnumVal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/CMakeFiles/EnumVal.dir/build: samples/EnumVal

.PHONY : samples/CMakeFiles/EnumVal.dir/build

samples/CMakeFiles/EnumVal.dir/clean:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/samples && $(CMAKE_COMMAND) -P CMakeFiles/EnumVal.dir/cmake_clean.cmake
.PHONY : samples/CMakeFiles/EnumVal.dir/clean

samples/CMakeFiles/EnumVal.dir/depend:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0 /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/samples /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/samples /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.0/cmake/samples/CMakeFiles/EnumVal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/CMakeFiles/EnumVal.dir/depend

