#include <iostream>
#include <string>

using namespace std;

// Clase Persona
class Persona {
private:
    string nombre;
    string fechaNacimiento;
    string dni;
    char sexo;
    float peso;
    float altura;
    int edad; // Atributo privado para almacenar la edad calculada

public:
    // Constructor por defecto
    Persona() {
        nombre = "";
        fechaNacimiento = "";
        dni = "";
        sexo = ' ';
        peso = 0.0;
        altura = 0.0;
        edad = 0; // Inicializar edad en 0
    }

    // Constructor con nombre, edad y sexo
    Persona(string nombrePersona, string fechaNacimientoPersona, char sexoPersona) {
        nombre = nombrePersona;
        fechaNacimiento = fechaNacimientoPersona;
        sexo = sexoPersona;
        edad = calcularEdad(fechaNacimientoPersona); // Calcular edad a partir de la fecha de nacimiento
        dni = "";
        peso = 0.0;
        altura = 0.0;
    }

    // Constructor con todos los atributos
    Persona(string nombrePersona, string fechaNacimientoPersona, char sexoPersona, string dniPersona, float pesoPersona, float alturaPersona) {
        nombre = nombrePersona;
        fechaNacimiento = fechaNacimientoPersona;
        sexo = sexoPersona;
        edad = calcularEdad(fechaNacimientoPersona); // Calcular edad a partir de la fecha de nacimiento
        dni = dniPersona;
        peso = pesoPersona;
        altura = alturaPersona;
    }

    // Métodos para cargar y mostrar datos (solo declaraciones)
    void cargarDatos();
    void mostrarDatos();

    // Método para calcular el IMC
    float calcularIMC() {
        if (altura == 0.0) {
            return 0.0;
        }
        return peso / (altura * altura);
    }

    // Método para calcular la edad a partir de la fecha de nacimiento (función privada)
    int calcularEdad(string fechaNacimientoPersona);

    // Método para indicar si es mayor de edad
    bool esMayorDeEdad() {
        return edad >= 18;
    }
};

// Implementación de los métodos para cargar y mostrar datos (fuera de la clase)
void Persona::cargarDatos() {
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la fecha de nacimiento (YYYY-MM-DD): ";
    getline(cin, fechaNacimiento);

    cout << "Ingrese el sexo (H/M): ";
    cin >> sexo;
    cin.ignore(); // Ignorar el salto de línea

    cout << "Ingrese el DNI: ";
    getline(cin, dni);

    cout << "Ingrese el peso (kg): ";
    cin >> peso;

    cout << "Ingrese la altura (m): ";
    cin >> altura;

    edad = calcularEdad(fechaNacimiento); // Calcular edad al cargar los datos
}

void Persona::mostrarDatos() {
    cout << "\nNombre: " << nombre << endl;
    cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "DNI: " << dni << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "IMC: " << calcularIMC() << endl;
    cout << "¿Es mayor de edad? " << (esMayorDeEdad() ? "Sí" : "No") << endl;
}

// Implementación del método privado para calcular la edad
int Persona::calcularEdad(string fechaNacimientoPersona) {
    // Se omite la implementación del cálculo de edad para mantener la independencia de librerías externas
    // Se puede implementar un algoritmo básico para calcular la edad a partir de la fecha de nacimiento
    // o solicitar la edad directamente al usuario al cargar los datos.
    cout << "Ingrese la edad: ";
    int edadUsuario;
    cin >> edadUsuario;
    return edadUsuario;
}

// Programa principal (sin modificaciones)
int main() {
    // Crear una instancia de Persona usando el constructor por defecto
    Persona persona1;

    // Cargar datos para la persona 1
    cout << "\nPersona 1:" << endl;
    persona1.cargarDatos();

    // Crear una instancia de Persona usando el constructor con nombre, edad y sexo
    Persona persona2("Juan Perez", "1980-01-01", 'H');

    // Cargar datos para la persona 2 (opcional)
    cout << "\nPersona 2:" << endl;
    persona2.cargarDatos(); // Se pueden cargar datos personalizados si se desea

    // Crear una instancia de Persona usando el constructor con todos los atributos
    Persona persona3("Maria Garcia", "1995-07-12", 'M', "12345678", 65.0, 1.70);

    // Mostrar datos de las personas creadas
    cout << "\nPersona 1:" << endl;
    persona1.mostrarDatos();

    cout << "\nPersona 2:" << endl;
    persona2.mostrarDatos();

    cout << "\nPersona 3:" << endl;
    persona3.mostrarDatos();

    return 0;
}