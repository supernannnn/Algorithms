cmake_minimum_required(VERSION 3.10)

project(135)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)


add_executable(135 main.cpp)

target_compile_options(135 PRIVATE -g)
