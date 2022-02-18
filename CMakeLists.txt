cmake_minimum_required(VERSION 3.5)

set(This libft)

projects(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(googletest)

set(Headers
    libft.h
)

set(Sources
    *.c
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(tests)