/*Realizar una clase que permita representar un cronómetro. Dicho cronómetro
consta de horas, minutos y segundos. Las horas no tienen límite en valor
mientras que los minutos y segundos llegan al máximo hasta 59.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa a cero el cronómetro.
 Definir un método Reset que permita llevar a cero el cronómetro.
 Definir la sobrecarga del operador ++ para producir el incremento del
cronómetro en un segundo.
 Realizar un programa principal que haga uso de la clase.*/

#include <iostream>
#include "cronometro.h"
using namespace std;

int main() {
    Cronometro crono;

    cout << "Cronometro inicial: ";
    crono.mostrar();

    cout << "Ingrese un nuevo valor para el cronometro: ";
    crono.cargar();
   cout << "Nuevo valor: ";
    crono.mostrar();

   cout << "Incrementando el cronometro..." <<endl;
    for (int i = 0; i < 65; ++i) {
        ++crono;
        crono.mostrar();
    }

    crono.reset();
   cout << "Cronometro reseteado: ";
    crono.mostrar();

    // Ejemplo de asignación manual de valores
    crono.setHoras(12);
    crono.setMinutos(34);
    crono.setSegundos(56);
   cout << "Valor asignado manualmente: ";
    crono.mostrar();

    return 0;
}

