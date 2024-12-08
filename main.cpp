#include <iostream>
#include "matematicas/matematicas.h"
#include "matematicas/geometria/geometria.h"

int main() {
    void ejecutarEjercicio1();{
        std::cout << "=== Ejercicio 1: Operaciones Matematicas ===\n";
        std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
        std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    }

    void ejecutarEjercicio2();{
        std::cout << "=== Ejercicio 2: Areas de Triangulos y Circulos ===\n";
        std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
        std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    }
    return 0;
}