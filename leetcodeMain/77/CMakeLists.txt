cmake_minimum_required(VERSION 3.10)

project(77)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)


add_executable(77 main.cpp)

target_compile_options(77 PRIVATE -g)
