/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva (do while):

5) Realice la sumatoria de los números enteros comprendidos entre el 1 al 10.

*/

#include <iostream>
using namespace std;

int main() {
    int sumatoria = 0;
    int numero = 1; // Inicializa el número en 1 para comenzar la sumatoria desde el primer entero

    do { // El bloque de código dentro del do se ejecutará al menos una vez antes de verificar la condición
        sumatoria += numero; // Agrega el número actual a la sumatoria
        numero++; // Incrementa el número para la siguiente iteración
    } while (numero <= 10); // Continúa el bucle mientras el número sea menor o igual a 10

    cout << "La sumatoria de los números enteros del 1 al 10 es: " << sumatoria << endl;

    return 0;
}
