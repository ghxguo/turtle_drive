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
include CMakeFiles/sync_time_stamp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sync_time_stamp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sync_time_stamp.dir/flags.make

CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o: CMakeFiles/sync_time_stamp.dir/flags.make
CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o: /home/sena/turtle_drive/src/urg_c/current/samples/sync_time_stamp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sena/turtle_drive/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o   -c /home/sena/turtle_drive/src/urg_c/current/samples/sync_time_stamp.c

CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sena/turtle_drive/src/urg_c/current/samples/sync_time_stamp.c > CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.i

CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sena/turtle_drive/src/urg_c/current/samples/sync_time_stamp.c -o CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.s

CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.requires:

.PHONY : CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.requires

CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.provides: CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.requires
	$(MAKE) -f CMakeFiles/sync_time_stamp.dir/build.make CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.provides.build
.PHONY : CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.provides

CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.provides.build: CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o


# Object files for target sync_time_stamp
sync_time_stamp_OBJECTS = \
"CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o"

# External object files for target sync_time_stamp
sync_time_stamp_EXTERNAL_OBJECTS =

/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/sync_time_stamp: CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/sync_time_stamp: CMakeFiles/sync_time_stamp.dir/build.make
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/sync_time_stamp: /home/sena/turtle_drive/devel/.private/urg_c/lib/libopen_urg_sensor.so
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/sync_time_stamp: /home/sena/turtle_drive/devel/.private/urg_c/lib/libliburg_c.so
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/sync_time_stamp: CMakeFiles/sync_time_stamp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sena/turtle_drive/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable /home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/sync_time_stamp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sync_time_stamp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sync_time_stamp.dir/build: /home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/sync_time_stamp

.PHONY : CMakeFiles/sync_time_stamp.dir/build

CMakeFiles/sync_time_stamp.dir/requires: CMakeFiles/sync_time_stamp.dir/current/samples/sync_time_stamp.c.o.requires

.PHONY : CMakeFiles/sync_time_stamp.dir/requires

CMakeFiles/sync_time_stamp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sync_time_stamp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sync_time_stamp.dir/clean

CMakeFiles/sync_time_stamp.dir/depend:
	cd /home/sena/turtle_drive/build/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sena/turtle_drive/src/urg_c /home/sena/turtle_drive/src/urg_c /home/sena/turtle_drive/build/urg_c /home/sena/turtle_drive/build/urg_c /home/sena/turtle_drive/build/urg_c/CMakeFiles/sync_time_stamp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sync_time_stamp.dir/depend

