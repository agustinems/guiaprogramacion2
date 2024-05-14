#include <iostream>
#include "temperatura.h"
using namespace std;

Temperatura :: Temperatura() : temperatura(0) {}

void Temperatura :: setTemperatura(double temp) {
    temperatura = temp;
}

void Temperatura:: mostrarTemperatura() {
   cout << "Temperatura: " << temperatura << " C°" << endl;
   cout << "Temperatura en Kelvin: " << temperatura + 273.15 << " K" << endl;
    cout << "Temperatura en Fahrenheit: " << (temperatura * 9/5) + 32 << " F°" << endl;
}

