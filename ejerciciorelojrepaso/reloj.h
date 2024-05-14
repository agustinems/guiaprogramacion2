#include <iostream>
#ifndef EJERCICIORELOJREPASO_RELOJ_H
#define EJERCICIORELOJREPASO_RELOJ_H


class Reloj {
private:
    int hora;
    int minuto;
    int segundo;
    int alarma_hora;
    int alarma_minuto;
    int alarma_segundo;
public:
    Reloj();

    void setHora(int h, int m, int s);

    void setAlarma(int h, int m, int s) ;

    void mostrarHora();

    void mostrarAlarma();

    bool verificarAlarma() ;
    void incrementarSegundo() ;
};

#endif //EJERCICIORELOJREPASO_RELOJ_H
