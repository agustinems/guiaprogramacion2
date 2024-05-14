//
// Created by AGUST on 2/5/2024.
//

#ifndef EJERCICIO2POO_RACIONALES_H
#define EJERCICIO2POO_RACIONALES_H


class Racional {
private:
    int numerador;
    int denominador;
    int abs(int n);
    int mcd(int a, int b);
    void simplificar();

public:
    Racional();
    Racional(int n, int d);
    void cargar();
    void mostrar() const;
    Racional operator+(const Racional& otro) const;
    Racional operator-(const Racional& otro) const;
    Racional& operator++();
    Racional operator++(int);
    Racional& operator--();
    Racional operator--(int);
    Racional& operator+=(int entero);
    Racional& operator-=(int entero);
};




#endif //EJERCICIO2POO_RACIONALES_H
