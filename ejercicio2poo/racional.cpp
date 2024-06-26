#include <iostream>
#include "racional.h"

int Racional::abs(int n) {
    return n >= 0 ? n : -n;
}

int Racional::mcd(int a, int b) {
    return b == 0 ? a : mcd(b, a % b);
}

void Racional::simplificar() {
    int divisor = mcd(abs(numerador), abs(denominador));
    numerador /= divisor;
    denominador /= divisor;
    if (denominador < 0) {
        numerador = -numerador;
        denominador = -denominador;
    }
}

Racional::Racional() : numerador(0), denominador(1) {}

Racional::Racional(int n, int d) : numerador(n), denominador(d) {
    simplificar();
}

void Racional::cargar() {
    std::cout << "Ingrese el numerador: ";
    std::cin >> numerador;
    do {
        std::cout << "Ingrese el denominador (distinto de cero): ";
        std::cin >> denominador;
    } while (denominador == 0);
    simplificar();
}

void Racional::mostrar() const {
    std::cout << numerador << "/" << denominador << std::endl;
}

Racional Racional::operator+(const Racional& otro) const {
    int num = numerador * otro.denominador + otro.numerador * denominador;
    int den = denominador * otro.denominador;
    return Racional(num, den);
}

Racional Racional::operator-(const Racional& otro) const {
    int num = numerador * otro.denominador - otro.numerador * denominador;
    int den = denominador * otro.denominador;
    return Racional(num, den);
}

Racional& Racional::operator++() {
    numerador += denominador;
    simplificar();
    return *this;
}

Racional Racional::operator++(int) {
    Racional temp = *this;
    ++(*this);
    return temp;
}

Racional& Racional::operator--() {
    numerador -= denominador;
    simplificar();
    return *this;
}

Racional Racional::operator--(int) {
    Racional temp = *this;
    --(*this);
    return temp;
}

Racional& Racional::operator+=(int entero) {
    numerador += entero * denominador;
    simplificar();
    return *this;
}

Racional& Racional::operator-=(int entero) {
    numerador -= entero * denominador;
    simplificar();
    return *this;
}
