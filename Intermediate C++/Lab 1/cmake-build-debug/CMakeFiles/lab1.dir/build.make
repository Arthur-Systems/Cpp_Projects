# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/arthur/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5080.54/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/arthur/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5080.54/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lab1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab1.dir/flags.make

CMakeFiles/lab1.dir/Main.cpp.o: CMakeFiles/lab1.dir/flags.make
CMakeFiles/lab1.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab1.dir/Main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab1.dir/Main.cpp.o -c "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/Main.cpp"

CMakeFiles/lab1.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab1.dir/Main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/Main.cpp" > CMakeFiles/lab1.dir/Main.cpp.i

CMakeFiles/lab1.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab1.dir/Main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/Main.cpp" -o CMakeFiles/lab1.dir/Main.cpp.s

CMakeFiles/lab1.dir/printMeFirst.cpp.o: CMakeFiles/lab1.dir/flags.make
CMakeFiles/lab1.dir/printMeFirst.cpp.o: ../printMeFirst.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab1.dir/printMeFirst.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab1.dir/printMeFirst.cpp.o -c "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/printMeFirst.cpp"

CMakeFiles/lab1.dir/printMeFirst.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab1.dir/printMeFirst.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/printMeFirst.cpp" > CMakeFiles/lab1.dir/printMeFirst.cpp.i

CMakeFiles/lab1.dir/printMeFirst.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab1.dir/printMeFirst.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/printMeFirst.cpp" -o CMakeFiles/lab1.dir/printMeFirst.cpp.s

CMakeFiles/lab1.dir/Time.cpp.o: CMakeFiles/lab1.dir/flags.make
CMakeFiles/lab1.dir/Time.cpp.o: ../Time.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab1.dir/Time.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab1.dir/Time.cpp.o -c "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/Time.cpp"

CMakeFiles/lab1.dir/Time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab1.dir/Time.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/Time.cpp" > CMakeFiles/lab1.dir/Time.cpp.i

CMakeFiles/lab1.dir/Time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab1.dir/Time.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/Time.cpp" -o CMakeFiles/lab1.dir/Time.cpp.s

CMakeFiles/lab1.dir/FtC.cpp.o: CMakeFiles/lab1.dir/flags.make
CMakeFiles/lab1.dir/FtC.cpp.o: FtC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab1.dir/FtC.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab1.dir/FtC.cpp.o -c "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/FtC.cpp"

CMakeFiles/lab1.dir/FtC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab1.dir/FtC.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/FtC.cpp" > CMakeFiles/lab1.dir/FtC.cpp.i

CMakeFiles/lab1.dir/FtC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab1.dir/FtC.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/FtC.cpp" -o CMakeFiles/lab1.dir/FtC.cpp.s

# Object files for target lab1
lab1_OBJECTS = \
"CMakeFiles/lab1.dir/Main.cpp.o" \
"CMakeFiles/lab1.dir/printMeFirst.cpp.o" \
"CMakeFiles/lab1.dir/Time.cpp.o" \
"CMakeFiles/lab1.dir/FtC.cpp.o"

# External object files for target lab1
lab1_EXTERNAL_OBJECTS =

lab1: CMakeFiles/lab1.dir/Main.cpp.o
lab1: CMakeFiles/lab1.dir/printMeFirst.cpp.o
lab1: CMakeFiles/lab1.dir/Time.cpp.o
lab1: CMakeFiles/lab1.dir/FtC.cpp.o
lab1: CMakeFiles/lab1.dir/build.make
lab1: CMakeFiles/lab1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable lab1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab1.dir/build: lab1
.PHONY : CMakeFiles/lab1.dir/build

CMakeFiles/lab1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab1.dir/clean

CMakeFiles/lab1.dir/depend:
	cd "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1" "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1" "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug" "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug" "/Users/arthur/Documents/GitHub/Cpp_Projects/Intermediate C++/Lab 1/cmake-build-debug/CMakeFiles/lab1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab1.dir/depend

