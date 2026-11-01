# CMakeList.txt : CMake project for sdl_project, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (sdl_project "sdl_project.cpp" "sdl_project.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sdl_project PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
