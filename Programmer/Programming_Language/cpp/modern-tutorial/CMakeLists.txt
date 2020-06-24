cmake_minimum_required(VERSION 3.16)
project(modern_tutorial)

set(CMAKE_CXX_STANDARD 17)

add_executable(modern_tutorial main.cpp changkun_gitbook/foo.h changkun_gitbook/foo.c changkun_gitbook/bar.h changkun_gitbook/base.h changkun_gitbook/magic.h changkun_gitbook/smart_pointer_test.h)