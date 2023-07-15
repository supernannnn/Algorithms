cmake_minimum_required(VERSION 3.10)

project(406)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)


add_executable(406 main.cpp)
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../debugTools
)

target_compile_options(406 PRIVATE -g)
