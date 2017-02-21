cmake_minimum_required (VERSION 2.6)
project (MyVect)

include_directories (myvect)
add_subdirectory (random)
add_subdirectory (myvect)

add_executable (Myvect main.c)

target_link_libraries (Myvect Myvect)

