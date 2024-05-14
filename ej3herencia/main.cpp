#include <iostream>

using namespace std;

class Producto {
protected:
    string nombre;
    double precio;

public:
    Producto(const string& _nombre, double _precio) : nombre(_nombre), precio(_precio) {}

    virtual void mostrar() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
    }

    virtual double calcularMonto(int cantidad) const {
        return precio * cantidad;
    }
};

class Perecedero : public Producto {
private:
    int diasCaducar;

public:
    Perecedero(const string& _nombre, double _precio, int _diasCaducar) : Producto(_nombre, _precio), diasCaducar(_diasCaducar) {}

    void mostrar() const override {
        Producto::mostrar();
        cout << "Días a caducar: " << diasCaducar << endl;
    }

    double calcularMonto(int cantidad) const override {
        if (diasCaducar == 1)
            return precio * cantidad / 4;
        else if (diasCaducar == 2)
            return precio * cantidad / 3;
        else if (diasCaducar == 3)
            return precio * cantidad / 2;
        else
            return precio * cantidad;
    }
};

class NoPerecedero : public Producto {
private:
    string tipo;

public:
    NoPerecedero(const string& _nombre, double _precio, const string& _tipo) : Producto(_nombre, _precio), tipo(_tipo) {}

    void mostrar() const override {
        Producto::mostrar();
        cout << "Tipo: " << tipo << endl;
    }
};

int main() {
    Producto* productos[3];

    productos[0] = new Perecedero("Leche", 10.5, 1);
    productos[1] = new NoPerecedero("Arroz", 5.75, "Granos");
    productos[2] = new Perecedero("Yogur", 8.0, 3);

    for (int i = 0; i < 3; ++i) {
        cout << "Producto " << i + 1 << ":" << endl;
        productos[i]->mostrar();
        cout << "Monto para 5 unidades: $" << productos[i]->calcularMonto(5) << endl;
        delete productos[i];
        cout << endl;
    }

    return 0;
}
