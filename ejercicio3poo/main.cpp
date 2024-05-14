#include <iostream>
#include "numcomplejo.h"

using namespace std;

int main() {
    Complejo c1(2.0, 3.0), c2(1.0, -2.0), c3;

    cout << "c1 = "; c1.mostrar();
   cout << "c2 = "; c2.mostrar();

   cout << "Ingrese un nuevo complejo: ";
    c3.cargar();
    cout << "El complejo ingresado es: "; c3.mostrar();

    Complejo c4 = c1 + c2;
   cout << "c1 + c2 = "; c4.mostrar();

    c4 = c1 - c2;
    cout << "c1 - c2 = "; c4.mostrar();

    c4 = c1 * c2;
   cout << "c1 * c2 = "; c4.mostrar();

    c4 = c1.conjugado();
    cout << "Conjugado de c1 = "; c4.mostrar();

    return 0;
}