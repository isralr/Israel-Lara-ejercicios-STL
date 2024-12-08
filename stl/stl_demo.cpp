#include <vector>
#include <map>
#include <set>
#include <iostream>
#include "stl_demo.h"

void mostrarDemostracionSTL() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    std::cout << "Vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");

    std::cout << "Map (edad): ";
    for (const auto& par : edad) {
        std::cout << par.first << ": " << par.second << " ";
    }
    std::cout << std::endl;

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

    std::cout << "Set: ";
    for (int elemento : conjunto) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

