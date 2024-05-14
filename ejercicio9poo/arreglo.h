#include <iostream>|
#ifndef EJERCICIO9POO_ARREGLO_H
#define EJERCICIO9POO_ARREGLO_H



class ArregloEnteros {
private:
    int* datos;
    int tamano;

public:
    // Constructor por defecto
    ArregloEnteros();

    // Constructor con tamaño
    ArregloEnteros(int size);

    // Destructor
    ~ArregloEnteros();

    // Sobrecarga de operador de suma
    ArregloEnteros operator+(const ArregloEnteros& otro);

    // Sobrecarga de operador de resta
    ArregloEnteros operator-(const ArregloEnteros& otro);

    // Sobrecarga de operador de producto escalar
    int operator*(const ArregloEnteros& otro);

    // Sobrecarga del operador de subindicación []
    int& operator[](int indice);

    // Método para mostrar el arreglo
    void mostrar();
};


#endif //EJERCICIO9POO_ARREGLO_H
