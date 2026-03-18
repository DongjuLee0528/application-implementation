cmake_minimum_required(VERSION 4.1)
project(C)

set(CMAKE_C_STANDARD 11)

add_executable(main src/main.c
        src/test.c
        src/week1/helloWorld.c
        src/week2/20260318_이동주.cpp)
