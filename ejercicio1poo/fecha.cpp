#include "fecha.h"
#include <iostream>

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

Fecha::Fecha() : dia(1), mes(1), anio(1900) {}

void Fecha::mostrarFecha() {
    std::cout << dia << "/" << mes << "/" << anio << std::endl;
}

Fecha& Fecha::operator++() {
    dia++;
    if (dia > diasEnMes(mes, anio)) {
        dia = 1;
        mes++;
        if (mes > 12) {
            mes = 1;
            anio++;
        }
    }
    return *this;
}

Fecha& Fecha::operator--() {
    dia--;
    if (dia < 1) {
        mes--;
        if (mes < 1) {
            mes = 12;
            anio--;
        }
        dia = diasEnMes(mes, anio);
    }
    return *this;
}

Fecha Fecha::operator+(int dias) {
    Fecha nuevaFecha(*this);
    for (int i = 0; i < dias; ++i) {
        ++nuevaFecha;
    }
    return nuevaFecha;
}

Fecha Fecha::operator-(int dias) {
    Fecha nuevaFecha(*this);
    for (int i = 0; i < dias; ++i) {
        --nuevaFecha;
    }
    return nuevaFecha;
}

int Fecha::diasEnMes(int mes, int anio) {
    if (mes == 2) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
            return 29;
        else
            return 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

