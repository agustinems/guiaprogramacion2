// FiguraGeometrica.cpp
#include "FiguraGeometrica.h"
#include <cmath>

const double PI = 3.14159265358979323846; // Definición de PI

// Implementaciones de la clase Punto
Punto::Punto(double _x, double _y) : x(_x), y(_y) {}

double Punto::getX() const {
    return x;
}

double Punto::getY() const {
    return y;
}

double Punto::calcularPerimetro() const {
    return 0;
}

double Punto::calcularArea() const {
    return 0;
}

double Punto::calcularRazonSuperficiePerimetro() const {
    return 0;
}

// Implementaciones de la clase Circulo
Circulo::Circulo(double _radio, const Punto& _centro) : radio(_radio), centro(_centro) {}

double Circulo::getRadio() const {
    return radio;
}

const Punto& Circulo::getCentro() const {
    return centro;
}

double Circulo::calcularPerimetro() const {
    return 2 * PI * radio;
}

double Circulo::calcularArea() const {
    return PI * radio * radio;
}

double Circulo::calcularRazonSuperficiePerimetro() const {
    return calcularArea() / calcularPerimetro();
}

// Implementaciones de la clase PoligonoRegular
PoligonoRegular::PoligonoRegular(int _numLados, double _lado, const Punto& _centro) : numLados(_numLados), lado(_lado), centro(_centro) {}

int PoligonoRegular::getNumLados() const {
    return numLados;
}

double PoligonoRegular::getLado() const {
    return lado;
}

const Punto& PoligonoRegular::getCentro() const {
    return centro;
}

double PoligonoRegular::calcularPerimetro() const {
    return numLados * lado;
}

double PoligonoRegular::calcularArea() const {
    return (numLados * lado * lado) / (4 * std::tan(PI / numLados));
}

double PoligonoRegular::calcularRazonSuperficiePerimetro() const {
    return calcularArea() / calcularPerimetro();
}
