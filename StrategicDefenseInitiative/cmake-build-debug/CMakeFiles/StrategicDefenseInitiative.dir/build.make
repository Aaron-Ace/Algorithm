# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = C:\Users\andre\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\andre\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StrategicDefenseInitiative.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StrategicDefenseInitiative.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StrategicDefenseInitiative.dir/flags.make

CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.obj: CMakeFiles/StrategicDefenseInitiative.dir/flags.make
CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StrategicDefenseInitiative.dir\main.cpp.obj -c D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\main.cpp

CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\main.cpp > CMakeFiles\StrategicDefenseInitiative.dir\main.cpp.i

CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\main.cpp -o CMakeFiles\StrategicDefenseInitiative.dir\main.cpp.s

# Object files for target StrategicDefenseInitiative
StrategicDefenseInitiative_OBJECTS = \
"CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.obj"

# External object files for target StrategicDefenseInitiative
StrategicDefenseInitiative_EXTERNAL_OBJECTS =

StrategicDefenseInitiative.exe: CMakeFiles/StrategicDefenseInitiative.dir/main.cpp.obj
StrategicDefenseInitiative.exe: CMakeFiles/StrategicDefenseInitiative.dir/build.make
StrategicDefenseInitiative.exe: CMakeFiles/StrategicDefenseInitiative.dir/linklibs.rsp
StrategicDefenseInitiative.exe: CMakeFiles/StrategicDefenseInitiative.dir/objects1.rsp
StrategicDefenseInitiative.exe: CMakeFiles/StrategicDefenseInitiative.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StrategicDefenseInitiative.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StrategicDefenseInitiative.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StrategicDefenseInitiative.dir/build: StrategicDefenseInitiative.exe

.PHONY : CMakeFiles/StrategicDefenseInitiative.dir/build

CMakeFiles/StrategicDefenseInitiative.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StrategicDefenseInitiative.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StrategicDefenseInitiative.dir/clean

CMakeFiles/StrategicDefenseInitiative.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\cmake-build-debug D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\cmake-build-debug D:\Users\Documents\NDHU\108-2\Algorithm\StrategicDefenseInitiative\cmake-build-debug\CMakeFiles\StrategicDefenseInitiative.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StrategicDefenseInitiative.dir/depend
