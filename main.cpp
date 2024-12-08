#include <iostream>

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);
}

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}
