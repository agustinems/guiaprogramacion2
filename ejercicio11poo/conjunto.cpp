
#include "conjunto.h"

#include "conjunto.h"

#include <iostream>

// Constructor por defecto
Conjunto::Conjunto() : elementos(nullptr), tamMax(10), numElementos(0) {
    elementos = new int[tamMax];
}

// Constructor con tamaño máximo
Conjunto::Conjunto(int tamMax) : elementos(nullptr), tamMax(tamMax), numElementos(0) {
    elementos = new int[tamMax];
}

// Destructor
Conjunto::~Conjunto() {
    delete[] elementos;
}

// Método para agregar un elemento al conjunto
void Conjunto::agregar(int elemento) {
    if (numElementos < tamMax) {
        // Verificar si el elemento ya está en el conjunto
        for (int i = 0; i < numElementos; ++i) {
            if (elementos[i] == elemento) {
                std::cout << "El elemento ya está en el conjunto." << std::endl;
                return;
            }
        }
        elementos[numElementos] = elemento;
        ++numElementos;
    } else {
        std::cout << "No se puede agregar más elementos, el conjunto está lleno." << std::endl;
    }
}

// Método para eliminar un elemento del conjunto
void Conjunto::eliminar(int elemento) {
    int indice = -1;
    for (int i = 0; i < numElementos; ++i) {
        if (elementos[i] == elemento) {
            indice = i;
            break;
        }
    }
    if (indice != -1) {
        for (int i = indice; i < numElementos - 1; ++i) {
            elementos[i] = elementos[i + 1];
        }
        --numElementos;
    } else {
        std::cout << "El elemento no está en el conjunto." << std::endl;
    }
}

// Método para mostrar los elementos del conjunto
void Conjunto::mostrar() {
    std::cout << "{ ";
    for (int i = 0; i < numElementos; ++i) {
        std::cout << elementos[i];
        if (i != numElementos - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " }" << std::endl;
}

// Sobrecarga del operador de asignación
Conjunto& Conjunto::operator=(const Conjunto& otro) {
    if (this == &otro) {
        return *this;
    }
    delete[] elementos;
    tamMax = otro.tamMax;
    numElementos = otro.numElementos;
    elementos = new int[tamMax];
    for (int i = 0; i < numElementos; ++i) {
        elementos[i] = otro.elementos[i];
    }
    return *this;
}

// Sobrecarga del operador de unión
Conjunto Conjunto::operator+(const Conjunto& otro) {
    Conjunto resultado(tamMax + otro.tamMax);
    for (int i = 0; i < numElementos; ++i) {
        resultado.agregar(elementos[i]);
    }
    for (int i = 0; i < otro.numElementos; ++i) {
        resultado.agregar(otro.elementos[i]);
    }
    return resultado;
}

// Sobrecarga del operador de intersección
Conjunto Conjunto::operator*(const Conjunto& otro) {
    Conjunto resultado;
    for (int i = 0; i < numElementos; ++i) {
        for (int j = 0; j < otro.numElementos; ++j) {
            if (elementos[i] == otro.elementos[j]) {
                resultado.agregar(elementos[i]);
                break;
            }
        }
    }
    return resultado;
}

// Sobrecarga del operador de diferencia
Conjunto Conjunto::operator-(const Conjunto& otro) {
    Conjunto resultado;
    for (int i = 0; i < numElementos; ++i) {
        bool encontrado = false;
        for (int j = 0; j < otro.numElementos; ++j) {
            if (elementos[i] == otro.elementos[j]) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado.agregar(elementos[i]);
        }
    }
    return resultado;
}

