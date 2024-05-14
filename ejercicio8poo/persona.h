#include <iostream>
#include <string>
#ifndef EJERCICIO8POO_PERSONA_H
#define EJERCICIO8POO_PERSONA_H


using namespace std;


class Persona {
private:
    string nombre;
    string fechaNacimiento;
    string dni;
    char sexo;
    float peso;
    float altura;
    int edad;

public:

    Persona();


    void cargarDatos();


    void mostrarDatos();


    float calcularIMC();


    int calcularEdad(string fechaNacimientoPersona);


    bool esMayorDeEdad();
};



#endif
