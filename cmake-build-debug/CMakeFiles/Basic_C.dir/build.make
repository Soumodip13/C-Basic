# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\USER\CLionProjects\Basic C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\USER\CLionProjects\Basic C\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Basic_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Basic_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Basic_C.dir/flags.make

CMakeFiles/Basic_C.dir/diagonaldiff.c.obj: CMakeFiles/Basic_C.dir/flags.make
CMakeFiles/Basic_C.dir/diagonaldiff.c.obj: ../diagonaldiff.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\USER\CLionProjects\Basic C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Basic_C.dir/diagonaldiff.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Basic_C.dir\diagonaldiff.c.obj   -c "C:\Users\USER\CLionProjects\Basic C\diagonaldiff.c"

CMakeFiles/Basic_C.dir/diagonaldiff.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Basic_C.dir/diagonaldiff.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\USER\CLionProjects\Basic C\diagonaldiff.c" > CMakeFiles\Basic_C.dir\diagonaldiff.c.i

CMakeFiles/Basic_C.dir/diagonaldiff.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Basic_C.dir/diagonaldiff.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\USER\CLionProjects\Basic C\diagonaldiff.c" -o CMakeFiles\Basic_C.dir\diagonaldiff.c.s

# Object files for target Basic_C
Basic_C_OBJECTS = \
"CMakeFiles/Basic_C.dir/diagonaldiff.c.obj"

# External object files for target Basic_C
Basic_C_EXTERNAL_OBJECTS =

Basic_C.exe: CMakeFiles/Basic_C.dir/diagonaldiff.c.obj
Basic_C.exe: CMakeFiles/Basic_C.dir/build.make
Basic_C.exe: CMakeFiles/Basic_C.dir/linklibs.rsp
Basic_C.exe: CMakeFiles/Basic_C.dir/objects1.rsp
Basic_C.exe: CMakeFiles/Basic_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\USER\CLionProjects\Basic C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Basic_C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Basic_C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Basic_C.dir/build: Basic_C.exe

.PHONY : CMakeFiles/Basic_C.dir/build

CMakeFiles/Basic_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Basic_C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Basic_C.dir/clean

CMakeFiles/Basic_C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\USER\CLionProjects\Basic C" "C:\Users\USER\CLionProjects\Basic C" "C:\Users\USER\CLionProjects\Basic C\cmake-build-debug" "C:\Users\USER\CLionProjects\Basic C\cmake-build-debug" "C:\Users\USER\CLionProjects\Basic C\cmake-build-debug\CMakeFiles\Basic_C.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Basic_C.dir/depend

