# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/EinfacheForAnweisung.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EinfacheForAnweisung.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EinfacheForAnweisung.dir/flags.make

CMakeFiles/EinfacheForAnweisung.dir/main.c.obj: CMakeFiles/EinfacheForAnweisung.dir/flags.make
CMakeFiles/EinfacheForAnweisung.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EinfacheForAnweisung.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\EinfacheForAnweisung.dir\main.c.obj   -c "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\main.c"

CMakeFiles/EinfacheForAnweisung.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EinfacheForAnweisung.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\main.c" > CMakeFiles\EinfacheForAnweisung.dir\main.c.i

CMakeFiles/EinfacheForAnweisung.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EinfacheForAnweisung.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\main.c" -o CMakeFiles\EinfacheForAnweisung.dir\main.c.s

# Object files for target EinfacheForAnweisung
EinfacheForAnweisung_OBJECTS = \
"CMakeFiles/EinfacheForAnweisung.dir/main.c.obj"

# External object files for target EinfacheForAnweisung
EinfacheForAnweisung_EXTERNAL_OBJECTS =

EinfacheForAnweisung.exe: CMakeFiles/EinfacheForAnweisung.dir/main.c.obj
EinfacheForAnweisung.exe: CMakeFiles/EinfacheForAnweisung.dir/build.make
EinfacheForAnweisung.exe: CMakeFiles/EinfacheForAnweisung.dir/linklibs.rsp
EinfacheForAnweisung.exe: CMakeFiles/EinfacheForAnweisung.dir/objects1.rsp
EinfacheForAnweisung.exe: CMakeFiles/EinfacheForAnweisung.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable EinfacheForAnweisung.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EinfacheForAnweisung.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EinfacheForAnweisung.dir/build: EinfacheForAnweisung.exe

.PHONY : CMakeFiles/EinfacheForAnweisung.dir/build

CMakeFiles/EinfacheForAnweisung.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EinfacheForAnweisung.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EinfacheForAnweisung.dir/clean

CMakeFiles/EinfacheForAnweisung.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung" "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung" "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\cmake-build-debug" "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\cmake-build-debug" "C:\Users\Martina Lakhouadri\CLionProjects\EinfacheForAnweisung\cmake-build-debug\CMakeFiles\EinfacheForAnweisung.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EinfacheForAnweisung.dir/depend

