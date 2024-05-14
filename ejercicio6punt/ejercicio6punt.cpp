/*Realizar un programa que ingrese una cadena de caracteres de máximo 50
elementos y la envíe como parámetro a una función que maneje punteros
de modo que la función invierta la cadena.*/
#include <iostream>
using namespace std;
const int MAX_LEN = 50;

void invertirCadena(char* cadena);

int main() {
    char cadena[MAX_LEN + 1]; 
   cout << "Ingrese una cadena de caracteres (máximo " << MAX_LEN << " caracteres): ";
    cin.getline(cadena, MAX_LEN + 1); 
    invertirCadena(cadena);
   cout << "Cadena invertida: " << cadena << endl;
    return 0;
}

void invertirCadena(char* cadena) {
    char* inicio = cadena;
    char* fin = cadena;

  
    while (*fin != '\0') {
        fin++;
    }
    fin--; 

  
    while (inicio < fin) {
        char temp = *inicio;
        *inicio = *fin;
        *fin = temp;

       
        inicio++;
        fin--;
    }
}