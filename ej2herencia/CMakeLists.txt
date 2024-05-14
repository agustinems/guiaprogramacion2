cmake_minimum_required(VERSION 3.28)
project(ej2herencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(ej2herencia main.cpp
        Empleado.cpp
        Empleado.h
        Comercial.cpp
        Comercial.h
        Repartidor.cpp
        Repartidor.h)
