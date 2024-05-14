#include "contraseña.h"
#include <iostream>
#include <string>

using namespace std;

Password::Password() {
    longitud = 8;
}

Password::Password(int longitud) {
    this->longitud = longitud;
}

void Password::cargarContrasena() {
    cout << "Ingrese una contraseña (longitud mínima: " << longitud << "): ";
    getline(cin, contrasena);

    while (contrasena.length() < longitud) {
        cout << "La contraseña debe tener una longitud mínima de " << longitud << endl;
        cout << "Ingrese una contraseña válida: ";
        getline(cin, contrasena);
    }
}

bool Password::esFuerte() {
    int mayusculas = 0, minusculas = 0, numeros = 0, caracteres_especiales = 0;

    for (char c : contrasena) {
        if (c >= 'A' && c <= 'Z') {
            mayusculas++;
        } else if (c >= 'a' && c <= 'z') {
            minusculas++;
        } else if (c >= '0' && c <= '9') {
            numeros++;
        } else if (c == '.' || c == ',' || c == ':' || c == ';' || c == '-' || c == '_') {
            caracteres_especiales++;
        }
    }

    return (mayusculas > 2 && minusculas > 1 && numeros > 5 && caracteres_especiales > 0);
}

void Password::mostrarPassword() {
    cout << "Contraseña: " << contrasena << endl;
    cout << "Longitud: " << longitud << endl;
}

void Password::cargarLongitud(int longitud) {
    this->longitud = longitud;
}