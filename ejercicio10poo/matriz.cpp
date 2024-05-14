#include "matriz.h"

// Constructor por defecto
Matriz::Matriz() : datos(nullptr), filas(0), columnas(0) {}

// Constructor con filas y columnas
Matriz::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    datos = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        datos[i] = new int[columnas];
    }
}

// Destructor
Matriz::~Matriz() {
    for (int i = 0; i < filas; ++i) {
        delete[] datos[i];
    }
    delete[] datos;
}

// Sobrecarga del operador de suma
Matriz Matriz::operator+(const Matriz& otra) {
    if (filas != otra.filas || columnas != otra.columnas) {
        std::cerr << "Error: No se pueden sumar matrices de diferentes dimensiones." << std::endl;
        return Matriz();
    }

    Matriz resultado(filas, columnas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
        }
    }
    return resultado;
}

// Sobrecarga del operador de resta
Matriz Matriz::operator-(const Matriz& otra) {
    if (filas != otra.filas || columnas != otra.columnas) {
        std::cerr << "Error: No se pueden restar matrices de diferentes dimensiones." << std::endl;
        return Matriz();
    }

    Matriz resultado(filas, columnas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
        }
    }
    return resultado;
}

// Sobrecarga del operador de multiplicación
Matriz Matriz::operator*(const Matriz& otra) {
    if (columnas != otra.filas) {
        std::cerr << "Error: No se pueden multiplicar matrices con dimensiones incorrectas." << std::endl;
        return Matriz();
    }

    Matriz resultado(filas, otra.columnas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < otra.columnas; ++j) {
            for (int k = 0; k < columnas; ++k) {
                resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
            }
        }
    }
    return resultado;
}

// Sobrecarga del operador de subíndice ()
int& Matriz::operator()(int fila, int columna) {
    return datos[fila][columna];
}

// Sobrecarga del operador de subíndice []
int& Matriz::operator[](int indice) {
    return datos[indice][indice];
}

// Método para mostrar la matriz
void Matriz::mostrar() {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << datos[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
