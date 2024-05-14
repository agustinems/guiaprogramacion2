#include <iostream>
#include "temperatura.h"
#include "reloj.h"
using namespace std;


int main() {
    Reloj reloj;
    Temperatura temp;

    int h, m, s;
    double t;

   cout << "Ingrese la hora actual (HH MM SS): ";
    cin >> h >> m >> s;
    reloj.setHora(h, m, s);

   cout << "Ingrese la hora de la alarma (HH MM SS): ";
    cin >> h >> m >> s;
    reloj.setAlarma(h, m, s);

   cout << "Ingrese la temperatura actual (en grados Celsius): ";
    cin >> t;
    temp.setTemperatura(t);

   cout << "\n--- Reloj ---" << endl;
    reloj.mostrarHora();
    cout << endl;
  cout << "\n--- Alarma ---" << endl;
    reloj.mostrarAlarma();
    cout << "\n--- Temperatura ---" << endl;
    temp.mostrarTemperatura();

    while (!reloj.verificarAlarma()) {
        cout << "\n--- Reloj ---" <<endl;
        reloj.mostrarHora();
        cout << " ";
        temp.mostrarTemperatura();
        reloj.incrementarSegundo();
    }
    for (int i = 0; i < 20; i++) {
        cout << "La alarma ha sonado" << endl;
    }

    return 0;
}
