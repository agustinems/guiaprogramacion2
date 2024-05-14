//
// Created by AGUST on 1/5/2024.
//

#ifndef EJERCICIO1POO_FECHA_H
#define EJERCICIO1POO_FECHA_H


class Fecha {
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha(int d, int m, int a);
    Fecha();
    void mostrarFecha();
    Fecha& operator++();
    Fecha& operator--();
    Fecha operator+(int dias);
    Fecha operator-(int dias);

private:
    int diasEnMes(int mes, int anio);
};

#endif //EJERCICIO1POO_FECHA_H
