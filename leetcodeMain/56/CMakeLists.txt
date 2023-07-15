cmake_minimum_required(VERSION 3.10)

project(56)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)


add_executable(56 main.cpp)
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../debugTools
)

target_compile_options(56 PRIVATE -g)
