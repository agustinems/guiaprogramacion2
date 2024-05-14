

#define EJERCICIO4POO_CRONOMETRO_H




class Cronometro {
private:
    int horas;
    int minutos;
    int segundos;

public:
    Cronometro();
    void cargar();
    void mostrar() const;
    void reset();
    Cronometro& operator++();

    // Si quieres permitir la asignación de valores manualmente
    void setHoras(int h);
    void setMinutos(int m);
    void setSegundos(int s);
};




//EJERCICIO4POO_CRONOMETRO_H
