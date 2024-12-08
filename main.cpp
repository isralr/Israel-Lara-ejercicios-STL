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
    void ejecutarEjercicio3();{
        std::cout << "=== Ejercicio 3: Clase Circulo ===\n";
        Geometria::Circulo c(5);
        std::cout << "Area del circulo: " << c.calcularArea() << std::endl;
        std::cout << "Perimetro del circulo: " << c.calcularPerimetro() << std::endl;
    }
    return 0;
}