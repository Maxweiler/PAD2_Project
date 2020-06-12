add_library(functions STATIC functions.c)

add_executable(Sensoren main.c)
target_link_libraries (Sensoren functions)

#add_subdirectory(sensoren)