#include <iostream>
#include "persona.h"

Persona :: Persona() {
    nombre = "";
    fechaNacimiento = "";
    dni = "";
    sexo = ' ';
    peso = 0.0;
    altura = 0.0;
    edad = 0; // Inicializar edad en 0
}
void Persona :: cargarDatos() {
    cout << "\nIngrese sus datos:" << endl;

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Fecha de nacimiento (YYYY-MM-DD): ";
    getline(cin, fechaNacimiento);

    cout << "Sexo (H/M): ";
    cin >> sexo;
    cin.ignore(); // Ignorar el salto de línea

    cout << "DNI: ";
    getline(cin, dni);

    cout << "Peso (kg): ";
    cin >> peso;

    cout << "Altura (m): ";
    cin >> altura;

    edad = calcularEdad(fechaNacimiento); // Calcular edad al cargar los datos
}

void Persona :: mostrarDatos() {
    cout << "\nSus datos son:" << endl;

    cout << "Nombre: " << nombre << endl;
    cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "DNI: " << dni << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "IMC: " << calcularIMC() << endl;
    cout << "¿Es mayor de edad? " << (esMayorDeEdad() ? "Sí" : "No") << endl;
}
float Persona :: calcularIMC() {
    if (altura == 0.0) {
        return 0.0;
    }
    return peso / (altura * altura);
}
int Persona ::  calcularEdad(string fechaNacimientoPersona) {

    cout << "Ingrese su edad: ";
    int edadUsuario;
    cin >> edadUsuario;
    return edadUsuario;
}
bool Persona :: esMayorDeEdad() {
    return edad >= 18;
}
