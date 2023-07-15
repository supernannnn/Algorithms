cmake_minimum_required(VERSION 3.10)

project(46)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)


add_executable(46 main.cpp)

target_compile_options(46 PRIVATE -g)
