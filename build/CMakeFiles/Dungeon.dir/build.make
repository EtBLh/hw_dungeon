# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /Users/etblh/Documents/workspace/hw_dungeon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/etblh/Documents/workspace/hw_dungeon/build

# Include any dependencies generated for this target.
include CMakeFiles/Dungeon.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dungeon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dungeon.dir/flags.make

CMakeFiles/Dungeon.dir/src/controller.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/controller.cpp.o: ../src/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dungeon.dir/src/controller.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/controller.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/controller.cpp

CMakeFiles/Dungeon.dir/src/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/controller.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/controller.cpp > CMakeFiles/Dungeon.dir/src/controller.cpp.i

CMakeFiles/Dungeon.dir/src/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/controller.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/controller.cpp -o CMakeFiles/Dungeon.dir/src/controller.cpp.s

CMakeFiles/Dungeon.dir/src/dto.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/dto.cpp.o: ../src/dto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Dungeon.dir/src/dto.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/dto.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/dto.cpp

CMakeFiles/Dungeon.dir/src/dto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/dto.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/dto.cpp > CMakeFiles/Dungeon.dir/src/dto.cpp.i

CMakeFiles/Dungeon.dir/src/dto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/dto.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/dto.cpp -o CMakeFiles/Dungeon.dir/src/dto.cpp.s

CMakeFiles/Dungeon.dir/src/input_reader.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/input_reader.cpp.o: ../src/input_reader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Dungeon.dir/src/input_reader.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/input_reader.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/input_reader.cpp

CMakeFiles/Dungeon.dir/src/input_reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/input_reader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/input_reader.cpp > CMakeFiles/Dungeon.dir/src/input_reader.cpp.i

CMakeFiles/Dungeon.dir/src/input_reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/input_reader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/input_reader.cpp -o CMakeFiles/Dungeon.dir/src/input_reader.cpp.s

CMakeFiles/Dungeon.dir/src/main.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Dungeon.dir/src/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/main.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/main.cpp

CMakeFiles/Dungeon.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/main.cpp > CMakeFiles/Dungeon.dir/src/main.cpp.i

CMakeFiles/Dungeon.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/main.cpp -o CMakeFiles/Dungeon.dir/src/main.cpp.s

CMakeFiles/Dungeon.dir/src/node/monster.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/node/monster.cpp.o: ../src/node/monster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Dungeon.dir/src/node/monster.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/node/monster.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/node/monster.cpp

CMakeFiles/Dungeon.dir/src/node/monster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/node/monster.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/node/monster.cpp > CMakeFiles/Dungeon.dir/src/node/monster.cpp.i

CMakeFiles/Dungeon.dir/src/node/monster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/node/monster.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/node/monster.cpp -o CMakeFiles/Dungeon.dir/src/node/monster.cpp.s

CMakeFiles/Dungeon.dir/src/node/npc.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/node/npc.cpp.o: ../src/node/npc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Dungeon.dir/src/node/npc.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/node/npc.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/node/npc.cpp

CMakeFiles/Dungeon.dir/src/node/npc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/node/npc.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/node/npc.cpp > CMakeFiles/Dungeon.dir/src/node/npc.cpp.i

CMakeFiles/Dungeon.dir/src/node/npc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/node/npc.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/node/npc.cpp -o CMakeFiles/Dungeon.dir/src/node/npc.cpp.s

CMakeFiles/Dungeon.dir/src/node/player.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/node/player.cpp.o: ../src/node/player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Dungeon.dir/src/node/player.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/node/player.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/node/player.cpp

CMakeFiles/Dungeon.dir/src/node/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/node/player.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/node/player.cpp > CMakeFiles/Dungeon.dir/src/node/player.cpp.i

CMakeFiles/Dungeon.dir/src/node/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/node/player.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/node/player.cpp -o CMakeFiles/Dungeon.dir/src/node/player.cpp.s

CMakeFiles/Dungeon.dir/src/node/portal.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/node/portal.cpp.o: ../src/node/portal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Dungeon.dir/src/node/portal.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/node/portal.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/node/portal.cpp

CMakeFiles/Dungeon.dir/src/node/portal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/node/portal.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/node/portal.cpp > CMakeFiles/Dungeon.dir/src/node/portal.cpp.i

CMakeFiles/Dungeon.dir/src/node/portal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/node/portal.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/node/portal.cpp -o CMakeFiles/Dungeon.dir/src/node/portal.cpp.s

CMakeFiles/Dungeon.dir/src/node/room.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/node/room.cpp.o: ../src/node/room.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Dungeon.dir/src/node/room.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/node/room.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/node/room.cpp

CMakeFiles/Dungeon.dir/src/node/room.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/node/room.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/node/room.cpp > CMakeFiles/Dungeon.dir/src/node/room.cpp.i

CMakeFiles/Dungeon.dir/src/node/room.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/node/room.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/node/room.cpp -o CMakeFiles/Dungeon.dir/src/node/room.cpp.s

CMakeFiles/Dungeon.dir/src/node/treasure.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/node/treasure.cpp.o: ../src/node/treasure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Dungeon.dir/src/node/treasure.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/node/treasure.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/node/treasure.cpp

CMakeFiles/Dungeon.dir/src/node/treasure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/node/treasure.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/node/treasure.cpp > CMakeFiles/Dungeon.dir/src/node/treasure.cpp.i

CMakeFiles/Dungeon.dir/src/node/treasure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/node/treasure.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/node/treasure.cpp -o CMakeFiles/Dungeon.dir/src/node/treasure.cpp.s

CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.o: ../src/service/game_loader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/service/game_loader.cpp

CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/service/game_loader.cpp > CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.i

CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/service/game_loader.cpp -o CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.s

CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.o: ../src/view/sprite_loader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/view/sprite_loader.cpp

CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/view/sprite_loader.cpp > CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.i

CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/view/sprite_loader.cpp -o CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.s

CMakeFiles/Dungeon.dir/src/view/view.cpp.o: CMakeFiles/Dungeon.dir/flags.make
CMakeFiles/Dungeon.dir/src/view/view.cpp.o: ../src/view/view.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Dungeon.dir/src/view/view.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dungeon.dir/src/view/view.cpp.o -c /Users/etblh/Documents/workspace/hw_dungeon/src/view/view.cpp

CMakeFiles/Dungeon.dir/src/view/view.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dungeon.dir/src/view/view.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/etblh/Documents/workspace/hw_dungeon/src/view/view.cpp > CMakeFiles/Dungeon.dir/src/view/view.cpp.i

CMakeFiles/Dungeon.dir/src/view/view.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dungeon.dir/src/view/view.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/etblh/Documents/workspace/hw_dungeon/src/view/view.cpp -o CMakeFiles/Dungeon.dir/src/view/view.cpp.s

# Object files for target Dungeon
Dungeon_OBJECTS = \
"CMakeFiles/Dungeon.dir/src/controller.cpp.o" \
"CMakeFiles/Dungeon.dir/src/dto.cpp.o" \
"CMakeFiles/Dungeon.dir/src/input_reader.cpp.o" \
"CMakeFiles/Dungeon.dir/src/main.cpp.o" \
"CMakeFiles/Dungeon.dir/src/node/monster.cpp.o" \
"CMakeFiles/Dungeon.dir/src/node/npc.cpp.o" \
"CMakeFiles/Dungeon.dir/src/node/player.cpp.o" \
"CMakeFiles/Dungeon.dir/src/node/portal.cpp.o" \
"CMakeFiles/Dungeon.dir/src/node/room.cpp.o" \
"CMakeFiles/Dungeon.dir/src/node/treasure.cpp.o" \
"CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.o" \
"CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.o" \
"CMakeFiles/Dungeon.dir/src/view/view.cpp.o"

# External object files for target Dungeon
Dungeon_EXTERNAL_OBJECTS =

Dungeon: CMakeFiles/Dungeon.dir/src/controller.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/dto.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/input_reader.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/main.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/node/monster.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/node/npc.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/node/player.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/node/portal.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/node/room.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/node/treasure.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/service/game_loader.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/view/sprite_loader.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/src/view/view.cpp.o
Dungeon: CMakeFiles/Dungeon.dir/build.make
Dungeon: /usr/local/lib/libsfml-graphics.2.5.1.dylib
Dungeon: /usr/local/lib/libsfml-audio.2.5.1.dylib
Dungeon: /usr/local/lib/libsfml-window.2.5.1.dylib
Dungeon: /usr/local/lib/libsfml-system.2.5.1.dylib
Dungeon: CMakeFiles/Dungeon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable Dungeon"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dungeon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dungeon.dir/build: Dungeon

.PHONY : CMakeFiles/Dungeon.dir/build

CMakeFiles/Dungeon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dungeon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dungeon.dir/clean

CMakeFiles/Dungeon.dir/depend:
	cd /Users/etblh/Documents/workspace/hw_dungeon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/etblh/Documents/workspace/hw_dungeon /Users/etblh/Documents/workspace/hw_dungeon /Users/etblh/Documents/workspace/hw_dungeon/build /Users/etblh/Documents/workspace/hw_dungeon/build /Users/etblh/Documents/workspace/hw_dungeon/build/CMakeFiles/Dungeon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dungeon.dir/depend

