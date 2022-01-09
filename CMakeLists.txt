# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.12)

project ("FriendlyGeek")

# Include sub-projects.
add_subdirectory ("FriendlyGeekEngine")

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("Driver")