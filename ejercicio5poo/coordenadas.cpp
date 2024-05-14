#include <iostream>
#include "coordenadas.h"
#define EJERCICIO4POO_CRONOMETRO_H

double Punto::raizCuadrada(double n) const {
    double x = n / 2;
    double y = 0;
    const double epsilon = 0.0000001;
    while (x - y > epsilon) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

double Punto::arctan(double y, double x) const {
    double arctan = 0;
    double absy = y >= 0 ? y : -y;
    double absx = x >= 0 ? x : -x;
    if (absx > absy) {
        double temp = absy / absx;
        arctan = temp + (temp * temp * temp) / 3 + (temp * temp * temp * temp * temp) / 5;
        if (x < 0) {
            arctan = 3.14159265358979323846 - arctan; // pi
        }
    } else {
        double temp = absx / absy;
        arctan = 1.57079632679489661923 - temp + (temp * temp * temp) / 3 - (temp * temp * temp * temp * temp) / 5; // pi/2
        if (y < 0) {
            arctan = -arctan;
        }
    }
    return arctan;
}

Punto::Punto() : x(0.0), y(0.0) {}

Punto::Punto(double x, double y) : x(x), y(y) {}

void Punto::cargar() {
    std::cout << "Ingrese la coordenada x: ";
    std::cin >> x;
    std::cout << "Ingrese la coordenada y: ";
    std::cin >> y;
}

void Punto::mostrar() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Punto Punto::operator+(const Punto& otro) const {
    double nx = x + otro.x;
    double ny = y + otro.y;
    return Punto(nx, ny);
}

Punto Punto::operator+(int valor) const {
    double nx = x + valor;
    double ny = y + valor;
    return Punto(nx, ny);
}

Punto Punto::operator-(const Punto& otro) const {
    double nx = x - otro.x;
    double ny = y - otro.y;
    return Punto(nx, ny);
}

Punto Punto::operator-(int valor) const {
    double nx = x - valor;
    double ny = y - valor;
    return Punto(nx, ny);
}

Punto& Punto::operator++() {
    ++x;
    ++y;
    return *this;
}

Punto Punto::operator++(int) {
    Punto temp = *this;
    ++(*this);
    return temp;
}

Punto& Punto::operator--() {
    --x;
    --y;
    return *this;
}

Punto Punto::operator--(int) {
    Punto temp = *this;
    --(*this);
    return temp;
}

double Punto::distanciaOrigen() const {
    return raizCuadrada(x * x + y * y);
}

double Punto::anguloOrigen() const {
    return arctan(y, x);
}