//
// Created by Agustin on 2/5/2024.
//

#ifndef EJERCICIO2POO_RACIONAL_H
#define EJERCICIO2POO_RACIONAL_H

#ifndef RACIONAL_H
#define RACIONAL_H

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

#endif


#endif //EJERCICIO2POO_RACIONAL_H
