# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\rodrigo.recharte\CLionProjects\session9a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\triangulo.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\triangulo.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\triangulo.dir\flags.make

CMakeFiles\triangulo.dir\main.cpp.obj: CMakeFiles\triangulo.dir\flags.make
CMakeFiles\triangulo.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/triangulo.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1421~1.277\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\triangulo.dir\main.cpp.obj /FdCMakeFiles\triangulo.dir\ /FS -c C:\Users\rodrigo.recharte\CLionProjects\session9a\main.cpp
<<

CMakeFiles\triangulo.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/triangulo.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1421~1.277\bin\Hostx86\x86\cl.exe > CMakeFiles\triangulo.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rodrigo.recharte\CLionProjects\session9a\main.cpp
<<

CMakeFiles\triangulo.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/triangulo.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1421~1.277\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\triangulo.dir\main.cpp.s /c C:\Users\rodrigo.recharte\CLionProjects\session9a\main.cpp
<<

CMakeFiles\triangulo.dir\Triangulo.cpp.obj: CMakeFiles\triangulo.dir\flags.make
CMakeFiles\triangulo.dir\Triangulo.cpp.obj: ..\Triangulo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/triangulo.dir/Triangulo.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1421~1.277\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\triangulo.dir\Triangulo.cpp.obj /FdCMakeFiles\triangulo.dir\ /FS -c C:\Users\rodrigo.recharte\CLionProjects\session9a\Triangulo.cpp
<<

CMakeFiles\triangulo.dir\Triangulo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/triangulo.dir/Triangulo.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1421~1.277\bin\Hostx86\x86\cl.exe > CMakeFiles\triangulo.dir\Triangulo.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rodrigo.recharte\CLionProjects\session9a\Triangulo.cpp
<<

CMakeFiles\triangulo.dir\Triangulo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/triangulo.dir/Triangulo.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1421~1.277\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\triangulo.dir\Triangulo.cpp.s /c C:\Users\rodrigo.recharte\CLionProjects\session9a\Triangulo.cpp
<<

# Object files for target triangulo
triangulo_OBJECTS = \
"CMakeFiles\triangulo.dir\main.cpp.obj" \
"CMakeFiles\triangulo.dir\Triangulo.cpp.obj"

# External object files for target triangulo
triangulo_EXTERNAL_OBJECTS =

triangulo.exe: CMakeFiles\triangulo.dir\main.cpp.obj
triangulo.exe: CMakeFiles\triangulo.dir\Triangulo.cpp.obj
triangulo.exe: CMakeFiles\triangulo.dir\build.make
triangulo.exe: CMakeFiles\triangulo.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable triangulo.exe"
	"C:\Program Files\JetBrains\CLion 2018.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\triangulo.dir --manifests  -- C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1421~1.277\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\triangulo.dir\objects1.rsp @<<
 /out:triangulo.exe /implib:triangulo.lib /pdb:C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug\triangulo.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\triangulo.dir\build: triangulo.exe

.PHONY : CMakeFiles\triangulo.dir\build

CMakeFiles\triangulo.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\triangulo.dir\cmake_clean.cmake
.PHONY : CMakeFiles\triangulo.dir\clean

CMakeFiles\triangulo.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\rodrigo.recharte\CLionProjects\session9a C:\Users\rodrigo.recharte\CLionProjects\session9a C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug C:\Users\rodrigo.recharte\CLionProjects\session9a\cmake-build-debug\CMakeFiles\triangulo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\triangulo.dir\depend

