#include <iostream>
#include "matematicas/matematicas.h"

int main() {
    std::cout << "=== Ejercicio 1: Operaciones Matemáticas ===\n";
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    return 0;
}
