cmake_minimum_required(VERSION 3.16)
project(getting_started)

set(CMAKE_CXX_STANDARD 11)

add_executable(getting_started main.cpp art/runtime/thread.h)