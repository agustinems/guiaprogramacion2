#include <iostream>
#include "arreglo.h"

int main() {
    ArregloEnteros arreglo1(3);
    arreglo1[0] = 1;
    arreglo1[1] = 2;
    arreglo1[2] = 3;

    ArregloEnteros arreglo2(3);
    arreglo2[0] = 4;
    arreglo2[1] = 5;
    arreglo2[2] = 6;

    std::cout << "Arreglo 1: ";
    arreglo1.mostrar();
    std::cout << "Arreglo 2: ";
    arreglo2.mostrar();

    ArregloEnteros suma = arreglo1 + arreglo2;
    std::cout << "Suma: ";
    suma.mostrar();

    ArregloEnteros resta = arreglo1 - arreglo2;
    std::cout << "Resta: ";
    resta.mostrar();

    int producto_escalar = arreglo1 * arreglo2;
    std::cout << "Producto escalar: " << producto_escalar << std::endl;

    return 0;
}

