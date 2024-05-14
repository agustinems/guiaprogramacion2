#include "fecha.h"
#include <iostream>
using namespace std;
int main() {
    Fecha fecha1(28, 2, 2024); // Fecha dada
    Fecha fecha2; // Fecha inicializada a 01/01/1900

    // Mostrando las fechas
    cout << "Fecha 1: ";
    fecha1.mostrarFecha();
   cout << "Fecha 2: ";
    fecha2.mostrarFecha();

    // Incrementando y mostrando la fecha 1
    ++fecha1;
   cout << "Fecha 1 incrementada en un día: ";
    fecha1.mostrarFecha();

    // Sumando 10 días a la fecha 2 y mostrando
    fecha2 = fecha2 + 10;
   cout << "Fecha 2 + 10 días: ";
    fecha2.mostrarFecha();

    // Restando 5 días a la fecha 1 y mostrando
    fecha1 = fecha1 - 5;
   cout << "Fecha 1 - 5 días: ";
    fecha1.mostrarFecha();

    return 0;
}
