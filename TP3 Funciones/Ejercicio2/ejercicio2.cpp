


#include <iostream>
#include <string>
using namespace std;

/*  Escribir una función que permita dibujar un cuadrado de lado N en pantalla.

* * * * * *
*         *
*         *
*         *
*         *
* * * * * *

*/ 

void dibujarCuadrado(int lado) { // Función que dibuja un cuadrado de lado N
    for (int i = 0; i < lado; i++) { // Bucle para las filas del cuadrado
        for (int j = 0; j < lado; j++) { // Bucle para las columnas del cuadrado
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                cout << "* "; // Imprime un asterisco en los bordes del cuadrado
            } else {
                cout << "  "; // Imprime espacios en el interior del cuadrado
            }
        }
        cout << endl; // Salto de línea después de cada fila
    }
}

int main() {
    int lado;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado; // Leer el lado del cuadrado desde la entrada del usuario
    dibujarCuadrado(lado); // Llamada a la función dibujarCuadrado para mostrar el cuadrado en pantalla
    return 0;
}

