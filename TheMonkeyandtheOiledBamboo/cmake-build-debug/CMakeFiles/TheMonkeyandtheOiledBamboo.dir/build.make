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
CMAKE_SOURCE_DIR = D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TheMonkeyandtheOiledBamboo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TheMonkeyandtheOiledBamboo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TheMonkeyandtheOiledBamboo.dir/flags.make

CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.obj: CMakeFiles/TheMonkeyandtheOiledBamboo.dir/flags.make
CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TheMonkeyandtheOiledBamboo.dir\main.cpp.obj -c D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\main.cpp

CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\main.cpp > CMakeFiles\TheMonkeyandtheOiledBamboo.dir\main.cpp.i

CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\main.cpp -o CMakeFiles\TheMonkeyandtheOiledBamboo.dir\main.cpp.s

# Object files for target TheMonkeyandtheOiledBamboo
TheMonkeyandtheOiledBamboo_OBJECTS = \
"CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.obj"

# External object files for target TheMonkeyandtheOiledBamboo
TheMonkeyandtheOiledBamboo_EXTERNAL_OBJECTS =

TheMonkeyandtheOiledBamboo.exe: CMakeFiles/TheMonkeyandtheOiledBamboo.dir/main.cpp.obj
TheMonkeyandtheOiledBamboo.exe: CMakeFiles/TheMonkeyandtheOiledBamboo.dir/build.make
TheMonkeyandtheOiledBamboo.exe: CMakeFiles/TheMonkeyandtheOiledBamboo.dir/linklibs.rsp
TheMonkeyandtheOiledBamboo.exe: CMakeFiles/TheMonkeyandtheOiledBamboo.dir/objects1.rsp
TheMonkeyandtheOiledBamboo.exe: CMakeFiles/TheMonkeyandtheOiledBamboo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TheMonkeyandtheOiledBamboo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TheMonkeyandtheOiledBamboo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TheMonkeyandtheOiledBamboo.dir/build: TheMonkeyandtheOiledBamboo.exe

.PHONY : CMakeFiles/TheMonkeyandtheOiledBamboo.dir/build

CMakeFiles/TheMonkeyandtheOiledBamboo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TheMonkeyandtheOiledBamboo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TheMonkeyandtheOiledBamboo.dir/clean

CMakeFiles/TheMonkeyandtheOiledBamboo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\cmake-build-debug D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\cmake-build-debug D:\Users\Documents\NDHU\108-2\Algorithm\TheMonkeyandtheOiledBamboo\cmake-build-debug\CMakeFiles\TheMonkeyandtheOiledBamboo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TheMonkeyandtheOiledBamboo.dir/depend

