/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

12) El programa debe calcular el factorial de un número N que ingrese el usuario.

*/

#include <iostream>
using namespace std;

int main() {
    int N, factorial = 1;

    cout << "Ingrese un número entero positivo: ";
    cin >> N;

    if (N < 0) {
        cout << "Error: El número debe ser un entero positivo." << endl;
        return 1; // Termina el programa con un código de error
    }

    for (int i = 1; i <= N; i++) { // Bucle que calcula el factorial multiplicando los números del 1 al N
        factorial *= i; // Equivale a factorial = factorial * i
    }

    cout << "El factorial de " << N << " es: " << factorial << endl;

    return 0;
}

