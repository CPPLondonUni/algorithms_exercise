cmake_minimum_required(VERSION 3.9)
project(algorithms_exercise)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS Off)

add_executable(test_algorithms
    test/catch_main.cpp
    test/test_algorithms.cpp)