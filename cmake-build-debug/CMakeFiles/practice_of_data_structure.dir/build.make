# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Volumes/Archive/CLion/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Volumes/Archive/CLion/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/Archive/Cpp/practice_of_data_structure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/Archive/Cpp/practice_of_data_structure/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/practice_of_data_structure.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/practice_of_data_structure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practice_of_data_structure.dir/flags.make

CMakeFiles/practice_of_data_structure.dir/main.cpp.o: CMakeFiles/practice_of_data_structure.dir/flags.make
CMakeFiles/practice_of_data_structure.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Archive/Cpp/practice_of_data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practice_of_data_structure.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/practice_of_data_structure.dir/main.cpp.o -c /Volumes/Archive/Cpp/practice_of_data_structure/main.cpp

CMakeFiles/practice_of_data_structure.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practice_of_data_structure.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Archive/Cpp/practice_of_data_structure/main.cpp > CMakeFiles/practice_of_data_structure.dir/main.cpp.i

CMakeFiles/practice_of_data_structure.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practice_of_data_structure.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Archive/Cpp/practice_of_data_structure/main.cpp -o CMakeFiles/practice_of_data_structure.dir/main.cpp.s

CMakeFiles/practice_of_data_structure.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/practice_of_data_structure.dir/main.cpp.o.requires

CMakeFiles/practice_of_data_structure.dir/main.cpp.o.provides: CMakeFiles/practice_of_data_structure.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/practice_of_data_structure.dir/build.make CMakeFiles/practice_of_data_structure.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/practice_of_data_structure.dir/main.cpp.o.provides

CMakeFiles/practice_of_data_structure.dir/main.cpp.o.provides.build: CMakeFiles/practice_of_data_structure.dir/main.cpp.o


# Object files for target practice_of_data_structure
practice_of_data_structure_OBJECTS = \
"CMakeFiles/practice_of_data_structure.dir/main.cpp.o"

# External object files for target practice_of_data_structure
practice_of_data_structure_EXTERNAL_OBJECTS =

practice_of_data_structure: CMakeFiles/practice_of_data_structure.dir/main.cpp.o
practice_of_data_structure: CMakeFiles/practice_of_data_structure.dir/build.make
practice_of_data_structure: CMakeFiles/practice_of_data_structure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Volumes/Archive/Cpp/practice_of_data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practice_of_data_structure"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practice_of_data_structure.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practice_of_data_structure.dir/build: practice_of_data_structure

.PHONY : CMakeFiles/practice_of_data_structure.dir/build

CMakeFiles/practice_of_data_structure.dir/requires: CMakeFiles/practice_of_data_structure.dir/main.cpp.o.requires

.PHONY : CMakeFiles/practice_of_data_structure.dir/requires

CMakeFiles/practice_of_data_structure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practice_of_data_structure.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practice_of_data_structure.dir/clean

CMakeFiles/practice_of_data_structure.dir/depend:
	cd /Volumes/Archive/Cpp/practice_of_data_structure/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/Archive/Cpp/practice_of_data_structure /Volumes/Archive/Cpp/practice_of_data_structure /Volumes/Archive/Cpp/practice_of_data_structure/cmake-build-debug /Volumes/Archive/Cpp/practice_of_data_structure/cmake-build-debug /Volumes/Archive/Cpp/practice_of_data_structure/cmake-build-debug/CMakeFiles/practice_of_data_structure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practice_of_data_structure.dir/depend
