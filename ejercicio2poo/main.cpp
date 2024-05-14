#include <iostream>
#include "racionales.h"
using namespace std;
int main() {
    Racional r1(1, 2), r2(3, 4), r3;

    cout << "r1 = "; r1.mostrar();
    cout << "r2 = "; r2.mostrar();

    r3 = r1 + r2;
    cout << "r1 + r2 = "; r3.mostrar();

    r3 = r1 - r2;
   cout << "r1 - r2 = "; r3.mostrar();

    ++r1;
   cout << "++r1 = "; r1.mostrar();

    r2--;
    cout << "r2-- = "; r2.mostrar();

    r1 += 3;
   cout << "r1 += 3 = "; r1.mostrar();

    r2 -= 2;
    cout << "r2 -= 2 = "; r2.mostrar();

   cout << "Ingrese un nuevo racional: ";
    r3.cargar();
    cout << "El racional ingresado es: "; r3.mostrar();

    return 0;
}