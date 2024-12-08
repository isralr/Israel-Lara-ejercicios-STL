cmake_minimum_required(VERSION 3.30)
project(Israel_Lara_ejercicios_STL)

set(CMAKE_CXX_STANDARD 14)

add_executable(Israel_Lara_ejercicios_STL
        ciencias/matematicas/geometria/circulo.cpp
    main.cpp
        ciencias/matematicas/geometria/triangulo.cpp
        ciencias/matematicas/matematicas.cpp
        ciencias/matematicas/matematicas.h
        ciencias/matematicas/geometria/geometria.h
        ciencias/fisica/fisica.h
        ciencias/fisica/fisica.cpp
        stl/stl_demo.cpp
        stl/stl_demo.h)
