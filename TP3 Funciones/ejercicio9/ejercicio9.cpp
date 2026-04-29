/* 
9) Crear una función que dibuje un reloj de arena de tamaño variable.
* * * * *
  * * *
    *
  * * *
* * * * *


*/

#include <iostream>
#include <string>
using namespace std;

void dibujarRelojArena(int altura) { // Función que dibuja un reloj de arena de tamaño variable
    for (int i = 0; i < altura; i++) { // Bucle para las filas del reloj de arena
        for (int j = 0; j < altura; j++) { // Bucle para las columnas del reloj de arena
            if (i <= altura / 2) { // Parte superior del reloj de arena
                if (j >= i && j < altura - i) {
                    cout << "* "; // Imprime un asterisco en la parte superior del reloj de arena
                } else {
                    cout << "  "; // Imprime espacios en la parte superior del reloj de arena
                }
            } else { // Parte inferior del reloj de arena
                if (j >= altura - i - 1 && j < i + 1) {
                    cout << "* "; // Imprime un asterisco en la parte inferior del reloj de arena
                } else {
                    cout << "  "; // Imprime espacios en la parte inferior del reloj de arena
                }
            }
        }
        cout << endl; // Salto de línea después de cada fila
    }
}

int main() {
    int altura;
    cout << "Ingrese la altura del reloj de arena (debe ser un número impar): ";
    cin >> altura; // Leer la altura del reloj de arena desde la entrada del usuario
    if (altura % 2 == 0) { // Verificar que la altura sea un número impar
        cout << "La altura debe ser un número impar. Por favor, ingrese un número impar." << endl;
    } else {
        dibujarRelojArena(altura); // Llamada a la función dibujarRelojArena para mostrar el reloj de arena en pantalla
    }
    return 0;
}


