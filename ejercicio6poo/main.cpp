#include "contraseña.h"
#include <iostream>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud deseada para la contraseña: ";
    cin >> longitud;
    cin.ignore(); // Limpiar el búfer de entrada

    Password pass(longitud);
    pass.cargarContrasena();
    pass.mostrarPassword();
    cout << "¿Es fuerte? " << (pass.esFuerte() ? "Sí" : "No") << endl;

    return 0;
}