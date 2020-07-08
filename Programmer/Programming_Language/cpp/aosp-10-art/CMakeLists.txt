cmake_minimum_required(VERSION 3.16)
project(aosp_10_art)

set(CMAKE_CXX_STANDARD 17)

add_executable(aosp_10_art main.cpp runtime/nanoscope_utils.h runtime/runtime.cpp runtime/runtime.h runtime/thread.h runtime/thread.cpp runtime/art_method.h)