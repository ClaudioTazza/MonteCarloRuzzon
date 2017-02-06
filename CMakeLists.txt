cmake_minimum_required (VERSION 2.6)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 ")

project (Pgreco)

include_directories (random)

add_subdirectory (random)

add_executable (Main main.c)
target_link_libraries (Main Random)
