#include <iostream>
#include "Empleado.h"
#include "Comercial.h"
#include "Repartidor.h"


int main() {
    Empleado* empleados[3];

    empleados[0] = new Comercial("Juan", 35, 25000, 3000);
    empleados[1] = new Repartidor("Ana", 22, 20000, 3);
    empleados[2] = new Comercial("Pedro", 28, 22000, 1500);

    for (int i = 0; i < 3; ++i) {
        std::cout << "\nEmpleado " << i + 1 << ":\n";
        empleados[i]->mostrar();
        empleados[i]->plus();
        std::cout << "Después del plus:\n";
        empleados[i]->mostrar();
        delete empleados[i];
    }

    return 0;
}
