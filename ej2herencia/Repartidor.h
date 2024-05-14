#include <iostream>
using namespace std;
#include "Empleado.h"
#include "Comercial.h"
#ifndef EJ2HERENCIA_REPARTIDOR_H
#define EJ2HERENCIA_REPARTIDOR_H

class Repartidor : public Empleado {
private:
    int zona;

public:
    Repartidor(const char* _nombre, int _edad, double _salario, int _zona);

    void mostrar() const override;

    void cargar() override ;

    void plus() override;

    const char* toString() const override;
};

#endif //EJ2HERENCIA_REPARTIDOR_H
