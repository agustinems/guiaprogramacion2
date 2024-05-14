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
};

int main() {
    Estudiante estudiante("Juan Perez", "12345678", "Soltero", "Ingeniería Informática");
    Profesor profesor("Ana Garcia", "87654321", "Casado", 2005, 101, "Matemáticas");
    PersonalServicio personalServicio("Pedro Gonzalez", "98765432", "Casado", 2010, 203, "Secretaría");

    // Cambios de estado civil
    estudiante.cambiarEstadoCivil("Comprometido");
    profesor.cambiarEstadoCivil("Divorciado");
    personalServicio.cambiarEstadoCivil("Viudo");

    // Reasignación de despacho
    profesor.reasignarDespacho(102);
    personalServicio.reasignarDespacho(204);

    // Matriculación en un nuevo curso
    estudiante.matricularEnCurso("Ingeniería Eléctrica");

    // Cambio de departamento y traslado de sección
    profesor.cambiarDepartamento("Física");
    personalServicio.trasladarSeccion("Decanato");

    // Imprimir información
    cout << "Información del Estudiante:" << endl;
    estudiante.imprimir();
    cout << endl;

    cout << "Información del Profesor:" << endl;
    profesor.imprimir();
    cout << endl;

    cout << "Información del Personal de Servicio:" << endl;
    personalServicio.imprimir();
    cout << endl;

    return 0;
}
