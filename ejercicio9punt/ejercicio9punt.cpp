/*Definir un arreglo unidimensional de N componentes enteras de modo que la
gestión de memoria sea dinámica utilizando new. Ingresar los datos en el vector.
Mostrar el contenido del vector en dos modos: usando notación vectorial y luego
usando aritmética de punteros.*/
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Ingrese la cantidad de elementos del vector: ";
   cin >> N;

  
    int* vector = new int[N];

    
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < N; ++i) {
       cin >> vector[i];
    }

   
   cout << "Contenido del vector usando notación vectorial:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << vector[i] << " ";
    }
  cout << endl;

   
   cout << "Contenido del vector usando aritmética de punteros:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << *(vector + i) << " ";
    }
   cout << endl;

  
    delete[] vector;

    return 0;
}
