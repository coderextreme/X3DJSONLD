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
include tests/CMakeFiles/DOMTest.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/DOMTest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/DOMTest.dir/flags.make

tests/CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.o: tests/CMakeFiles/DOMTest.dir/flags.make
tests/CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.o: ../tests/src/DOM/DOMTest/DTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.o"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.o -c /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests/src/DOM/DOMTest/DTest.cpp

tests/CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.i"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests/src/DOM/DOMTest/DTest.cpp > CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.i

tests/CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.s"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests/src/DOM/DOMTest/DTest.cpp -o CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.s

# Object files for target DOMTest
DOMTest_OBJECTS = \
"CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.o"

# External object files for target DOMTest
DOMTest_EXTERNAL_OBJECTS =

tests/DOMTest: tests/CMakeFiles/DOMTest.dir/src/DOM/DOMTest/DTest.cpp.o
tests/DOMTest: tests/CMakeFiles/DOMTest.dir/build.make
tests/DOMTest: src/libxerces-c-3.2.so
tests/DOMTest: /usr/lib/x86_64-linux-gnu/libnsl.so
tests/DOMTest: tests/CMakeFiles/DOMTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DOMTest"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DOMTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/DOMTest.dir/build: tests/DOMTest

.PHONY : tests/CMakeFiles/DOMTest.dir/build

tests/CMakeFiles/DOMTest.dir/clean:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && $(CMAKE_COMMAND) -P CMakeFiles/DOMTest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/DOMTest.dir/clean

tests/CMakeFiles/DOMTest.dir/depend:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3 /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests/CMakeFiles/DOMTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/DOMTest.dir/depend
