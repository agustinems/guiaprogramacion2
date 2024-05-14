#include <iostream>
using namespace std;
#include "Empleado.h"

#ifndef EJ2HERENCIA_COMERCIAL_H
#define EJ2HERENCIA_COMERCIAL_H

class Comercial : public Empleado {
private:
    double comision;

public:
    Comercial(const char *_nombre, int _edad, double _salario, double _comision);

    void mostrar() const override;

    void cargar() override;

    void plus() override;

    const char *toString() const override;

};

#endif //EJ2HERENCIA_COMERCIAL_H
