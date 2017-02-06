cmake_minimum_required (VERSION 2.6)

project (Pgreco)

include_directories (random)

add_subdirectory (random)

add_executable (Main main.c)
target_link_libraries (Main Random)
