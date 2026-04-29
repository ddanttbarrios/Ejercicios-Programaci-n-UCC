/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

14) Ingresar 8 números por teclado. Contabilizar la cantidad de pares, impares y nulos.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, contadorPares = 0, contadorImpares = 0, contadorNulos = 0;

    cout << "Ingrese 8 números:" << endl;

    for (int i = 0; i < 8; i++) { // Bucle que se ejecuta 8 veces para ingresar los números
        cin >> numero; // Lee el número ingresado por el usuario
        if (numero == 0) { // Verifica si el número es cero
            contadorNulos++; // Incrementa el contador de nulos si se ingresó un cero
        } else if (numero % 2 == 0) { // Verifica si el número es par
            contadorPares++; // Incrementa el contador de pares si se ingresó un número par
        } else { // Si no es cero ni par, debe ser impar
            contadorImpares++; // Incrementa el contador de impares si se ingresó un número impar
        }
    }

    cout << "Cantidad de números pares: " << contadorPares << endl;
    cout << "Cantidad de números impares: " << contadorImpares << endl;
    cout << "Cantidad de números nulos: " << contadorNulos << endl;

    return 0;
}
