cmake_minimum_required(VERSION 3.10)

project(jian48)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)


add_executable(jian48 main.cpp)
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../debugTools
)

target_compile_options(jian48 PRIVATE -g)
