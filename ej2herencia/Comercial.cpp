#include <iostream>
using namespace std;
#include "Comercial.h"
#include "Empleado.h"

double comision;

Comercial :: Comercial(const char* _nombre, int _edad, double _salario, double _comision) : Empleado(_nombre, _edad, _salario), comision(_comision) {}

void Empleado :: mostrar() const  {
Empleado::mostrar();
std::cout << "Comisión: $" << comision << std::endl;
}

void Empleado :: cargar()  {
Empleado::cargar();
std::cout << "Comisión: ";
std::cin >> comision;
}

void Empleado :: plus() {
if (edad > 30 && comision > 0.12 * salario)
salario += 3000;
}

const char* Empleado :: toString() const {
static char buffer[200];
sprintf(buffer, "%s, %d años, Salario: $%.2f, Comisión: $%.2f", nombre, edad, salario, comision);
return buffer;
}