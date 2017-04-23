include_directories (../random)

add_library (MyVect myvect.c myvect.h)
target_link_libraries (MyVect Random)
