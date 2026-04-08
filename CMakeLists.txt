cmake_minimum_required(VERSION 4.1)
project(C)

set(CMAKE_C_STANDARD 11)

add_executable(main src/main.c
        src/test.c
        src/week1/helloWorld.c
        src/week2/2026031801_이동주.c
        src/week2/2026031802_이동주.c
        src/week2/2026031803_이동주.c
        src/week2/2026031804_이동주.c
        src/week2/2026031805_이동주.c
        src/week3/20260325_이동주.c
        src/week04/20260401_이동주.c
        src/week04/test.c
        src/week06/20260408_이동주.c
        src/week06/test.c
)
