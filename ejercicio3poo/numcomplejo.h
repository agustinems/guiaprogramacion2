//
// Created by AGUST on 2/5/2024.
//

#ifndef EJERCICIO3POO_NUMCOMPLEJO_H
#define EJERCICIO3POO_NUMCOMPLEJO_H




class Complejo {
private:
    double real;
    double imag;

public:
    Complejo();
    Complejo(double r, double i);
    void cargar();
    void mostrar() const;
    Complejo operator+(const Complejo& otro) const;
    Complejo operator-(const Complejo& otro) const;
    Complejo operator*(const Complejo& otro) const;
    Complejo conjugado() const;
};



#endif //EJERCICIO3POO_NUMCOMPLEJO_H
