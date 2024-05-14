#include <iostream>

class Empleado {
protected:
    char nombre[50];
    int edad;
    double salario;

public:
    Empleado(const char* _nombre, int _edad, double _salario) : edad(_edad), salario(_salario) {
        int i = 0;
        while (_nombre[i] != '\0' && i < 49) {
            nombre[i] = _nombre[i];
            i++;
        }
        nombre[i] = '\0'; // Asegurarse de que la cadena finalice correctamente
    }

    virtual void mostrar() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Salario: $" << salario << std::endl;
    }

    virtual void cargar() {
        std::cout << "Nombre: ";
        std::cin >> nombre;
        std::cout << "Edad: ";
        std::cin >> edad;
        std::cout << "Salario: ";
        std::cin >> salario;
    }

    virtual void plus() = 0;

    virtual const char* toString() const {
        static char buffer[200];
        sprintf(buffer, "%s, %d años, Salario: $%.2f", nombre, edad, salario);
        return buffer;
    }
};

class Comercial : public Empleado {
private:
    double comision;

public:
    Comercial(const char* _nombre, int _edad, double _salario, double _comision) : Empleado(_nombre, _edad, _salario), comision(_comision) {}

    void mostrar() const override {
        Empleado::mostrar();
        std::cout << "Comisión: $" << comision << std::endl;
    }

    void cargar() override {
        Empleado::cargar();
        std::cout << "Comisión: ";
        std::cin >> comision;
    }

    void plus() override {
        if (edad > 30 && comision > 0.12 * salario)
            salario += 3000;
    }

    const char* toString() const override {
        static char buffer[200];
        sprintf(buffer, "%s, %d años, Salario: $%.2f, Comisión: $%.2f", nombre, edad, salario, comision);
        return buffer;
    }
};

class Repartidor : public Empleado {
private:
    int zona;

public:
    Repartidor(const char* _nombre, int _edad, double _salario, int _zona) : Empleado(_nombre, _edad, _salario), zona(_zona) {}

    void mostrar() const override {
        Empleado::mostrar();
        std::cout << "Zona: " << zona << std::endl;
    }

    void cargar() override {
        Empleado::cargar();
        std::cout << "Zona: ";
        std::cin >> zona;
    }

    void plus() override {
        if (edad < 25 && zona == 3)
            salario += 3000;
    }

    const char* toString() const override {
        static char buffer[200];
        sprintf(buffer, "%s, %d años, Salario: $%.2f, Zona: %d", nombre, edad, salario, zona);
        return buffer;
    }
};

int main() {
    Empleado* empleados[3];

    empleados[0] = new Comercial("Juan", 35, 25000, 3000);
    empleados[1] = new Repartidor("Ana", 22, 20000, 3);
    empleados[2] = new Comercial("Pedro", 28, 22000, 1500);

    for (int i = 0; i < 3; ++i) {
        std::cout << "\nEmpleado " << i + 1 << ":\n";
        empleados[i]->mostrar();
        empleados[i]->plus();
        std::cout << "Después del plus:\n";
        empleados[i]->mostrar();
        delete empleados[i];
    }

    return 0;
}
