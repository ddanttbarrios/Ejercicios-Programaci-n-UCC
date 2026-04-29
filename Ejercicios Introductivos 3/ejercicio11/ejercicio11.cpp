/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

11) Leer diez números y determinar la cantidad de ceros, positivos y negativos.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, contadorCeros = 0, contadorPositivos = 0, contadorNegativos = 0;

    cout << "Ingrese 10 números:" << endl;

    for (int i = 0; i < 10; i++) { // Bucle que se ejecuta 10 veces para ingresar los números
        cin >> numero; // Lee el número ingresado por el usuario
        if (numero == 0) { // Verifica si el número es cero
            contadorCeros++; // Incrementa el contador de ceros si se ingresó un cero
        } else if (numero > 0) { // Verifica si el número es positivo
            contadorPositivos++; // Incrementa el contador de positivos si se ingresó un número positivo
        } else { // Si no es cero ni positivo, debe ser negativo
            contadorNegativos++; // Incrementa el contador de negativos si se ingresó un número negativo
        }
    }

    cout << "Cantidad de ceros: " << contadorCeros << endl;
    cout << "Cantidad de positivos: " << contadorPositivos << endl;
    cout << "Cantidad de negativos: " << contadorNegativos << endl;

    return 0;
}

