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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build"

# Include any dependencies generated for this target.
include source/CMakeFiles/aufgabe5.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/aufgabe5.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/aufgabe5.dir/flags.make

source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o: source/CMakeFiles/aufgabe5.dir/flags.make
source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o: ../source/aufgabe5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o -c "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/aufgabe5.cpp"

source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufgabe5.dir/aufgabe5.cpp.i"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/aufgabe5.cpp" > CMakeFiles/aufgabe5.dir/aufgabe5.cpp.i

source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufgabe5.dir/aufgabe5.cpp.s"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/aufgabe5.cpp" -o CMakeFiles/aufgabe5.dir/aufgabe5.cpp.s

source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.requires:

.PHONY : source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.requires

source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.provides: source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/aufgabe5.dir/build.make source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.provides.build
.PHONY : source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.provides

source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.provides.build: source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o


source/CMakeFiles/aufgabe5.dir/vec2.cpp.o: source/CMakeFiles/aufgabe5.dir/flags.make
source/CMakeFiles/aufgabe5.dir/vec2.cpp.o: ../source/vec2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/CMakeFiles/aufgabe5.dir/vec2.cpp.o"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aufgabe5.dir/vec2.cpp.o -c "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/vec2.cpp"

source/CMakeFiles/aufgabe5.dir/vec2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufgabe5.dir/vec2.cpp.i"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/vec2.cpp" > CMakeFiles/aufgabe5.dir/vec2.cpp.i

source/CMakeFiles/aufgabe5.dir/vec2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufgabe5.dir/vec2.cpp.s"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/vec2.cpp" -o CMakeFiles/aufgabe5.dir/vec2.cpp.s

source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.requires:

.PHONY : source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.requires

source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.provides: source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/aufgabe5.dir/build.make source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.provides.build
.PHONY : source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.provides

source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.provides.build: source/CMakeFiles/aufgabe5.dir/vec2.cpp.o


source/CMakeFiles/aufgabe5.dir/circle.cpp.o: source/CMakeFiles/aufgabe5.dir/flags.make
source/CMakeFiles/aufgabe5.dir/circle.cpp.o: ../source/circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/CMakeFiles/aufgabe5.dir/circle.cpp.o"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aufgabe5.dir/circle.cpp.o -c "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/circle.cpp"

source/CMakeFiles/aufgabe5.dir/circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufgabe5.dir/circle.cpp.i"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/circle.cpp" > CMakeFiles/aufgabe5.dir/circle.cpp.i

source/CMakeFiles/aufgabe5.dir/circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufgabe5.dir/circle.cpp.s"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source/circle.cpp" -o CMakeFiles/aufgabe5.dir/circle.cpp.s

source/CMakeFiles/aufgabe5.dir/circle.cpp.o.requires:

.PHONY : source/CMakeFiles/aufgabe5.dir/circle.cpp.o.requires

source/CMakeFiles/aufgabe5.dir/circle.cpp.o.provides: source/CMakeFiles/aufgabe5.dir/circle.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/aufgabe5.dir/build.make source/CMakeFiles/aufgabe5.dir/circle.cpp.o.provides.build
.PHONY : source/CMakeFiles/aufgabe5.dir/circle.cpp.o.provides

source/CMakeFiles/aufgabe5.dir/circle.cpp.o.provides.build: source/CMakeFiles/aufgabe5.dir/circle.cpp.o


# Object files for target aufgabe5
aufgabe5_OBJECTS = \
"CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o" \
"CMakeFiles/aufgabe5.dir/vec2.cpp.o" \
"CMakeFiles/aufgabe5.dir/circle.cpp.o"

# External object files for target aufgabe5
aufgabe5_EXTERNAL_OBJECTS =

aufgabe5: source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o
aufgabe5: source/CMakeFiles/aufgabe5.dir/vec2.cpp.o
aufgabe5: source/CMakeFiles/aufgabe5.dir/circle.cpp.o
aufgabe5: source/CMakeFiles/aufgabe5.dir/build.make
aufgabe5: source/CMakeFiles/aufgabe5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../aufgabe5"
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aufgabe5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/aufgabe5.dir/build: aufgabe5

.PHONY : source/CMakeFiles/aufgabe5.dir/build

source/CMakeFiles/aufgabe5.dir/requires: source/CMakeFiles/aufgabe5.dir/aufgabe5.cpp.o.requires
source/CMakeFiles/aufgabe5.dir/requires: source/CMakeFiles/aufgabe5.dir/vec2.cpp.o.requires
source/CMakeFiles/aufgabe5.dir/requires: source/CMakeFiles/aufgabe5.dir/circle.cpp.o.requires

.PHONY : source/CMakeFiles/aufgabe5.dir/requires

source/CMakeFiles/aufgabe5.dir/clean:
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" && $(CMAKE_COMMAND) -P CMakeFiles/aufgabe5.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/aufgabe5.dir/clean

source/CMakeFiles/aufgabe5.dir/depend:
	cd "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3" "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/source" "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build" "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source" "/Users/Josef/Documents/SS 16/Programmiersprachen/programmiersprachen-aufgabenblatt-3/build/source/CMakeFiles/aufgabe5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : source/CMakeFiles/aufgabe5.dir/depend

