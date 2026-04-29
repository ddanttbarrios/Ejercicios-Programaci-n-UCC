/* 
0) Crear una función que dibuje una letra X de tamaño variable.
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *

*/

#include <iostream>
#include <string>
using namespace std;

void dibujarX(int altura) { // Función que dibuja una letra X de tamaño variable
    for (int i = 0; i < altura; i++) { // Bucle para las filas de la letra X
        for (int j = 0; j < altura; j++) { // Bucle para las columnas de la letra X
            if (j == i || j == altura - i - 1) {
                cout << "* "; // Imprime un asterisco en las posiciones correspondientes para formar la letra X
            } else {
                cout << "  "; // Imprime espacios en las demás posiciones
            }
        }
        cout << endl; // Salto de línea después de cada fila
    }
}

int main() {
    int altura;
    cout << "Ingrese la altura de la letra X (debe ser un número impar): ";
    cin >> altura; // Leer la altura de la letra X desde la entrada del usuario
    if (altura % 2 == 0) { // Verificar que la altura sea un número impar
        cout << "La altura debe ser un número impar. Por favor, ingrese un número impar." << endl;
    } else {
        dibujarX(altura); // Llamada a la función dibujarX para mostrar la letra X en pantalla
    }
    return 0;
}

