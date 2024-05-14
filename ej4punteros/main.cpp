#include <iostream>
using namespace std;

int factorial(int n) {

    if (n == 0) {
        return 1;
    }
    else {

        return n * factorial(n-1);
    }
}

int main() {
    int numero;
    int resultado;
   cout << "Introduce un numero para calcular su factorial: ";
    cin >> numero;

    if (numero < 0) {
       cout << "El factorial de un número negativo no está definido." << endl;
    } else {
         resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }

    return 0;
}
