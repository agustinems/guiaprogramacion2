#include <iostream>
#include "Empleado.h"

using namespace std;

Empleado :: Empleado(const char* _nombre, int _edad, double _salario) : edad(_edad), salario(_salario) {
    int i = 0;
    while (_nombre[i] != '\0' && i < 49) {
        nombre[i] = _nombre[i];
        i++;
    }
    nombre[i] = '\0'; // Asegurarse de que la cadena finalice correctamente
}

 void Empleado :: mostrar() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << " años" << std::endl;
    std::cout << "Salario: $" << salario << std::endl;
}

 void Empleado ::  cargar() {
    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << "Edad: ";
    std::cin >> edad;
    std::cout << "Salario: ";
    std::cin >> salario;
}

 const char* Empleado :: toString() const {
    static char buffer[200];
    sprintf(buffer, "%s, %d años, Salario: $%.2f", nombre, edad, salario);
    return buffer;
}
