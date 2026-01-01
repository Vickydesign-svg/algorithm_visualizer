cmake_minimum_required(VERSION 4.0)
project(algorithm_visualizer)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithm_visualizer
        src/bubble_sort.cpp
        src/selection_sort.cpp
        src/selection_sort.cpp
        src/main.cpp
        include/selection_sort.h
)
include_directories(include)
