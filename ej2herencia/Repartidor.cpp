#include <iostream>
using namespace std;
#include "Repartidor.h"
#include "Empleado.h"
#include "Comercial.h"

int edad, zona ;
double salario;

Repartidor :: Repartidor(const char* _nombre, int _edad, double _salario, int _zona) : Empleado(_nombre, _edad, _salario), zona(_zona) {}

void Repartidor :: mostrar() const{
Empleado::mostrar();
std::cout << "Zona: " << zona << std::endl;
}

void Repartidor :: cargar()  {
Empleado::cargar();
std::cout << "Zona: ";
std::cin >> zona;
}

void plus()  {
if (edad < 25 && zona == 3)
salario += 3000;
}

const char* Repartidor ::  toString() const  {
static char buffer[200];
sprintf(buffer, "%s, %d años, Salario: $%.2f, Zona: %d", nombre, edad, salario, zona);
return buffer;
}




