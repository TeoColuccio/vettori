include_directories (../random)

add_library (Myvect myvect.c myvect.h)

target_link_libraries (Myvect Random)
