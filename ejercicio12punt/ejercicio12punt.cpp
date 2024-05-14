/*Obtener un programa que permita reservar memoria dinámica para un arreglo
bidimensional de datos reales realizando los siguientes pasos:
a. Crear un puntero a punteros del tipo de datos correspondiente.
b. Reservar memoria para el arreglo de filas.
c. Hacer un bucle para reservar memoria para las columnas de cada fila:
d. Ingresar los datos y mostrar su contenido usando índices y el operador de
indexación [].
e. Liberar la memoria asignada.*/

#include <iostream>
using namespace std;
int main() {
    int filas, columnas;

    double** matriz;

   
   cout << "Ingrese el número de filas: ";
  cin >> filas;
  cout << "Ingrese el número de columnas: ";
    cin >> columnas;

  
    matriz = new double* [filas];

   
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new double[columnas];
    }

   
   cout << "Ingrese los datos:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
           cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
           cin >> matriz[i][j];
        }
    }

   
    cout << "Contenido de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
           cout << matriz[i][j] << " ";
        }
       cout << endl;
    }


    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}

