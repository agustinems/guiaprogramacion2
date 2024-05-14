

#define EJERCICIO5POO_COORDENADAS_H







class Punto {
private:
    double x, y;
    double raizCuadrada(double n) const;
    double arctan(double y, double x) const;

public:
    Punto();
    Punto(double x, double y);
    void cargar();
    void mostrar() const;
    Punto operator+(const Punto& otro) const;
    Punto operator+(int valor) const;
    Punto operator-(const Punto& otro) const;
    Punto operator-(int valor) const;
    Punto& operator++();
    Punto operator++(int);
    Punto& operator--();
    Punto operator--(int);
    double distanciaOrigen() const;
    double anguloOrigen() const;
};




//EJERCICIO5POO_COORDENADAS_H
