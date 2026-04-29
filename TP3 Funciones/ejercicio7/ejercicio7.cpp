


#include <iostream>
#include <string>
using namespace std;

/*
7) Escribir una función que permita realizar el siguiente gráfico:
        *
      ***
    *****
  *******
*********

La función debe aceptar como parámetro la  base del grafico

*/

void dibujarGrafico(int base) { // Función que dibuja el gráfico de asteriscos según la base dada
    int altura = (base + 1) / 2; // Calcular la altura del gráfico a partir de la base
    for (int i = 1; i <= altura; i++) { // Bucle para cada fila del gráfico, desde 1 hasta la altura
        for (int j = 1; j <= altura - i; j++) { // Bucle para imprimir los espacios antes de los asteriscos en cada fila
            cout << " "; // Imprime un espacio sin salto de línea
        }
        for (int k = 1; k <= 2 * i - 1; k++) { // Bucle para imprimir los asteriscos en cada fila, desde 1 hasta el número de asteriscos actual
            cout << "*"; // Imprime un asterisco sin salto de línea
        }
        cout << endl; // Salto de línea después de imprimir los asteriscos de cada fila
    }
}

int main() {
    int base;
    cout << "Ingrese la base del gráfico (debe ser un número impar): ";
    cin >> base; // Leer la base del gráfico desde la entrada del usuario
    if (base % 2 == 0) { // Verificar que la base sea un número impar
        cout << "La base debe ser un número impar. Por favor, ingrese un número impar." << endl;
    } else {
        dibujarGrafico(base); // Llamada a la función dibujarGrafico para mostrar el gráfico en pantalla
    }
    return 0; 
}   









