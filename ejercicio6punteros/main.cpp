
#include <iostream>
using namespace std;
int main() {
    int x[5];
    int *a;
    int *b;
    cout  << "ingrese la primera posicion del arreglo" <<endl;
    cin >> x[0];
    a = &x[0];
    cout  << "ingrese la ultima posicion del arreglo" <<endl;
    cin >> x[4];
    b= &x[4];
    int diferencia;
    diferencia = *b - *a;
    cout << diferencia << endl;

    for (int i=0; i <5; i++){
        a = &x[i];
        cout << a << endl;
    }
    return 0;
}
