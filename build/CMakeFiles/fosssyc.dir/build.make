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
CMAKE_SOURCE_DIR = /home/rajasinghe/fosssy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rajasinghe/fosssy/build

# Include any dependencies generated for this target.
include CMakeFiles/fosssyc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/fosssyc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/fosssyc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fosssyc.dir/flags.make

CMakeFiles/fosssyc.dir/src/driver.c.o: CMakeFiles/fosssyc.dir/flags.make
CMakeFiles/fosssyc.dir/src/driver.c.o: ../src/driver.c
CMakeFiles/fosssyc.dir/src/driver.c.o: CMakeFiles/fosssyc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rajasinghe/fosssy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fosssyc.dir/src/driver.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/fosssyc.dir/src/driver.c.o -MF CMakeFiles/fosssyc.dir/src/driver.c.o.d -o CMakeFiles/fosssyc.dir/src/driver.c.o -c /home/rajasinghe/fosssy/src/driver.c

CMakeFiles/fosssyc.dir/src/driver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fosssyc.dir/src/driver.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rajasinghe/fosssy/src/driver.c > CMakeFiles/fosssyc.dir/src/driver.c.i

CMakeFiles/fosssyc.dir/src/driver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fosssyc.dir/src/driver.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rajasinghe/fosssy/src/driver.c -o CMakeFiles/fosssyc.dir/src/driver.c.s

# Object files for target fosssyc
fosssyc_OBJECTS = \
"CMakeFiles/fosssyc.dir/src/driver.c.o"

# External object files for target fosssyc
fosssyc_EXTERNAL_OBJECTS =

fosssyc: CMakeFiles/fosssyc.dir/src/driver.c.o
fosssyc: CMakeFiles/fosssyc.dir/build.make
fosssyc: CMakeFiles/fosssyc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rajasinghe/fosssy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable fosssyc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fosssyc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fosssyc.dir/build: fosssyc
.PHONY : CMakeFiles/fosssyc.dir/build

CMakeFiles/fosssyc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fosssyc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fosssyc.dir/clean

CMakeFiles/fosssyc.dir/depend:
	cd /home/rajasinghe/fosssy/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rajasinghe/fosssy /home/rajasinghe/fosssy /home/rajasinghe/fosssy/build /home/rajasinghe/fosssy/build /home/rajasinghe/fosssy/build/CMakeFiles/fosssyc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fosssyc.dir/depend

