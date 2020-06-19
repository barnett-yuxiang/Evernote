cmake_minimum_required(VERSION 3.16)
project(perfetto_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(perfetto_test src/main.cpp src/trace_processor/trace_processor_context.cpp src/trace_processor/trace_processor_context.h src/trace_processor/storage/trace_storage.h src/trace_processor/storage/trace_storage.cpp)