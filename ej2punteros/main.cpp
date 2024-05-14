#include <iostream>

int main() {
    // Declarar un arreglo de 5 enteros
    int arr[5] = {1, 2, 3, 4, 5};

    // Declarar un puntero a entero
    int *ptr;

    // Asignar la dirección del primer elemento del arreglo al puntero
    ptr = &arr[0];

    // Imprimir las direcciones de memoria de los elementos del arreglo
    std::cout << "Direcciones de memoria de los elementos del arreglo:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Elemento " << i << ": " << ptr + i << std::endl;
    }

    return 0;
}

