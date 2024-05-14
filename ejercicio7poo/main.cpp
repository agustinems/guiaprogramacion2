/*Obtener una clase que represente una cuenta bancaria. Para la misma se tiene
como información:
 Número de cuenta.
 Saldo.
 Tasa de interés
Definir los datos miembro de la clase.
Obtener los métodos para:
 Crear una cuenta nueva (constructor) a partir de la asignación del número
de cuenta y una tasa de interés. Toda nueva cuenta se crea con saldo 0.
 Carga y visualización de los datos miembro.
 Realizar un depósito.
 Realizar una extracción.
 Acreditar intereses.
Considerar que algunas operaciones requieren comprobación antes de ser
realizadas
Definir un programa principal que gestione dos cuentas distintas.*/

#include <iostream>
#include "cuenta_bancaria.h"

using namespace std;

int main() {
    cuenta_bancaria cuenta1, cuenta2;

    cout << "Cuenta 1" << endl;
    cuenta1.cargarDatos();

    cout << "Cuenta 2" << endl;
    cuenta2.cargarDatos();


    int opcion, numCuenta;
    double monto, interes;
    do {
        cout << "Menú de operaciones:" << endl;
        cout << "1. Realizar depósito" << endl;
        cout << "2. Realizar extracción" << endl;
        cout << "3. Acreditar intereses" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el número de cuenta: ";
                cin >> numCuenta;
                if (numCuenta == cuenta1.getNumeroCuenta()) {
                    cout << "Ingrese el monto a depositar: ";
                    cin >> monto;
                    cuenta1.realizarDeposito(monto);
                } else if (numCuenta == cuenta2.getNumeroCuenta()) {
                    cout << "Ingrese el monto a depositar: ";
                    cin >> monto;
                    cuenta2.realizarDeposito(monto);
                } else {
                    cout << "Número de cuenta inválido." << endl;
                }
                break;
            case 2:
                cout << "Ingrese el número de cuenta: ";
                cin >> numCuenta;
                if (numCuenta == cuenta1.getNumeroCuenta()) {
                    cout << "Ingrese el monto a extraer: ";
                    cin >> monto;
                    cuenta1.realizarExtraccion(monto);
                } else if (numCuenta == cuenta2.getNumeroCuenta()) {
                    cout << "Ingrese el monto a extraer: ";
                    cin >> monto;
                    cuenta2.realizarExtraccion(monto);
                } else {
                    cout << "Número de cuenta inválido." << endl;
                }
                break;
            case 3:
                cout << "Ingrese el número de cuenta: ";
                cin >> numCuenta;
                if (numCuenta == cuenta1.getNumeroCuenta()) {
                    cuenta1.acreditarIntereses(interes);
                } else if (numCuenta == cuenta2.getNumeroCuenta()) {
                    cuenta2.acreditarIntereses(interes);
                } else {
                    cout << "Número de cuenta inválido." << endl;
                }
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 4);

    return 0;
}