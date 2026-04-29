/* 
Dibujar un tablero de tamaño variable como se indica en la figura

0   1   0   1
1   0   1   0
0   1   0   1
1   0   1   0

*/

#include <iostream>
#include <string>
using namespace std;

void dibujarTablero(int filas, int columnas) { // Función que dibuja un tablero de tamaño variable
    for (int i = 0; i < filas; i++) { // Bucle para las filas del tablero
        for (int j = 0; j < columnas; j++) { // Bucle para las columnas del tablero
            if ((i + j) % 2 == 0) {
                cout << "0 "; // Imprime "0" en las posiciones pares
            } else {
                cout << "1 "; // Imprime "1" en las posiciones impares
            }
        }
        cout << endl; // Salto de línea después de cada fila
    }
}

int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas del tablero: ";
    cin >> filas; // Leer el número de filas del tablero desde la entrada del usuario
    cout << "Ingrese el número de columnas del tablero: ";
    cin >> columnas; // Leer el número de columnas del tablero desde la entrada del usuario
    dibujarTablero(filas, columnas); // Llamada a la función dibujarTablero para mostrar el tablero en pantalla
    return 0;
}

