cmake_minimum_required(VERSION 3.30)
project(Israel_Lara_ejercicios_STL)

set(CMAKE_CXX_STANDARD 14)

add_executable(Israel_Lara_ejercicios_STL
        matematicas/geometria/circulo.cpp
    main.cpp
        matematicas/geometria/triangulo.cpp
        matematicas/matematicas.cpp
        matematicas/matematicas.h
        matematicas/geometria/geometria.h)
