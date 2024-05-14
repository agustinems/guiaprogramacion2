/*Ingresar una cadena de caracteres de longitud máxima 10, enviarla como
parámetro a una función que maneje punteros de modo que retorne la misma
cadena de caracteres, pero en mayúsculas.*/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
#define MAX_LEN 10

char* convertirMayusculas(char* cadena);

int main() {
    char cadena[MAX_LEN + 1]; 
    cout << "Ingrese una cadena de caracteres (máximo " << MAX_LEN << " caracteres): ";
   cin.getline(cadena, MAX_LEN + 1); 
    char* resultado = convertirMayusculas(cadena);
    cout << "Cadena en mayúsculas: " << resultado <<endl;
    return 0;
}

char* convertirMayusculas(char* cadena) {
    char* ptr = cadena;
    while (*ptr) {
        *ptr = toupper(*ptr);
        ptr++;
    }
    return cadena;
}
