#include "cuenta_bancaria.h"
#include <iostream>
using namespace std;

cuenta_bancaria::cuenta_bancaria() {
    numeroCuenta = 0;
    saldo = 0;
    tasaInteres = 0;
}

void cuenta_bancaria:: cargarDatos() {
    cout << "Ingrese el número de cuenta: ";
    cin >> numeroCuenta;
    cout << "Ingrese la tasa de interés: ";
    cin >> tasaInteres;

}


void cuenta_bancaria :: realizarDeposito(double monto) {
    saldo += monto;
    cout << "Depósito exitoso. Nuevo saldo: $" << saldo << endl;
}
void cuenta_bancaria :: realizarExtraccion(double monto) {
    if (monto > saldo) {
        cout << "Saldo insuficiente para realizar la extracción." << endl;
    } else {
        saldo -= monto;
        cout << "Extracción exitosa. Nuevo saldo: $" << saldo << endl;
    }
}
void cuenta_bancaria :: acreditarIntereses(double interes) {
    interes = saldo * tasaInteres / 100;
    saldo += interes;
    cout << "Intereses acreditados. Nuevo saldo: $" << saldo << endl;
}
int cuenta_bancaria:: getNumeroCuenta() {
    return numeroCuenta;
}