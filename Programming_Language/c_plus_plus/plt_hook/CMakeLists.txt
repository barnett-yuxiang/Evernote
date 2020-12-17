cmake_minimum_required(VERSION 3.17)
project(plt_hook)

set(CMAKE_CXX_STANDARD 11)

add_library(test SHARED test.h test.c)

add_library(test_static STATIC test.h test.c)

#add_executable(plt_hook main.c test.h test.c)
