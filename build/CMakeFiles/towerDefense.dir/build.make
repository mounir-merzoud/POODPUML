# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jean\POODPUML

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jean\POODPUML\build

# Include any dependencies generated for this target.
include CMakeFiles/towerDefense.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/towerDefense.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/towerDefense.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/towerDefense.dir/flags.make

CMakeFiles/towerDefense.dir/main.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/main.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/main.cpp.obj: C:/Users/Jean/POODPUML/main.cpp
CMakeFiles/towerDefense.dir/main.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/towerDefense.dir/main.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/main.cpp.obj -MF CMakeFiles\towerDefense.dir\main.cpp.obj.d -o CMakeFiles\towerDefense.dir\main.cpp.obj -c C:\Users\Jean\POODPUML\main.cpp

CMakeFiles/towerDefense.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/main.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\main.cpp > CMakeFiles\towerDefense.dir\main.cpp.i

CMakeFiles/towerDefense.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/main.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\main.cpp -o CMakeFiles\towerDefense.dir\main.cpp.s

CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj: C:/Users/Jean/POODPUML/src/GameObject.cpp
CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj -MF CMakeFiles\towerDefense.dir\src\GameObject.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\GameObject.cpp.obj -c C:\Users\Jean\POODPUML\src\GameObject.cpp

CMakeFiles/towerDefense.dir/src/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/GameObject.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\GameObject.cpp > CMakeFiles\towerDefense.dir\src\GameObject.cpp.i

CMakeFiles/towerDefense.dir/src/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/GameObject.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\GameObject.cpp -o CMakeFiles\towerDefense.dir\src\GameObject.cpp.s

CMakeFiles/towerDefense.dir/src/Monster.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/Monster.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/Monster.cpp.obj: C:/Users/Jean/POODPUML/src/Monster.cpp
CMakeFiles/towerDefense.dir/src/Monster.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/towerDefense.dir/src/Monster.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/Monster.cpp.obj -MF CMakeFiles\towerDefense.dir\src\Monster.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\Monster.cpp.obj -c C:\Users\Jean\POODPUML\src\Monster.cpp

CMakeFiles/towerDefense.dir/src/Monster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/Monster.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\Monster.cpp > CMakeFiles\towerDefense.dir\src\Monster.cpp.i

CMakeFiles/towerDefense.dir/src/Monster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/Monster.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\Monster.cpp -o CMakeFiles\towerDefense.dir\src\Monster.cpp.s

CMakeFiles/towerDefense.dir/src/Tower.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/Tower.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/Tower.cpp.obj: C:/Users/Jean/POODPUML/src/Tower.cpp
CMakeFiles/towerDefense.dir/src/Tower.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/towerDefense.dir/src/Tower.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/Tower.cpp.obj -MF CMakeFiles\towerDefense.dir\src\Tower.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\Tower.cpp.obj -c C:\Users\Jean\POODPUML\src\Tower.cpp

CMakeFiles/towerDefense.dir/src/Tower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/Tower.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\Tower.cpp > CMakeFiles\towerDefense.dir\src\Tower.cpp.i

CMakeFiles/towerDefense.dir/src/Tower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/Tower.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\Tower.cpp -o CMakeFiles\towerDefense.dir\src\Tower.cpp.s

CMakeFiles/towerDefense.dir/src/Animation.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/Animation.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/Animation.cpp.obj: C:/Users/Jean/POODPUML/src/Animation.cpp
CMakeFiles/towerDefense.dir/src/Animation.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/towerDefense.dir/src/Animation.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/Animation.cpp.obj -MF CMakeFiles\towerDefense.dir\src\Animation.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\Animation.cpp.obj -c C:\Users\Jean\POODPUML\src\Animation.cpp

CMakeFiles/towerDefense.dir/src/Animation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/Animation.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\Animation.cpp > CMakeFiles\towerDefense.dir\src\Animation.cpp.i

CMakeFiles/towerDefense.dir/src/Animation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/Animation.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\Animation.cpp -o CMakeFiles\towerDefense.dir\src\Animation.cpp.s

CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj: C:/Users/Jean/POODPUML/src/GameObjectFactory.cpp
CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj -MF CMakeFiles\towerDefense.dir\src\GameObjectFactory.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\GameObjectFactory.cpp.obj -c C:\Users\Jean\POODPUML\src\GameObjectFactory.cpp

CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\GameObjectFactory.cpp > CMakeFiles\towerDefense.dir\src\GameObjectFactory.cpp.i

CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\GameObjectFactory.cpp -o CMakeFiles\towerDefense.dir\src\GameObjectFactory.cpp.s

CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj: C:/Users/Jean/POODPUML/src/Weapon.cpp
CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj -MF CMakeFiles\towerDefense.dir\src\Weapon.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\Weapon.cpp.obj -c C:\Users\Jean\POODPUML\src\Weapon.cpp

CMakeFiles/towerDefense.dir/src/Weapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/Weapon.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\Weapon.cpp > CMakeFiles\towerDefense.dir\src\Weapon.cpp.i

CMakeFiles/towerDefense.dir/src/Weapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/Weapon.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\Weapon.cpp -o CMakeFiles\towerDefense.dir\src\Weapon.cpp.s

CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj: C:/Users/Jean/POODPUML/src/Projectile.cpp
CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj -MF CMakeFiles\towerDefense.dir\src\Projectile.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\Projectile.cpp.obj -c C:\Users\Jean\POODPUML\src\Projectile.cpp

CMakeFiles/towerDefense.dir/src/Projectile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/Projectile.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\Projectile.cpp > CMakeFiles\towerDefense.dir\src\Projectile.cpp.i

CMakeFiles/towerDefense.dir/src/Projectile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/Projectile.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\Projectile.cpp -o CMakeFiles\towerDefense.dir\src\Projectile.cpp.s

CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj: C:/Users/Jean/POODPUML/src/CollisionHandler.cpp
CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj -MF CMakeFiles\towerDefense.dir\src\CollisionHandler.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\CollisionHandler.cpp.obj -c C:\Users\Jean\POODPUML\src\CollisionHandler.cpp

CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\CollisionHandler.cpp > CMakeFiles\towerDefense.dir\src\CollisionHandler.cpp.i

CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\CollisionHandler.cpp -o CMakeFiles\towerDefense.dir\src\CollisionHandler.cpp.s

CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj: C:/Users/Jean/POODPUML/src/WaveManager.cpp
CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj -MF CMakeFiles\towerDefense.dir\src\WaveManager.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\WaveManager.cpp.obj -c C:\Users\Jean\POODPUML\src\WaveManager.cpp

CMakeFiles/towerDefense.dir/src/WaveManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/WaveManager.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\WaveManager.cpp > CMakeFiles\towerDefense.dir\src\WaveManager.cpp.i

CMakeFiles/towerDefense.dir/src/WaveManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/WaveManager.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\WaveManager.cpp -o CMakeFiles\towerDefense.dir\src\WaveManager.cpp.s

CMakeFiles/towerDefense.dir/src/GameData.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/GameData.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/GameData.cpp.obj: C:/Users/Jean/POODPUML/src/GameData.cpp
CMakeFiles/towerDefense.dir/src/GameData.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/towerDefense.dir/src/GameData.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/GameData.cpp.obj -MF CMakeFiles\towerDefense.dir\src\GameData.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\GameData.cpp.obj -c C:\Users\Jean\POODPUML\src\GameData.cpp

CMakeFiles/towerDefense.dir/src/GameData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/GameData.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\GameData.cpp > CMakeFiles\towerDefense.dir\src\GameData.cpp.i

CMakeFiles/towerDefense.dir/src/GameData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/GameData.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\GameData.cpp -o CMakeFiles\towerDefense.dir\src\GameData.cpp.s

CMakeFiles/towerDefense.dir/src/Display.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/Display.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/Display.cpp.obj: C:/Users/Jean/POODPUML/src/Display.cpp
CMakeFiles/towerDefense.dir/src/Display.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/towerDefense.dir/src/Display.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/Display.cpp.obj -MF CMakeFiles\towerDefense.dir\src\Display.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\Display.cpp.obj -c C:\Users\Jean\POODPUML\src\Display.cpp

CMakeFiles/towerDefense.dir/src/Display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/Display.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\Display.cpp > CMakeFiles\towerDefense.dir\src\Display.cpp.i

CMakeFiles/towerDefense.dir/src/Display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/Display.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\Display.cpp -o CMakeFiles\towerDefense.dir\src\Display.cpp.s

CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj: CMakeFiles/towerDefense.dir/flags.make
CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj: CMakeFiles/towerDefense.dir/includes_CXX.rsp
CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj: C:/Users/Jean/POODPUML/src/GameManager.cpp
CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj: CMakeFiles/towerDefense.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj -MF CMakeFiles\towerDefense.dir\src\GameManager.cpp.obj.d -o CMakeFiles\towerDefense.dir\src\GameManager.cpp.obj -c C:\Users\Jean\POODPUML\src\GameManager.cpp

CMakeFiles/towerDefense.dir/src/GameManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/towerDefense.dir/src/GameManager.cpp.i"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jean\POODPUML\src\GameManager.cpp > CMakeFiles\towerDefense.dir\src\GameManager.cpp.i

CMakeFiles/towerDefense.dir/src/GameManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/towerDefense.dir/src/GameManager.cpp.s"
	C:\MinGW\winlibs-x86_64-posix-seh-gcc-13.1.0-mingw-w64msvcrt-11.0.0-r5\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jean\POODPUML\src\GameManager.cpp -o CMakeFiles\towerDefense.dir\src\GameManager.cpp.s

# Object files for target towerDefense
towerDefense_OBJECTS = \
"CMakeFiles/towerDefense.dir/main.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/Monster.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/Tower.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/Animation.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/GameData.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/Display.cpp.obj" \
"CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj"

# External object files for target towerDefense
towerDefense_EXTERNAL_OBJECTS =

towerDefense.exe: CMakeFiles/towerDefense.dir/main.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/GameObject.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/Monster.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/Tower.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/Animation.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/GameObjectFactory.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/Weapon.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/Projectile.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/CollisionHandler.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/WaveManager.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/GameData.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/Display.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/src/GameManager.cpp.obj
towerDefense.exe: CMakeFiles/towerDefense.dir/build.make
towerDefense.exe: C:/Users/Jean/SFML/SFML-2.6.1-windows-gcc-13.1.0-mingw-64-bit/SFML-2.6.1/lib/libsfml-graphics-d.a
towerDefense.exe: C:/Users/Jean/SFML/SFML-2.6.1-windows-gcc-13.1.0-mingw-64-bit/SFML-2.6.1/lib/libsfml-audio-d.a
towerDefense.exe: C:/Users/Jean/SFML/SFML-2.6.1-windows-gcc-13.1.0-mingw-64-bit/SFML-2.6.1/lib/libsfml-window-d.a
towerDefense.exe: C:/Users/Jean/SFML/SFML-2.6.1-windows-gcc-13.1.0-mingw-64-bit/SFML-2.6.1/lib/libsfml-system-d.a
towerDefense.exe: CMakeFiles/towerDefense.dir/linkLibs.rsp
towerDefense.exe: CMakeFiles/towerDefense.dir/objects1.rsp
towerDefense.exe: CMakeFiles/towerDefense.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Jean\POODPUML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable towerDefense.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\towerDefense.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/towerDefense.dir/build: towerDefense.exe
.PHONY : CMakeFiles/towerDefense.dir/build

CMakeFiles/towerDefense.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\towerDefense.dir\cmake_clean.cmake
.PHONY : CMakeFiles/towerDefense.dir/clean

CMakeFiles/towerDefense.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jean\POODPUML C:\Users\Jean\POODPUML C:\Users\Jean\POODPUML\build C:\Users\Jean\POODPUML\build C:\Users\Jean\POODPUML\build\CMakeFiles\towerDefense.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/towerDefense.dir/depend

