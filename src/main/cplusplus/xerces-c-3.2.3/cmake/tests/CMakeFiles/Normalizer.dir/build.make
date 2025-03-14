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
include tests/CMakeFiles/Normalizer.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/Normalizer.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/Normalizer.dir/flags.make

tests/CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.o: tests/CMakeFiles/Normalizer.dir/flags.make
tests/CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.o: ../tests/src/DOM/Normalizer/Normalizer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.o"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.o -c /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests/src/DOM/Normalizer/Normalizer.cpp

tests/CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.i"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests/src/DOM/Normalizer/Normalizer.cpp > CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.i

tests/CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.s"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests/src/DOM/Normalizer/Normalizer.cpp -o CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.s

# Object files for target Normalizer
Normalizer_OBJECTS = \
"CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.o"

# External object files for target Normalizer
Normalizer_EXTERNAL_OBJECTS =

tests/Normalizer: tests/CMakeFiles/Normalizer.dir/src/DOM/Normalizer/Normalizer.cpp.o
tests/Normalizer: tests/CMakeFiles/Normalizer.dir/build.make
tests/Normalizer: src/libxerces-c-3.2.so
tests/Normalizer: /usr/lib/x86_64-linux-gnu/libnsl.so
tests/Normalizer: tests/CMakeFiles/Normalizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Normalizer"
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Normalizer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/Normalizer.dir/build: tests/Normalizer

.PHONY : tests/CMakeFiles/Normalizer.dir/build

tests/CMakeFiles/Normalizer.dir/clean:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests && $(CMAKE_COMMAND) -P CMakeFiles/Normalizer.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/Normalizer.dir/clean

tests/CMakeFiles/Normalizer.dir/depend:
	cd /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3 /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/tests /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests /home/coderextreme/X3DJSONLD/src/main/cplusplus/xerces-c-3.2.3/cmake/tests/CMakeFiles/Normalizer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/Normalizer.dir/depend

