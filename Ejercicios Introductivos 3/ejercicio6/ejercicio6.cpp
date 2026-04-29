/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva (do while):

6) Escribe los 100 primeros números pares.

*/

#include <iostream>
using namespace std;

int main() {
    int contador = 0; // Contador para llevar la cantidad de números pares mostrados
    int numero = 0; // Variable para almacenar el número actual

    do { // El bloque de código dentro del do se ejecutará al menos una vez antes de verificar la condición
        cout << numero << " "; // Muestra el número par actual
        numero += 2; // Incrementa el número en 2 para obtener el siguiente número par
        contador++; // Incrementa el contador de números pares mostrados
    } while (contador < 100); // Continúa el bucle mientras el contador sea menor a 100

    cout << endl; // Salto de línea al finalizar la lista de números pares

    return 0;
}

