cmake_minimum_required (VERSION 2.6)
project (vettori)

include_directories (myvect myvect_math)
add_subdirectory (random)
add_subdirectory (myvect)
add_subdirectory(myvect_math)

add_executable (vettori main.c)

target_link_libraries (vettori Myvect)

