/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

10) Determinar el mayor y el menor entre diez números enteros ingresados por teclado.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, mayor, menor;

    cout << "Ingrese 10 números enteros:" << endl;

    for (int i = 0; i < 10; i++) { // Bucle que se ejecuta 10 veces para ingresar los números
        cin >> numero; // Lee el número ingresado por el usuario

        if (i == 0) { // Para el primer número, inicializamos mayor y menor con ese valor
            mayor = numero;
            menor = numero;
        } else {
            if (numero > mayor) { // Si el número es mayor que el actual mayor, lo actualizamos
                mayor = numero;
            }
            if (numero < menor) { // Si el número es menor que el actual menor, lo actualizamos
                menor = numero;
            }
        }
    }

    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;

    return 0;
}

