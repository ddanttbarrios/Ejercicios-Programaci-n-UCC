/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

17) El programa debe imprimir los términos de la siguiente serie: 2,5,7,10,12,15,17 (hasta
llegar a 100).


*/

#include <iostream>
using namespace std;

int main() {
    cout << "Términos de la serie: " << endl;

    for (int i = 2; i <= 100; i++) { // Bucle que itera desde 2 hasta 100
        if (i % 3 == 2) { // Verifica si el número deja un residuo de 2 al dividirlo por 3, lo que corresponde a los términos de la serie
            cout << i << " "; // Imprime el término de la serie seguido de un espacio
        }
    }

    cout << endl; // Salto de línea al finalizar la impresión de la serie

    return 0;
}

