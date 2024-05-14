#include <iostream>
#include "arreglo.h"

ArregloEnteros :: ArregloEnteros() : datos(nullptr), tamano(0) {}
ArregloEnteros ::  ArregloEnteros(int size) : tamano(size) {
    datos = new int[tamano];
}
ArregloEnteros ::  ~ArregloEnteros() {
    delete[] datos;
}
ArregloEnteros ::  ArregloEnteros operator+(const ArregloEnteros& otro) {
    ArregloEnteros resultado(tamano);
    for (int i = 0; i < tamano; ++i) {
        resultado.datos[i] = datos[i] + otro.datos[i];
    }
    return resultado;
}
ArregloEnteros ::  ArregloEnteros operator-(const ArregloEnteros& otro) {
    ArregloEnteros resultado(tamano);
    for (int i = 0; i < tamano; ++i) {
        resultado.datos[i] = datos[i] - otro.datos[i];
    }
    return resultado;
}
int ArregloEnteros ::  operator*(const ArregloEnteros& otro) {
    int producto = 0;
    for (int i = 0; i < tamano; ++i) {
        producto += datos[i] * otro.datos[i];
    }
    return producto;
}

int ArregloEnteros ::   & operator[](int indice) {
    return datos[indice];
}

void ArregloEnteros::  mostrar() {
    std::cout << "[";
    for (int i = 0; i < tamano; ++i) {
        std::cout << datos[i];
        if (i < tamano - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}