include_directories (../random)

add_library (Dado dado.c dado.h)

target_link_libraries (Dado Random)
