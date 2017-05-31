cmake_minimum_required (VERSION 2.6)

project (Ricerca_binaria)

include_directories (myvect)

add_subdirectory (random)
add_subdirectory (myvect)

add_executable (Ricerca_binaria ricerca_binaria.c)
target_link_libraries (Ricerca_binaria MyVect)
