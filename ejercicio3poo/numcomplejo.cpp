#include <iostream>
#include "numcomplejo.h"

using namespace std;


Complejo::Complejo() : real(0.0), imag(0.0) {}

Complejo::Complejo(double r, double i) : real(r), imag(i) {}

void Complejo::cargar() {
   cout << "Ingrese la parte real: ";
    cin >> real;
   cout << "Ingrese la parte imaginaria: ";
   cin >> imag;
}

void Complejo::mostrar() const {
   cout << real << (imag >= 0 ? " + " : " - ") << std::abs(imag) << "i" <<endl;
}

Complejo Complejo::operator+(const Complejo& otro) const {
    double r = real + otro.real;
    double i = imag + otro.imag;
    return Complejo(r, i);
}

Complejo Complejo::operator-(const Complejo& otro) const {
    double r = real - otro.real;
    double i = imag - otro.imag;
    return Complejo(r, i);
}

Complejo Complejo::operator*(const Complejo& otro) const {
    double r = real * otro.real - imag * otro.imag;
    double i = real * otro.imag + imag * otro.real;
    return Complejo(r, i);
}

Complejo Complejo::conjugado() const {
    return Complejo(real, -imag);
}
