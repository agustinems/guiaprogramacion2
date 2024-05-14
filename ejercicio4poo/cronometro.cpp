
#include <iostream>
#include "cronometro.h"
using namespace std;
Cronometro::Cronometro() : horas(0), minutos(0), segundos(0) {}

void Cronometro::cargar() {
    cout << "Ingrese las horas: ";
   cin >> horas;
   cout << "Ingrese los minutos: ";
   cin >> minutos;
   cout << "Ingrese los segundos: ";
   cin >> segundos;


    minutos %= 60;
    segundos %= 60;
}

void Cronometro::mostrar() const {
   cout << horas << ":" << minutos << ":" << segundos << endl;
}

void Cronometro::reset() {
    horas = 0;
    minutos = 0;
    segundos = 0;
}

Cronometro& Cronometro::operator++() {
    ++segundos;
    if (segundos == 60) {
        segundos = 0;
        ++minutos;
        if (minutos == 60) {
            minutos = 0;
            ++horas;
        }
    }
    return *this;
}


void Cronometro::setHoras(int h) {
    horas = h;
}

void Cronometro::setMinutos(int m) {
    minutos = m % 60;
}

void Cronometro::setSegundos(int s) {
    segundos = s % 60;
}
