/*Realizar una clase que permita representar un punto en coordenadas
cartesianas.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa el punto en el origen de coordenadas.
 Definir la sobrecarga del operador ++ que incrementa en 1 ambas
coordenadas.
 Idem para el operador --.
 Definir 2 sobrecargas para el operados +, una para sumar 2 puntos entre si y
otra para sumar a un punto un valor entero.
 Idem para el operador -.
 Definir la/las función/es miembro para obtener la conversión en coordenadas
polares.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>
#include "coordenadas.h"
using namespace std;

int main() {
    Punto p1(1.0, 2.0), p2, p3;

  cout << "p1 = "; p1.mostrar();

    cout << "Ingrese las coordenadas de p2: ";
    p2.cargar();
    cout << "p2 = "; p2.mostrar();

    p3 = p1 + p2;
   cout << "p1 + p2 = "; p3.mostrar();

    p3 = p1 - p2;
    cout << "p1 - p2 = "; p3.mostrar();

    p3 = p1 + 3;
    cout << "p1 + 3 = "; p3.mostrar();

    p3 = p2 - 2;
    cout << "p2 - 2 = "; p3.mostrar();

    ++p1;
    cout << "++p1 = "; p1.mostrar();

    p2--;
   cout << "p2-- = "; p2.mostrar();

    cout << "Distancia de p1 al origen: " << p1.distanciaOrigen() << endl;
  cout << "Ángulo de p1 respecto al origen: " << p1.anguloOrigen() << endl;

    return 0;
}
