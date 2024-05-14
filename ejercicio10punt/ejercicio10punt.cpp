/*Se pide crear un programa que haciendo uso de la reserva dinámica de memoria
almacene un número determinado de valores (n) obtenidos de forma aleatoria,
entre 0 y 100 y los ordene de mayor a menor*/
#include <iostream>
using namespace std;

int generarNumeroAleatorio() {
    return rand() % 101; 
}


void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void ordenarVector(int* vector, int tam) {
    for (int i = 0; i < tam - 1; ++i) {
        for (int j = 0; j < tam - i - 1; ++j) {
            if (vector[j] < vector[j + 1]) {
                swap(vector[j], vector[j + 1]);
            }
        }
    }
}

int main() {
    int n;
   cout << "Ingrese el número de valores a almacenar: ";
   cin >> n;

    
    int* vector = new int[n];

 
    srand(time(nullptr));

  
    for (int i = 0; i < n; ++i) {
        vector[i] = generarNumeroAleatorio();
    }

 
    ordenarVector(vector, n);

   
  cout << "Vector ordenado de mayor a menor: ";
    for (int i = 0; i < n; ++i) {
       cout << vector[i] << " ";
    }
    cout << endl;

   
    delete[] vector;

    return 0;
}

