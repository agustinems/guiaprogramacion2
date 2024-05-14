// FiguraGeometrica.h
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class Punto;

class FiguraGeometrica {
public:
    virtual double calcularPerimetro() const = 0;
    virtual double calcularArea() const = 0;
    virtual double calcularRazonSuperficiePerimetro() const = 0;
};

class Punto : public FiguraGeometrica {
private:
    double x, y;

public:
    Punto(double _x, double _y);
    double getX() const;
    double getY() const;
    double calcularPerimetro() const override;
    double calcularArea() const override;
    double calcularRazonSuperficiePerimetro() const override;
};

class Circulo : public FiguraGeometrica {
private:
    double radio;
    Punto centro;
    static constexpr double PI = 3.14159265358979323846; // Aproximación de pi

public:
    Circulo(double _radio, const Punto& _centro);
    double getRadio() const;
    const Punto& getCentro() const;
    double calcularPerimetro() const override;
    double calcularArea() const override;
    double calcularRazonSuperficiePerimetro() const override;
};

class PoligonoRegular : public FiguraGeometrica {
private:
    int numLados;
    double lado;
    Punto centro;

public:
    PoligonoRegular(int _numLados, double _lado, const Punto& _centro);
    int getNumLados() const;
    double getLado() const;
    const Punto& getCentro() const;
    double calcularPerimetro() const override;
    double calcularArea() const override;
    double calcularRazonSuperficiePerimetro() const override;
};

#endif // FIGURAGEOMETRICA_H



