#include <iostream>
#include <string>

using namespace std;

const int MAX_HECHIZOS = 4;

class Personaje {
protected:
    string nombre;
    string raza;
    int fuerza;
    int inteligencia;
    int puntosVidaMaximos;
    int puntosVidaActuales;

public:
    Personaje(const string& _nombre, const string& _raza, int _fuerza, int _inteligencia, int _puntosVidaMaximos)
            : nombre(_nombre), raza(_raza), fuerza(_fuerza), inteligencia(_inteligencia), puntosVidaMaximos(_puntosVidaMaximos), puntosVidaActuales(_puntosVidaMaximos) {}

    void cargar() {
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Raza: ";
        cin >> raza;
        cout << "Fuerza: ";
        cin >> fuerza;
        cout << "Inteligencia: ";
        cin >> inteligencia;
        cout << "Puntos de Vida Máximos: ";
        cin >> puntosVidaMaximos;
        puntosVidaActuales = puntosVidaMaximos;
    }

    virtual void imprimir() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Raza: " << raza << endl;
        cout << "Fuerza: " << fuerza << endl;
        cout << "Inteligencia: " << inteligencia << endl;
        cout << "Puntos de Vida Máximos: " << puntosVidaMaximos << endl;
        cout << "Puntos de Vida Actuales: " << puntosVidaActuales << endl;
    }

    bool estaVivo() const {
        return puntosVidaActuales > 0;
    }

    void recibirDanio(int danio) {
        puntosVidaActuales -= danio;
        if (puntosVidaActuales < 0)
            puntosVidaActuales = 0;
    }
};

class Mago : public Personaje {
private:
    string hechizos[MAX_HECHIZOS];
    int numHechizos;

public:
    Mago(const string& _nombre, const string& _raza, int _fuerza, int _inteligencia, int _puntosVidaMaximos)
            : Personaje(_nombre, _raza, _fuerza, _inteligencia, _puntosVidaMaximos), numHechizos(0) {}

    void aprendeHechizo(const string& hechizo) {
        if (numHechizos < MAX_HECHIZOS) {
            hechizos[numHechizos++] = hechizo;
        } else {
            cout << "El mago ya ha memorizado el máximo de hechizos." << endl;
        }
    }

    void lanzaHechizo(Personaje& objetivo) {
        if (numHechizos > 0) {
            cout << nombre << " lanza un hechizo sobre " << objetivo.nombre << "." << endl;
            objetivo.recibirDanio(10);
            numHechizos--;
            if (!objetivo.estaVivo())
                cout << objetivo.nombre << " ha sido derrotado!" << endl;
        } else {
            cout << "El mago no tiene hechizos memorizados." << endl;
        }
    }

    void imprimir() const override {
        Personaje::imprimir();
        cout << "Hechizos Memorizados:" << endl;
        for (int i = 0; i < numHechizos; ++i) {
            cout << "- " << hechizos[i] << endl;
        }
    }
};

class Clerigo : public Personaje {
private:
    string dios;

public:
    Clerigo(const string& _nombre, const string& _raza, int _fuerza, int _inteligencia, int _puntosVidaMaximos, const string& _dios)
            : Personaje(_nombre, _raza, _fuerza, _inteligencia, _puntosVidaMaximos), dios(_dios) {}

    void curar(Personaje& objetivo) {
        cout << nombre << " reza a " << dios << " para curar a " << objetivo.nombre << "." << endl;
        objetivo.puntosVidaActuales += 10;
        if (objetivo.puntosVidaActuales > objetivo.puntosVidaMaximos) {
            objetivo.puntosVidaActuales = objetivo.puntosVidaMaximos;
        }
    }

    void imprimir() const override {
        Personaje::imprimir();
        cout << "Dios: " << dios << endl;
    }
};

int main() {
    Mago magoA("Gandalf", "humano", 10, 20, 100);
    Mago magoB("Merlín", "elfo", 15, 18, 80);
    Clerigo clerigoC("Sancho", "enano", 18, 15, 120, "El Gran Dios de la Roca");

    cout << "Datos de los personajes:" << endl;
    magoA.imprimir();
    cout << endl;
    magoB.imprimir();
    cout << endl;
    clerigoC.imprimir();
    cout << endl;

    magoA.aprendeHechizo("Bola de Fuego");
    magoA.aprendeHechizo("Rayo Mortal");
    magoB.aprendeHechizo("Escudo Mágico");

    cout << "Datos de los magos después de aprender hechizos:" << endl;
    magoA.imprimir();
    cout << endl;
    magoB.imprimir();
    cout << endl;

    magoA.lanzaHechizo(magoB);
    magoB.lanzaHechizo(magoA);

    cout << "Datos de los personajes después de lanzar hechizos:" << endl;
    magoA.imprimir();
    cout << endl;
    magoB.imprimir();
    cout << endl;

    clerigoC.curar(magoB);

    cout << "Datos de los personajes después de que el clérigo cure a mago B:" << endl;
    magoB.imprimir();
    cout << endl;

    magoA.lanzaHechizo(magoB);

    cout << "Datos de los personajes después de que mago A lance un hechizo sobre mago B:" << endl;
    magoB.imprimir();
    cout << endl;

    return 0;
}
