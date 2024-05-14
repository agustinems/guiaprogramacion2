cmake_minimum_required(VERSION 3.28)
project(ejerciciorelojrepaso)

set(CMAKE_CXX_STANDARD 17)

add_executable(ejerciciorelojrepaso main.cpp
        reloj.cpp
        reloj.h
        temperatura.cpp
        temperatura.h)
