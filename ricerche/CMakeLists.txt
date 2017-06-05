cmake_minimum_required (VERSION 2.6)

project (Ricerca)

include_directories (myvect myvect_search)

add_subdirectory (random)
add_subdirectory (myvect)
add_subdirectory (myvect_search)

add_executable (Ricerca main.c)
target_link_libraries (Ricerca MyVect MyVect_search)
