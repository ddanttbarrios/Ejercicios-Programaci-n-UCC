/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control de alternativa y repetitiva (for)

8) Realice la sumatoria de los números enteros comprendidos entre el 1 al 10

*/

#include <iostream>
using namespace std;

int main() {
    int sumatoria = 0;

    for (int i = 1; i <= 10; i++) {
        sumatoria += i;
    }

    cout << "La sumatoria de los números del 1 al 10 es: " << sumatoria << endl;

    return 0;
}

