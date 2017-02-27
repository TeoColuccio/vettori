cmake_minimum_required (VERSION 2.6)
project (vettori)

# che fine ha fatto l'altra directory? prima c'era
include_directories (myvect)

add_subdirectory (random)
add_subdirectory (myvect)
add_subdirectory(myvect_math)

add_executable (vettori main.c)

# qui perche' non aggiungi l'altro modulo?
target_link_libraries (vettori Myvect)
