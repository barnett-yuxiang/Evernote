cmake_minimum_required(VERSION 3.4.1)

add_library(mytest SHARED
            mytest.cpp)

# Include libraries needed for mytest lib
target_link_libraries(mytest
                      android
                      log)
