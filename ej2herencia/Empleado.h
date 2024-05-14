#include <iostream>
using namespace std;
#ifndef EJ2HERENCIA_EMPLEADO_H
#define EJ2HERENCIA_EMPLEADO_H

class Empleado {
protected:
    char nombre[50];
    int edad;
    double salario;

public:
    Empleado(const char* _nombre, int _edad, double _salario);

    virtual void mostrar() const;

    virtual void cargar();

    virtual void plus() = 0;

    virtual const char* toString() const ;
};



#endif //EJ2HERENCIA_EMPLEADO_H
