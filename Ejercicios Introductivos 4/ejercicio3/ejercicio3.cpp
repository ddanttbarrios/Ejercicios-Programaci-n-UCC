/*

todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

3. Patrones Geométricos Dinámicos (El "Reloj de Arena")
Consigna: Solicitar al usuario un número impar N (validar que sea impar y mayor a 3). El
programa debe dibujar en la consola un reloj de arena perfecto hecho de asteriscos (*).
● Ejemplo para N=5:
* * * * *
  * * *
    *
  * * *
* * * * *

*/

#include <iostream>
#include <iomanip> // Para usar setw
using namespace std;

void dibujarRelojArena(int N) {
    int espacios = 0; // Variable para controlar los espacios antes de los asteriscos

    // Parte superior del reloj de arena
    for (int i = N; i > 0; i -= 2) { // Itera desde N hasta 1, decrementando de 2 en 2
        cout << setw(espacios) << ""; // Imprime los espacios antes de los asteriscos
        for (int j = 0; j < i; j++) { // Imprime los asteriscos correspondientes a la fila actual
            cout << "* ";
        }
        cout << endl; // Salto de línea después de cada fila
        espacios += 2; // Incrementa los espacios para la siguiente fila
    }

    espacios -= 4; // Ajusta los espacios para la parte inferior del reloj de arena

    // Parte inferior del reloj de arena
    for (int i = 3; i <= N; i += 2) { // Itera desde 3 hasta N, incrementando de 2 en 2
        cout << setw(espacios) << ""; // Imprime los espacios antes de los asteriscos
        for (int j = 0; j < i; j++) { // Imprime los asteriscos correspondientes a la fila actual
            cout << "* ";
        }
        cout << endl; // Salto de línea después de cada fila
        espacios -= 2; // Decrementa los espacios para la siguiente fila
    }
}