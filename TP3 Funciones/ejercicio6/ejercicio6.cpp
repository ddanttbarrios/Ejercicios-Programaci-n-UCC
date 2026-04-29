

#include <iostream>
#include <string>
using namespace std;

/*
5) Escribir una función que permita realizar el siguiente gráfico:

*
**
***
****
*****
****
***
**
*

La función debe aceptar como parámetro la altura del gráfico (En el ejemplo la altura es 5)

*/

void dibujarGrafico(int altura) { // Función que dibuja el gráfico de asteriscos según la altura dada
    for (int i = 1; i <= altura; i++) { // Bucle para cada fila del gráfico, desde 1 hasta la altura
        for (int j = 1; j <= i; j++) { // Bucle para imprimir los asteriscos en cada fila, desde 1 hasta el número de fila actual
            cout << "*"; // Imprime un asterisco sin salto de línea
        }
        cout << endl; // Salto de línea después de imprimir los asteriscos de cada fila

    }
    for (int i = altura - 1; i >= 1; i--) { // Bucle para cada fila del gráfico, desde la altura - 1 hasta 1
        for (int j = 1; j <= i; j++) { // Bucle para imprimir los asteriscos en cada fila, desde 1 hasta el número de fila actual
            cout << "*"; // Imprime un asterisco sin salto de línea
        }
        cout << endl; // Salto de línea después de imprimir los asteriscos de cada fila

    }

    return; // Retorna al finalizar la función, aunque no es estrictamente necesario en este caso

}

int main() {
    int altura;
    cout << "Ingrese la altura del gráfico: ";
    cin >> altura; // Leer la altura del gráfico desde la entrada del usuario
    dibujarGrafico(altura); // Llamada a la función dibujarGrafico para mostrar el gráfico en pantalla
    return 0;
}






