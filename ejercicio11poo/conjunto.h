#include <iostream>
#ifndef EJERCICIO11POO_CONJUNTO_H
#define EJERCICIO11POO_CONJUNTO_H


#ifndef CONJUNTO_H
#define CONJUNTO_H



class Conjunto {
private:
    int* elementos;
    int tamMax;
    int numElementos;

public:
    // Constructor por defecto
    Conjunto();

    // Constructor con tamaño máximo
    Conjunto(int tamMax);

    // Destructor
    ~Conjunto();

    // Método para agregar un elemento al conjunto
    void agregar(int elemento);

    // Método para eliminar un elemento del conjunto
    void eliminar(int elemento);

    // Método para mostrar los elementos del conjunto
    void mostrar();

    // Sobrecarga del operador de asignación
    Conjunto& operator=(const Conjunto& otro);

    // Sobrecarga del operador de unión
    Conjunto operator+(const Conjunto& otro);

    // Sobrecarga del operador de intersección
    Conjunto operator*(const Conjunto& otro);

    // Sobrecarga del operador de diferencia
    Conjunto operator-(const Conjunto& otro);
};

#endif




#endif //EJERCICIO11POO_CONJUNTO_H
