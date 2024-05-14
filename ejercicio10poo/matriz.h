#include <iostream>
#ifndef EJERCICIO10POO_MATRIZ_H
#define EJERCICIO10POO_MATRIZ_H

class Matriz {
private:
    int** datos;
    int filas;
    int columnas;

public:
    // Constructor por defecto
    Matriz();

    // Constructor con filas y columnas
    Matriz(int filas, int columnas);
    // Destructor
    ~Matriz();

    // Sobrecarga del operador de suma
    Matriz operator+(const Matriz& otra);

    // Sobrecarga del operador de resta
    Matriz operator-(const Matriz& otra);

    // Sobrecarga del operador de multiplicación
    Matriz operator*(const Matriz& otra);
    // Sobrecarga del operador de subíndice ()
    int& operator()(int fila, int columna);

    // Sobrecarga del operador de subíndice []
    int& operator[](int indice) ;

    // Método para mostrar la matriz
    void mostrar();
};

#endif //EJERCICIO10POO_MATRIZ_H
