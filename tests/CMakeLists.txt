cmake_minimum_required(VERSION 3.5)

set(This ftlibtests)

set(Sources
    ftlibtests.cc
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    libft
)

add_test(
    NAME ${This}
    COMMAND ${This}
)