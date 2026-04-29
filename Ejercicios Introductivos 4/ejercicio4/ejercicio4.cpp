/* 
Los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

4. Análisis de Números: Primos y Amigos
Consigna: El programa debe pedir dos números enteros positivos. Debe realizar el
siguiente análisis:
1. Indicar si cada número es Primo o no (usando un bucle para contar divisores).
2. Determinar si los números son Amigos. (Dos números son amigos si la suma de los
divisores propios de uno es igual al otro y viceversa. Ejemplo: 220 y 284).
3. Complejidad: Encontrar y mostrar todos los números primos que existen en el
rango comprendido entre los dos números ingresados.


*/

#include <iostream>
using namespace std;

bool esPrimo(int numero) { // Función para determinar si un número es primo
    if (numero <= 1) return false; // Los números menores o iguales a 1 no son primos
    for (int i = 2; i <= numero / 2; i++) { // Itera desde 2 hasta la mitad del número para verificar divisores
        if (numero % i == 0) { // Si el número es divisible por algún número entre 2 y su mitad, no es primo
            return false;
        }
    }
    return true; // Si no se encontraron divisores, el número es primo
}

int sumaDivisoresPropios(int numero) { // Función para calcular la suma de los divisores propios de un número
    int suma = 0;
    for (int i = 1; i < numero; i++) { // Itera desde 1 hasta el número - 1 para encontrar los divisores propios
        if (numero % i == 0) { // Si el número es divisible por i, es un divisor propio
            suma += i; // Acumula la suma de los divisores propios
        }
    }
    return suma;
}

void mostrarPrimosEnRango(int num1, int num2) { // Función para mostrar los números primos en el rango entre num1 y num2
    cout << "Números primos entre " << num1 << " y " << num2 << ": ";
    for (int i = min(num1, num2); i <= max(num1, num2); i++) { // Itera desde el menor hasta el mayor de los dos números
        if (esPrimo(i)) { // Verifica si el número actual es primo
            cout << i << " "; // Imprime el número primo encontrado
        }
    }
    cout << endl; // Salto de línea al finalizar la lista de primos
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer número entero positivo: ";
    cin >> num1;
    cout << "Ingrese el segundo número entero positivo: ";
    cin >> num2;

    // Verificar si los números son primos
    cout << num1 << (esPrimo(num1) ? " es primo." : " no es primo.") << endl;
    cout << num2 << (esPrimo(num2) ? " es primo." : " no es primo.") << endl;

    // Verificar si los números son amigos
    if (sumaDivisoresPropios(num1) == num2 && sumaDivisoresPropios(num2) == num1) {
        cout << "Los números son amigos." << endl;
    } else {
        cout << "Los números no son amigos." << endl;
    }

    // Mostrar los números primos en el rango entre los dos números ingresados
    mostrarPrimosEnRango(num1, num2);

    return 0;

    