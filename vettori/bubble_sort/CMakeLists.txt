cmake_minimum_required (VERSION 2.6)
project (BubbleSort)

include_directories (dado)
add_subdirectory (random)
add_subdirectory (dado)

add_executable (BubbleSort main.c)

target_link_libraries (BubbleSort Dado)

