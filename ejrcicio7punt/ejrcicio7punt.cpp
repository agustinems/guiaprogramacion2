/*Obtener una función copia que utilice punteros para copiar una cadena en otra.*/
#include <iostream>
using namespace std;
void copia(const char* origen, char* destino);

int main() {
    const char* cadena_origen = "Hola mundo";
    char cadena_destino[50]; 
    copia(cadena_origen, cadena_destino);
    cout << "Cadena destino: " << cadena_destino << endl;
    return 0;
}

void copia(const char* origen, char* destino) {
    while (*origen != '\0') {
        *destino = *origen;
        origen++;
        destino++;
    }
    *destino = '\0';
}