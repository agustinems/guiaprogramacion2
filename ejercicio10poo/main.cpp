#include <iostream>
#include "matriz.h"


// Función para ingresar los valores de una matriz
void ingresarMatriz(Matriz& matriz, const std::string& nombre, int filas, int columnas) {
    std::cout << "Ingrese los valores de la matriz " << nombre << ":" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << nombre << "[" << i << "][" << j << "]: ";
            std::cin >> matriz(i, j);
        }
    }
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas de las matrices: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas de las matrices: ";
    std::cin >> columnas;

    Matriz A(filas, columnas);
    Matriz B(filas, columnas);

    ingresarMatriz(A, "A", filas, columnas);
    ingresarMatriz(B, "B", filas, columnas);

    std::cout << "Matriz A:" << std::endl;
    A.mostrar();
    std::cout << std::endl;

    std::cout << "Matriz B:" << std::endl;
    B.mostrar();
    std::cout << std::endl;

    Matriz suma = A + B;
    std::cout << "Suma de matrices A + B:" << std::endl;
    suma.mostrar();
    std::cout << std::endl;

    Matriz resta = A - B;
    std::cout << "Resta de matrices A - B:" << std::endl;
    resta.mostrar();
    std::cout << std::endl;

    Matriz producto = A * B;
    std::cout << "Producto de matrices A * B:" << std::endl;
    producto.mostrar();
    std::cout << std::endl;

    std::cout << "Elementos de la diagonal principal de la matriz A:" << std::endl;
    std::cout << A[0] << " " << A[1] << std::endl;

    return 0;
}
