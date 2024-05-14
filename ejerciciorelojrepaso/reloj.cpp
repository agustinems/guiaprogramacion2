#include <iostream>
#include "reloj.h"
using namespace std;

Reloj :: Reloj() : hora(0), minuto(0), segundo(0), alarma_hora(-1), alarma_minuto(-1), alarma_segundo(-1) {}

void Reloj :: setHora(int h, int m, int s) {
    if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
        hora = h;
        minuto = m;
        segundo = s;
    } else {
       cout << "Hora inválida." << endl;
    }
}
void Reloj :: setAlarma(int h, int m, int s) {
    if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
        alarma_hora = h;
        alarma_minuto = m;
        alarma_segundo = s;
    } else {
       cout << "Hora de alarma inválida." << endl;
    }
}

void Reloj :: mostrarHora() {
    cout << (hora < 10 ? "0" : "") << hora << ":" << (minuto < 10 ? "0" : "") << minuto << ":" << (segundo < 10 ? "0" : "") << segundo;
}
void Reloj :: mostrarAlarma() {
    cout << (alarma_hora < 10 ? "0" : "") << alarma_hora << ":" << (alarma_minuto < 10 ? "0" : "") << alarma_minuto << ":" << (alarma_segundo < 10 ? "0" : "") << alarma_segundo;
}

bool Reloj :: verificarAlarma() {
    return hora == alarma_hora && minuto == alarma_minuto && segundo == alarma_segundo;
}

void Reloj :: incrementarSegundo() {
    segundo++;
    if (segundo == 60) {
        segundo = 0;
        minuto++;
        if (minuto == 60) {
            minuto = 0;
            hora++;
            if (hora == 24)
                hora = 0;
        }
    }
}
