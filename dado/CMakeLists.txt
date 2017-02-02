cmake_minimum_required (VERSION 2.6)
project (LanciaDado)

include_directories (dado)
add_subdirectory (random)
add_subdirectory (dado)

add_executable (LanciaDado lancia_dado.c)

target_link_libraries (LanciaDado Dado)

