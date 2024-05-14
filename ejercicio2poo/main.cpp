/*Realizar una clase que permita representar un número racional.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir uno o más constructores para inicializar los datos miembro.
 Definir sobrecargas de los siguientes operadores:
o + suma 2 racionales generando otro como resultado.
o – resta 2 racionales generando otro como resultado.
o ++ incrementa en 1 un racional
o –– decrementa en 1 un racional.
o +=suma un entero a un racional.
o –=suma un entero a un racional
 Definir además una función miembro que implemente la simplificación del
racional.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>
#include "racional.h"

int main() {
    Racional r1(1, 2), r2(3, 4), r3;

    std::cout << "r1 = "; r1.mostrar();
    std::cout << "r2 = "; r2.mostrar();

    r3 = r1 + r2;
    std::cout << "r1 + r2 = "; r3.mostrar();

    r3 = r1 - r2;
    std::cout << "r1 - r2 = "; r3.mostrar();

    ++r1;
    std::cout << "++r1 = "; r1.mostrar();

    r2--;
    std::cout << "r2-- = "; r2.mostrar();

    r1 += 3;
    std::cout << "r1 += 3 = "; r1.mostrar();

    r2 -= 2;
    std::cout << "r2 -= 2 = "; r2.mostrar();

    std::cout << "Ingrese un nuevo racional: ";
    r3.cargar();
    std::cout << "El racional ingresado es: "; r3.mostrar();

    return 0;
}
