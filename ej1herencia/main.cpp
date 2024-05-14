#include <iostream>
#include "FiguraGeometrica.h"



int main() {
    Punto punto(3, 4);
    std::cout << "Punto:" << std::endl;
    std::cout << "Coordenadas: (" << punto.getX() << ", " << punto.getY() << ")" << std::endl;

    Circulo circulo(5, Punto(0, 0));
    std::cout << "\nCírculo:" << std::endl;
    std::cout << "Radio: " << circulo.getRadio() << std::endl;
    std::cout << "Centro: (" << circulo.getCentro().getX() << ", " << circulo.getCentro().getY() << ")" << std::endl;
    std::cout << "Perímetro: " << circulo.calcularPerimetro() << std::endl;
    std::cout << "Área: " << circulo.calcularArea() << std::endl;
    std::cout << "Razón superficie/perímetro: " << circulo.calcularRazonSuperficiePerimetro() << std::endl;

    PoligonoRegular poligono(5, 4, Punto(0, 0));
    std::cout << "\nPolígono Regular:" << std::endl;
    std::cout << "Número de lados: " << poligono.getNumLados() << std::endl;
    std::cout << "Longitud de lado: " << poligono.getLado() << std::endl;
    std::cout << "Centro: (" << poligono.getCentro().getX() << ", " << poligono.getCentro().getY() << ")" << std::endl;
    std::cout << "Perímetro: " << poligono.calcularPerimetro() << std::endl;
    std::cout << "Área: " << poligono.calcularArea() << std::endl;
    std::cout << "Razón superficie/perímetro: " << poligono.calcularRazonSuperficiePerimetro() << std::endl;

    return 0;
}


