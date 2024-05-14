#include <iostream>
#include "conjunto.h"

// Función para ingresar elementos a un conjunto
void ingresarConjunto(Conjunto& conjunto, const std::string& nombre) {
    int tamMax;
    std::cout << "Ingrese el tamaño máximo del conjunto " << nombre << ": ";
    std::cin >> tamMax;
    conjunto = Conjunto(tamMax);
    std::cout << "Ingrese los elementos del conjunto " << nombre << " separados por espacios:" << std::endl;
    int elemento;
    while (std::cin >> elemento) {
        conjunto.agregar(elemento);
        char nextChar;
        std::cin.get(nextChar);
        if (nextChar == '\n') {
            break; // Si es el último elemento, salir del bucle
        }
    }
    std::cin.clear(); // Limpiar el indicador de error
    std::cin.ignore(10000, '\n'); // Ignorar caracteres adicionales en el búfer
}

int main() {
    Conjunto A, B;

    ingresarConjunto(A, "A");
    ingresarConjunto(B, "B");

    std::cout << "Conjunto A:" << std::endl;
    A.mostrar();
    std::cout << std::endl;

    std::cout << "Conjunto B:" << std::endl;
    B.mostrar();
    std::cout << std::endl;

    Conjunto C = A + B;
    std::cout << "Unión de conjuntos A + B:" << std::endl;
    C.mostrar();
    std::cout << std::endl;

    Conjunto D = A * B;
    std::cout << "Intersección de conjuntos A * B:" << std::endl;
    D.mostrar();
    std::cout << std::endl;

    Conjunto E = A - B;
    std::cout << "Diferencia de conjuntos A - B:" << std::endl;
    E.mostrar();
    std::cout << std::endl;

    return 0;
}
