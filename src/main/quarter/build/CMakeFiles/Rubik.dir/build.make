# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yottzumm/quarter/src/quarter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yottzumm/quarter/src/quarter/build

# Include any dependencies generated for this target.
include CMakeFiles/Rubik.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Rubik.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Rubik.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Rubik.dir/flags.make

CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o: CMakeFiles/Rubik.dir/flags.make
CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o: Rubik_autogen/mocs_compilation.cpp
CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o: CMakeFiles/Rubik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yottzumm/quarter/src/quarter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o -c /home/yottzumm/quarter/src/quarter/build/Rubik_autogen/mocs_compilation.cpp

CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yottzumm/quarter/src/quarter/build/Rubik_autogen/mocs_compilation.cpp > CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.i

CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yottzumm/quarter/src/quarter/build/Rubik_autogen/mocs_compilation.cpp -o CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.s

CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o: CMakeFiles/Rubik.dir/flags.make
CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o: ../net/coderextreme/data/rubik.cpp
CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o: CMakeFiles/Rubik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yottzumm/quarter/src/quarter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o -MF CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o.d -o CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o -c /home/yottzumm/quarter/src/quarter/net/coderextreme/data/rubik.cpp

CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yottzumm/quarter/src/quarter/net/coderextreme/data/rubik.cpp > CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.i

CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yottzumm/quarter/src/quarter/net/coderextreme/data/rubik.cpp -o CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.s

# Object files for target Rubik
Rubik_OBJECTS = \
"CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o"

# External object files for target Rubik
Rubik_EXTERNAL_OBJECTS =

Rubik: CMakeFiles/Rubik.dir/Rubik_autogen/mocs_compilation.cpp.o
Rubik: CMakeFiles/Rubik.dir/net/coderextreme/data/rubik.cpp.o
Rubik: CMakeFiles/Rubik.dir/build.make
Rubik: CMakeFiles/Rubik.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yottzumm/quarter/src/quarter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Rubik"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Rubik.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Rubik.dir/build: Rubik
.PHONY : CMakeFiles/Rubik.dir/build

CMakeFiles/Rubik.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Rubik.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Rubik.dir/clean

CMakeFiles/Rubik.dir/depend:
	cd /home/yottzumm/quarter/src/quarter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yottzumm/quarter/src/quarter /home/yottzumm/quarter/src/quarter /home/yottzumm/quarter/src/quarter/build /home/yottzumm/quarter/src/quarter/build /home/yottzumm/quarter/src/quarter/build/CMakeFiles/Rubik.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Rubik.dir/depend

