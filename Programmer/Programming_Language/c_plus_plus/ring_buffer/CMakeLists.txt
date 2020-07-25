cmake_minimum_required(VERSION 3.16)
project(ring_buffer)

set(CMAKE_CXX_STANDARD 11)

add_executable(ring_buffer main.cpp ringbuffer.h)