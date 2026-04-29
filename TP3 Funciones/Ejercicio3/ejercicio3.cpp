

#include <iostream>
#include <string>
using namespace std;


/* 3) Repetir el ejercicio anterior considerando, considerando que la figura a dibujar es un
rectángulo.
*/

void dibujarRectangulo(int ancho, int alto) { // Función que dibuja un rectángulo de ancho y alto dados
    for (int i = 0; i < alto; i++) { // Bucle para las filas del rectángulo
        for (int j = 0; j < ancho; j++) { // Bucle para las columnas del rectángulo
            if (i == 0 || i == alto - 1 || j == 0 || j == ancho - 1) {
                cout << "* "; // Imprime un asterisco en los bordes del rectángulo
            } else {
                cout << "  "; // Imprime espacios en el interior del rectángulo
            }
        }
        cout << endl; // Salto de línea después de cada fila
    }
}

int main() {
    int ancho, alto;
    cout << "Ingrese el ancho del rectángulo: ";
    cin >> ancho; // Leer el ancho del rectángulo desde la entrada del usuario
    cout << "Ingrese el alto del rectángulo: ";
    cin >> alto; // Leer el alto del rectángulo desde la entrada del usuario
    dibujarRectangulo(ancho, alto); // Llamada a la función dibujarRectangulo para mostrar el rectángulo en pantalla
    return 0;
}
