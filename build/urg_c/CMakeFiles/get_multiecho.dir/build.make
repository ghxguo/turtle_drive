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
include CMakeFiles/get_multiecho.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/get_multiecho.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/get_multiecho.dir/flags.make

CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o: CMakeFiles/get_multiecho.dir/flags.make
CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o: /home/sena/turtle_drive/src/urg_c/current/samples/get_multiecho.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sena/turtle_drive/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o   -c /home/sena/turtle_drive/src/urg_c/current/samples/get_multiecho.c

CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sena/turtle_drive/src/urg_c/current/samples/get_multiecho.c > CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.i

CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sena/turtle_drive/src/urg_c/current/samples/get_multiecho.c -o CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.s

CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.requires:

.PHONY : CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.requires

CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.provides: CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.requires
	$(MAKE) -f CMakeFiles/get_multiecho.dir/build.make CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.provides.build
.PHONY : CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.provides

CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.provides.build: CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o


# Object files for target get_multiecho
get_multiecho_OBJECTS = \
"CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o"

# External object files for target get_multiecho
get_multiecho_EXTERNAL_OBJECTS =

/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_multiecho: CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_multiecho: CMakeFiles/get_multiecho.dir/build.make
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_multiecho: /home/sena/turtle_drive/devel/.private/urg_c/lib/libopen_urg_sensor.so
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_multiecho: /home/sena/turtle_drive/devel/.private/urg_c/lib/libliburg_c.so
/home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_multiecho: CMakeFiles/get_multiecho.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sena/turtle_drive/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable /home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_multiecho"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/get_multiecho.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/get_multiecho.dir/build: /home/sena/turtle_drive/devel/.private/urg_c/lib/urg_c/get_multiecho

.PHONY : CMakeFiles/get_multiecho.dir/build

CMakeFiles/get_multiecho.dir/requires: CMakeFiles/get_multiecho.dir/current/samples/get_multiecho.c.o.requires

.PHONY : CMakeFiles/get_multiecho.dir/requires

CMakeFiles/get_multiecho.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/get_multiecho.dir/cmake_clean.cmake
.PHONY : CMakeFiles/get_multiecho.dir/clean

CMakeFiles/get_multiecho.dir/depend:
	cd /home/sena/turtle_drive/build/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sena/turtle_drive/src/urg_c /home/sena/turtle_drive/src/urg_c /home/sena/turtle_drive/build/urg_c /home/sena/turtle_drive/build/urg_c /home/sena/turtle_drive/build/urg_c/CMakeFiles/get_multiecho.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/get_multiecho.dir/depend

