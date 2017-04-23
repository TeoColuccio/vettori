cmake_minimum_required (VERSION 2.6)

project (SelectionSort)

include_directories (myvect)

add_subdirectory (random)
add_subdirectory (myvect)

add_executable (SelectionSort selection_sort.c)
target_link_libraries (SelectionSort MyVect)
