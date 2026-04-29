/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

16) Permite al usuario ingresar un número. Verifica si el número es o no primo. Imprime por
pantalla el texto “Es primo” ó “No es Primo.
a) Desarrolle Solución 1: Verificar que solo tiene 2 divisores (1 y sí mismo)
b) Modifique el código de forma tal, que si el número NO es primo, muestre en qué
números es divisible.
c) Desarrolle Solución 2: Emplee una bandera que cambie de estado si el número
NO es primo.

*/


// SOLUCION B

#include <iostream>
using namespace std;

bool esPrimo(int numero) { // Función para determinar si un número es primo utilizando una bandera
    if (numero <= 1) return false; // Los números menores o iguales a 1 no son primos
    bool esPrimoFlag = true; // Bandera que se mantiene verdadera hasta que se encuentre un divisor
    for (int i = 2; i <= numero / 2; i++) { // Itera desde 2 hasta la mitad del número para verificar divisores
        if (numero % i == 0) { // Si el número es divisible por algún número entre 2 y su mitad, no es primo
            cout << "El número " << numero << " es divisible por: " << i << endl; // Muestra los divisores si el número no es primo
            esPrimoFlag = false; // Cambia la bandera a false si se encuentra un divisor
        }
    }
    return esPrimoFlag; // Retorna el estado de la bandera para indicar si el número es primo o no
}

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (esPrimo(numero)) { // Verifica si el número es primo utilizando la función esPrimo
        cout << "Es primo" << endl; // Si es primo, muestra el mensaje correspondiente
    } else {
        cout << "No es primo" << endl; // Si no es primo, muestra el mensaje correspondiente
    }

    return 0;

}



