#include <iostream>
using namespace std;
#ifndef EJERCICIO7POO_CUENTA_BANCARIA_H
#define EJERCICIO7POO_CUENTA_BANCARIA_H

class cuenta_bancaria {
private:
    int numeroCuenta;
    double saldo;
    double tasaInteres;

public:
    // Constructor
    cuenta_bancaria();

    // Carga y visualización de datos
    void cargarDatos();


    // Realizar depósito
    void realizarDeposito(double monto);

    // Realizar extracción
    void realizarExtraccion(double monto);

    // Acreditar intereses
    void acreditarIntereses(double interes);

    int getNumeroCuenta();
};

#endif //EJERCICIO7POO_CUENTA_BANCARIA_H
