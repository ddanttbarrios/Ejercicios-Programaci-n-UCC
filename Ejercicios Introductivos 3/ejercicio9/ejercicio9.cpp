/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

9) Permite ingresar 12 números por teclado. Cuenta la cantidad de veces que se ingresó el
cero.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, contadorCeros = 0;

    cout << "Ingrese 12 números:" << endl;

    for (int i = 0; i < 12; i++) { // Bucle que se ejecuta 12 veces para ingresar los números
        cin >> numero; // Lee el número ingresado por el usuario
        if (numero == 0) { // Verifica si el número es cero
            contadorCeros++; // Incrementa el contador de ceros si se ingresó un cero
        }
    }

    cout << "La cantidad de veces que se ingresó el cero es: " << contadorCeros << endl;

    return 0;
}

