cmake_minimum_required(VERSION 3.3)
project(area_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp area.cpp point.cpp)
add_executable(area_cpp ${SOURCE_FILES})