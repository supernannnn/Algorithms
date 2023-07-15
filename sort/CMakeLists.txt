cmake_minimum_required(VERSION 3.10)

project(sort)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)


add_executable(sort 
                src/main.cpp
                src/BubbleSortPlus.cpp
                src/SelectSort.cpp
                src/InsertSort.cpp
                src/ShellSort.cpp
                src/HeapSort.cpp
                src/MergeSort.cpp
                src/QuickSort.cpp)
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../debugTools
    include
)

target_compile_options(sort PRIVATE -g)
