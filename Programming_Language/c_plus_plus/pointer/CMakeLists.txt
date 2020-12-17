cmake_minimum_required(VERSION 3.16)
project(pointer)

set(CMAKE_CXX_STANDARD 11)

add_executable(pointer main.cpp runtime/thread.h dex_file.h)