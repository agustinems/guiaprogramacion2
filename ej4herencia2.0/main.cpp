#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
    string nombreApellido;
    string dni;
    string estadoCivil;

public:
    Persona(const string& _nombreApellido, const string& _dni, const string& _estadoCivil)
            : nombreApellido(_nombreApellido), dni(_dni), estadoCivil(_estadoCivil) {}

    virtual void cambiarEstadoCivil(const string& nuevoEstadoCivil) {
        estadoCivil = nuevoEstadoCivil;
    }

    virtual void imprimir() const {
        cout << "Nombre y Apellido: " << nombreApellido << endl;
        cout << "DNI: " << dni << endl;
        cout << "Estado Civil: " << estadoCivil << endl;
    }

    void ingresarDatos() {
        cout << "Ingrese Nombre y Apellido: ";
        getline(cin, nombreApellido);
        cout << "Ingrese DNI: ";
        getline(cin, dni);
        cout << "Ingrese Estado Civil: ";
        getline(cin, estadoCivil);
    }
};

class Empleado : public Persona {
protected:
    int anioIncorporacion;
    int numOficina;

public:
    Empleado(const string& _nombreApellido, const string& _dni, const string& _estadoCivil, int _anioIncorporacion, int _numOficina)
            : Persona(_nombreApellido, _dni, _estadoCivil), anioIncorporacion(_anioIncorporacion), numOficina(_numOficina) {}

    void reasignarDespacho(int nuevoNumOficina) {
        numOficina = nuevoNumOficina;
    }

    void imprimir() const override {
        Persona::imprimir();
        cout << "Año de Incorporación: " << anioIncorporacion << endl;
        cout << "Número de Oficina: " << numOficina << endl;
    }

    void ingresarDatos() {
        Persona::ingresarDatos();
        cout << "Ingrese Año de Incorporación: ";
        cin >> anioIncorporacion;
        cout << "Ingrese Número de Oficina: ";
        cin >> numOficina;
        cin.ignore(); // Limpiar el buffer del teclado
    }
};

class Estudiante : public Persona {
private:
    string curso;

public:
    Estudiante(const string& _nombreApellido, const string& _dni, const string& _estadoCivil, const string& _curso)
            : Persona(_nombreApellido, _dni, _estadoCivil), curso(_curso) {}

    void matricularEnCurso(const string& nuevoCurso) {
        curso = nuevoCurso;
    }

    void imprimir() const override {
        Persona::imprimir();
        cout << "Curso: " << curso << endl;
    }

    void ingresarDatos() {
        Persona::ingresarDatos();
        cout << "Ingrese Curso: ";
        getline(cin, curso);
    }
};

class Profesor : public Empleado {
private:
    string departamento;

public:
    Profesor(const string& _nombreApellido, const string& _dni, const string& _estadoCivil, int _anioIncorporacion, int _numOficina, const string& _departamento)
            : Empleado(_nombreApellido, _dni, _estadoCivil, _anioIncorporacion, _numOficina), departamento(_departamento) {}

    void cambiarDepartamento(const string& nuevoDepartamento) {
        departamento = nuevoDepartamento;
    }

    void imprimir() const override {
        Empleado::imprimir();
        cout << "Departamento: " << departamento << endl;
    }

    void ingresarDatos() {
        Empleado::ingresarDatos();
        cout << "Ingrese Departamento: ";
        getline(cin, departamento);
    }
};

class PersonalServicio : public Empleado {
private:
    string seccion;

public:
    PersonalServicio(const string& _nombreApellido, const string& _dni, const string& _estadoCivil, int _anioIncorporacion, int _numOficina, const string& _seccion)
            : Empleado(_nombreApellido, _dni, _estadoCivil, _anioIncorporacion, _numOficina), seccion(_seccion) {}

    void trasladarSeccion(const string& nuevaSeccion) {
        seccion = nuevaSeccion;
    }

    void imprimir() const override {
        Empleado::imprimir();
        cout << "Sección: " << seccion << endl;
    }

    void ingresarDatos() {
        Empleado::ingresarDatos();
        cout << "Ingrese Sección: ";
        getline(cin, seccion);
    }
};

int main() {
    Estudiante estudiante("", "", "", "");
    Profesor profesor("", "", "", 0, 0, "");
    PersonalServicio personalServicio("", "", "", 0, 0, "");

    cout << "Ingrese datos del Estudiante:" << endl;
    estudiante.ingresarDatos();
    cout << "\nIngrese datos del Profesor:" << endl;
    profesor.ingresarDatos();
    cout << "\nIngrese datos del Personal de Servicio:" << endl;
    personalServicio.ingresarDatos();

    cout << "\nInformación del Estudiante:" << endl;
    estudiante.imprimir();
    cout << "\nInformación del Profesor:" << endl;
    profesor.imprimir();
    cout << "\nInformación del Personal de Servicio:" << endl;
    personalServicio.imprimir();

    return 0;
}
