cmake_minimum_required(VERSION 3.16)
project(define_usage)

set(CMAKE_CXX_STANDARD 17)

add_executable(define_usage main.cpp node.h thread.cpp thread.h HTraceStart.cpp HTraceStart.h)