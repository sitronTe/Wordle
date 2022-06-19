cmake_minimum_required(VERSION 3.22)
project(wordle)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(wordle
        main.cpp
        wordle.cpp
        wordle.h)
