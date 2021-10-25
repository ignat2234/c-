cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(untitled
        pointers.cpp
        pointers.h)
