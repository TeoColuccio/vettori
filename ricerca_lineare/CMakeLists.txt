cmake_minimum_required (VERSION 2.6)

project (Ricerca_lineare)

include_directories (myvect)

add_subdirectory (random)
add_subdirectory (myvect)

add_executable (Ricerca_lineare ricerca_lineare.c)
target_link_libraries (Ricerca_lineare MyVect)
