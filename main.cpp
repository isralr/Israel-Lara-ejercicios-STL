#include <iostream>
#include "ciencias/matematicas/matematicas.h"
#include "ciencias/matematicas/geometria/geometria.h"
#include "ciencias/fisica/fisica.h"
#include "stl/stl_demo.h"

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
    void ejecutarEjercicio4();{
        std::cout << "=== Ejercicio 4: Energia Relativista ===\n";
        std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    }

    void ejecutarEjercicio5();{
        std::cout << "=== Ejercicio 5: STL ===\n";
        mostrarDemostracionSTL();
    }
    return 0;
}