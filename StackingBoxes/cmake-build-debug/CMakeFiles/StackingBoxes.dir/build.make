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
CMAKE_SOURCE_DIR = D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StackingBoxes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StackingBoxes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StackingBoxes.dir/flags.make

CMakeFiles/StackingBoxes.dir/main.cpp.obj: CMakeFiles/StackingBoxes.dir/flags.make
CMakeFiles/StackingBoxes.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StackingBoxes.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StackingBoxes.dir\main.cpp.obj -c D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\main.cpp

CMakeFiles/StackingBoxes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackingBoxes.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\main.cpp > CMakeFiles\StackingBoxes.dir\main.cpp.i

CMakeFiles/StackingBoxes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackingBoxes.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\main.cpp -o CMakeFiles\StackingBoxes.dir\main.cpp.s

# Object files for target StackingBoxes
StackingBoxes_OBJECTS = \
"CMakeFiles/StackingBoxes.dir/main.cpp.obj"

# External object files for target StackingBoxes
StackingBoxes_EXTERNAL_OBJECTS =

StackingBoxes.exe: CMakeFiles/StackingBoxes.dir/main.cpp.obj
StackingBoxes.exe: CMakeFiles/StackingBoxes.dir/build.make
StackingBoxes.exe: CMakeFiles/StackingBoxes.dir/linklibs.rsp
StackingBoxes.exe: CMakeFiles/StackingBoxes.dir/objects1.rsp
StackingBoxes.exe: CMakeFiles/StackingBoxes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StackingBoxes.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StackingBoxes.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StackingBoxes.dir/build: StackingBoxes.exe

.PHONY : CMakeFiles/StackingBoxes.dir/build

CMakeFiles/StackingBoxes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StackingBoxes.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StackingBoxes.dir/clean

CMakeFiles/StackingBoxes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\cmake-build-debug D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\cmake-build-debug D:\Users\Documents\NDHU\108-2\Algorithm\StackingBoxes\cmake-build-debug\CMakeFiles\StackingBoxes.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StackingBoxes.dir/depend

