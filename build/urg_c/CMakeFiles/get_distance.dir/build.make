# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/sena/turtle_drive/src/urg_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sena/turtle_drive/build/urg_c

# Include any dependencies generated for this target.
include CMakeFiles/get_distance.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/get_distance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/get_distance.dir/flags.make

CMakeFiles/get_distance.dir/current/samples/get_distance.c.o: CMakeFiles/get_distance.dir/flags.make
CMakeFiles/get_distance.dir/current/samples/get_distance.c.o: /home/sena/turtle_drive/src/urg_c/current/samples/get_distance.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sena/turtle_drive/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/get_distance.dir/current/samples/get_distance.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/get_distance.dir/current/samples/get_distance.c.o   -c /home/sena/turtle_drive/src/urg_c/current/samples/get_distance.c

CMakeFiles/get_distance.dir/current/samples/get_distance.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/get_distance.dir/current/samples/get_distance.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sena/turtle_drive/src/urg_c/current/samples/get_distance.c > CMakeFiles/get_distance.dir/current/samples/get_distance.c.i

CMakeFiles/get_distance.dir/current/samples/get_distance.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/get_distance.dir/current/samples/get_distance.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sena/turtle_drive/src/urg_c/current/samples/get_distance.c -o CMakeFiles/get_distance.dir/current/samples/get_distance.c.s

CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.requires:

.PHONY : CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.requires

CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.provides: CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.requires
	$(MAKE) -f CMakeFiles/get_distance.dir/build.make CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.provides.build
.PHONY : CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.provides

CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.provides.build: CMakeFiles/get_distance.dir/current/samples/get_distance.c.o


# Object files for target get_distance
get_distance_OBJECTS = \
"CMakeFiles/get_distance.dir/current/samples/get_distance.c.o"

# External object files for target get_distance
get_distance_EXTERNAL_OBJECTS =

/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_distance: CMakeFiles/get_distance.dir/current/samples/get_distance.c.o
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_distance: CMakeFiles/get_distance.dir/build.make
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_distance: /home/sena/turtle_drive/devel/.private/urg_c/lib/libopen_urg_sensor.so
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_distance: /home/sena/turtle_drive/devel/.private/urg_c/lib/libliburg_c.so
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_distance: CMakeFiles/get_distance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sena/turtle_drive/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable /home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_distance"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/get_distance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/get_distance.dir/build: /home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_distance

.PHONY : CMakeFiles/get_distance.dir/build

CMakeFiles/get_distance.dir/requires: CMakeFiles/get_distance.dir/current/samples/get_distance.c.o.requires

.PHONY : CMakeFiles/get_distance.dir/requires

CMakeFiles/get_distance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/get_distance.dir/cmake_clean.cmake
.PHONY : CMakeFiles/get_distance.dir/clean

CMakeFiles/get_distance.dir/depend:
	cd /home/sena/turtle_drive/build/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sena/turtle_drive/src/urg_c /home/sena/turtle_drive/src/urg_c /home/sena/turtle_drive/build/urg_c /home/sena/turtle_drive/build/urg_c /home/sena/turtle_drive/build/urg_c/CMakeFiles/get_distance.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/get_distance.dir/depend

