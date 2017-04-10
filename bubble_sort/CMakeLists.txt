cmake_minimum_required (VERSION 2.6)

project (BubbleSort)

include_directories (myvect)

add_subdirectory (random)
add_subdirectory (myvect)

add_executable (BubbleSort bubble_sort_b.c)
target_link_libraries (BubbleSort MyVect)
