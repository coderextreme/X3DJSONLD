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
CMAKE_SOURCE_DIR = /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake

# Include any dependencies generated for this target.
include samples/CMakeFiles/DOMCount.dir/depend.make

# Include the progress variables for this target.
include samples/CMakeFiles/DOMCount.dir/progress.make

# Include the compile flags for this target's objects.
include samples/CMakeFiles/DOMCount.dir/flags.make

samples/CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.o: samples/CMakeFiles/DOMCount.dir/flags.make
samples/CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.o: ../samples/src/DOMCount/DOMCount.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object samples/CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.o"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.o -c /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/samples/src/DOMCount/DOMCount.cpp

samples/CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.i"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/samples/src/DOMCount/DOMCount.cpp > CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.i

samples/CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.s"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/samples/src/DOMCount/DOMCount.cpp -o CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.s

# Object files for target DOMCount
DOMCount_OBJECTS = \
"CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.o"

# External object files for target DOMCount
DOMCount_EXTERNAL_OBJECTS =

samples/DOMCount: samples/CMakeFiles/DOMCount.dir/src/DOMCount/DOMCount.cpp.o
samples/DOMCount: samples/CMakeFiles/DOMCount.dir/build.make
samples/DOMCount: src/libxerces-c-3.2.so
samples/DOMCount: /usr/lib/x86_64-linux-gnu/libnsl.so
samples/DOMCount: samples/CMakeFiles/DOMCount.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DOMCount"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/samples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DOMCount.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/CMakeFiles/DOMCount.dir/build: samples/DOMCount

.PHONY : samples/CMakeFiles/DOMCount.dir/build

samples/CMakeFiles/DOMCount.dir/clean:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/samples && $(CMAKE_COMMAND) -P CMakeFiles/DOMCount.dir/cmake_clean.cmake
.PHONY : samples/CMakeFiles/DOMCount.dir/clean

samples/CMakeFiles/DOMCount.dir/depend:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3 /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/samples /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/samples /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/samples/CMakeFiles/DOMCount.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/CMakeFiles/DOMCount.dir/depend
