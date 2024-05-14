/*Se pide crear un programa que pida una serie de números al usuario y halle el
máximo, el mínimo y la media aritmética de ellos. Para ello se debe crear una
variable puntero tipo float, pedir al usuario que introduzca el número de datos, y
sucesivamente los datos a cargar en el arreglo. Recordar que se debe reservar
memoria de forma dinámica.*/

#include <iostream>
using namespace std;

float calcularMaximo(float* datos, int n) {
    float max = *datos;
    for (int i = 1; i < n; ++i) {
        if (*(datos + i) > max) {
            max = *(datos + i);
        }
    }
    return max;
}

float calcularMinimo(float* datos, int n) {
    float min = *datos;
    for (int i = 1; i < n; ++i) {
        if (*(datos + i) < min) {
            min = *(datos + i);
        }
    }
    return min;
}

float calcularMedia(float* datos, int n) {
    float suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += *(datos + i);
    }
    return suma / n;
}

int main() {
    int n;
   cout << "Ingrese el número de datos: ";
   cin >> n;

    
    float* datos = new float[n];

   
   cout << "Ingrese los " << n << " datos:" <<endl;
    for (int i = 0; i < n; ++i) {
        cin >> *(datos + i);
    }

 
    float maximo = calcularMaximo(datos, n);
    float minimo = calcularMinimo(datos, n);
    float media = calcularMedia(datos, n);

    
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;
    cout << "Media aritmética: " << media << endl;

   
    delete[] datos;

    return 0;
}
