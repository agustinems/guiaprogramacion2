/*Realice un programa que permita ingresar una cadena de caracteres de máximo
50 elementos, la envíe como parámetro a una función que utilizando punteros y
retorne el número de vocales minúsculas que contiene la cadena.*/
#include <iostream>
using namespace std;
int contarVocalesMinusculas(const char* cadena);

int main() {
    const int MAX_LEN = 50;
    char cadena[MAX_LEN + 1]; 
   cout << "Ingrese una cadena de caracteres (máximo " << MAX_LEN << " caracteres): ";
   cin.getline(cadena, MAX_LEN + 1); 
    int num_vocales = contarVocalesMinusculas(cadena);
    cout << "Número de vocales minúsculas: " << num_vocales << endl;
    return 0;
}

int contarVocalesMinusculas(const char* cadena) {
    int count = 0;
    while (*cadena != '\0') {
        if (*cadena >= 'a' && *cadena <= 'z') {
         
            if (*cadena == 'a' || *cadena == 'e' || *cadena == 'i' || *cadena == 'o' || *cadena == 'u') {
                count++;
            }
        }
        cadena++;
    }
    return count;
}


