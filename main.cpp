#include <iostream>
#include "matematicas/matematicas.h"
#include "matematicas/geometria/geometria.h"

void ejecutarEjercicio1() {
    std::cout << "=== Ejercicio 1: Operaciones Matemáticas ===\n";
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
}

void ejecutarEjercicio2() {
    std::cout << "=== Ejercicio 2: Áreas de Triángulos y Círculos ===\n";
    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(3) << std::endl;
}
