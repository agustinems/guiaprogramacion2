#include <iostream>

int main() {
    // Declarar e inicializar dos variables enteras
    int a = 10;
    int b = 20;

    // Declarar un puntero a entero
    int *ptr;

    // Asignar al puntero la dirección de la primera variable
    ptr = &a;

    // Imprimir la dirección de memoria apuntada y su contenido
    std::cout << "Para la variable 'a':" << std::endl;
    std::cout << "Dirección de memoria apuntada: " << ptr << std::endl;
    std::cout << "Contenido de la dirección apuntada: " << *ptr << std::endl;

    // Asignar al puntero la dirección de la segunda variable
    ptr = &b;

    // Imprimir la dirección de memoria apuntada y su contenido
    std::cout << "\nPara la variable 'b':" << std::endl;
    std::cout << "Dirección de memoria apuntada: " << ptr << std::endl;
    std::cout << "Contenido de la dirección apuntada: " << *ptr << std::endl;

    return 0;
}
