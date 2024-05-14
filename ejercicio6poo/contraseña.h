#ifndef PASSWORD_H
#define PASSWORD_H

#include <string>

class Password {
private:
    int longitud;
    std::string contrasena;

public:
    Password();
    Password(int longitud);
    void cargarContrasena();
    bool esFuerte();
    void mostrarPassword();
    void cargarLongitud(int longitud);
};

#endif





