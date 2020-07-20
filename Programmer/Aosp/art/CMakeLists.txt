cmake_minimum_required(VERSION 3.16)
project(art)

set(CMAKE_CXX_STANDARD 11)

add_executable(art main.cpp libartbase/base/arena_object.h)