cmake_minimum_required (VERSION 2.6)

project (Pgreco)

include_directories (random)
include_directories (punto)

add_subdirectory (random)
add_subdirectory (punto)

add_executable (Main main.c)
target_link_libraries (Main Random Punto)
