# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rullow/PracticaAlternativa_MH/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rullow/PracticaAlternativa_MH/code/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/muscular.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/muscular.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/muscular.dir/flags.make

CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.o: CMakeFiles/muscular.dir/flags.make
CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.o: ../muscular_ggarredondo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rullow/PracticaAlternativa_MH/code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.o -c /home/rullow/PracticaAlternativa_MH/code/muscular_ggarredondo.cpp

CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rullow/PracticaAlternativa_MH/code/muscular_ggarredondo.cpp > CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.i

CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rullow/PracticaAlternativa_MH/code/muscular_ggarredondo.cpp -o CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.s

# Object files for target muscular
muscular_OBJECTS = \
"CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.o"

# External object files for target muscular
muscular_EXTERNAL_OBJECTS =

muscular: CMakeFiles/muscular.dir/muscular_ggarredondo.cpp.o
muscular: CMakeFiles/muscular.dir/build.make
muscular: libcec17_test_func.so
muscular: CMakeFiles/muscular.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rullow/PracticaAlternativa_MH/code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable muscular"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muscular.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/muscular.dir/build: muscular

.PHONY : CMakeFiles/muscular.dir/build

CMakeFiles/muscular.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/muscular.dir/cmake_clean.cmake
.PHONY : CMakeFiles/muscular.dir/clean

CMakeFiles/muscular.dir/depend:
	cd /home/rullow/PracticaAlternativa_MH/code/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rullow/PracticaAlternativa_MH/code /home/rullow/PracticaAlternativa_MH/code /home/rullow/PracticaAlternativa_MH/code/cmake-build-debug /home/rullow/PracticaAlternativa_MH/code/cmake-build-debug /home/rullow/PracticaAlternativa_MH/code/cmake-build-debug/CMakeFiles/muscular.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/muscular.dir/depend
