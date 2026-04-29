/* 
1) Suma de Elementos: Escribir una función llamada calcularSuma que reciba un arreglo
de enteros y su tamaño como argumentos. La función debe retornar la suma de todos los
elementos del arreglo. En la función main, declarar un arreglo, inicializar con algunos
valores y utilizar la función calcularSuma para mostrar el resultado en pantalla.

2) Encontrar el Máximo: Implementa una función llamada encontrarMaximo que tome
como entrada un arreglo de números de con coma y su tamaño. La función debe devolver el
valor máximo encontrado en el arreglo. En el main, crear un arreglo de float, llamar a
encontrarMaximo y mostrar el máximo.

3) Contar Ocurrencias: Desarrollar una función llamada contarOcurrencias que reciba un
arreglo de enteros, su tamaño y un número. La función debe retornar la cantidad de veces
que el número aparece en el arreglo. En el main, definir un arreglo de números de tipo float
y un número a buscar, luego utilizar la función para contar sus ocurrencias.

4) Invertir Arreglo: Escribir una función llamada invertirArreglo que reciba un arreglo de
enteros y su tamaño. La función debe invertir el orden de los elementos dentro del arreglo
(el primer elemento pasa a ser el último, el segundo al penúltimo, y así sucesivamente). La
función no debe retornar nada, sino modificar el arreglo original. En el main, inicializar un
arreglo, llamar a la función invertirArreglo y luego imprimir el arreglo invertido.

5) Buscar Elemento: Crear una función llamada buscarElemento que tome un arreglo de
números enteros y un número a buscar. La función debe retornar el índice de la primera
ocurrencia del número objetivo en el arreglo. Si el número no se encuentra, debe retornar
-1. En el main, declarar un arreglo de enteros y un número a buscar, luego utilizar la función
para encontrar su posición.

6) Promedio Condicional: Implementar una función llamada calcularPromedioPares que
reciba un arreglo de números float y su tamaño. La función debe calcular y retornar el
promedio de los números pares contenidos en el arreglo. Si no hay números pares, la
función debe retornar 0. En el main, crea un arreglo de enteros y utiliza la función para
obtener el promedio de los pares.

7) Concatenar Cadenas: Desarrollar una función llamada concatenarArreglos que reciba
dos arreglos de caracteres. La función debe unir los dos arreglos en un uno solo. En el
main, crear los dos arreglos que se desean unir, inicializarlos y utilizar la función para
realizar la unión de los arreglos. Imprimir el arreglo resultante.

8) Verificar Palíndromo: Escribe una función llamada esPalindromo que reciba un arreglo
de caracteres. La función debe retornar true si la cadena es un palíndromo (se lee igual de
izquierda a derecha que de derecha a izquierda) y false en caso contrario. En el main,
probar la función con diferentes palabras.

*/

#include <iostream>
#include <string>
using namespace std;

// Ejercicio 1
int calcularSuma(int arr[], int size) { // Recibe un arreglo de enteros y su tamaño, retorna la suma de los elementos
    int suma = 0;
    for (int i = 0; i < size; i++) { // Itera sobre el arreglo y acumula la suma
        suma += arr[i];
    }
    return suma;
}

// Ejercicio 2

float encontrarMaximo(float arr[], int size) {
    if (size == 0) return 0; // Manejo de caso vacío
    float maximo = arr[0]; // Inicializa el máximo con el primer elemento del arreglo
    for (int i = 1; i < size; i++) { // Itera sobre el arreglo para encontrar el valor máximo
        if (arr[i] > maximo) { // Si el elemento actual es mayor que el máximo registrado, actualiza el máximo
            maximo = arr[i];
        }
    }
    return maximo;
}

// Ejercicio 3

int contarOcurrencias(int arr[], int size, int numero) { // Recibe un arreglo de enteros, su tamaño y un número, retorna la cantidad de veces que el número aparece en el arreglo
    int contador = 0;
    for (int i = 0; i < size; i++) { // Itera sobre el arreglo para contar las ocurrencias del número
        if (arr[i] == numero) { // Si el elemento actual es igual al número buscado, incrementa el contador
            contador++;
        }
    }
    return contador;
}

// Ejercicio 4

void invertirArreglo(int arr[], int size) { // Recibe un arreglo de enteros y su tamaño, invierte el orden de los elementos dentro del arreglo  
    for (int i = 0; i < size / 2; i++) { // Itera solo hasta la mitad del arreglo para evitar volver a invertir los elementos ya intercambiados
        int temp = arr[i]; // Almacena temporalmente el elemento actual
        arr[i] = arr[size - 1 - i]; // Intercambia el elemento actual con su correspondiente desde el final del arreglo
        arr[size - 1 - i] = temp;
    }
}

// Ejercicio 5

int buscarElemento(int arr[], int size, int numero) { // Recibe un arreglo de enteros, su tamaño y un número a buscar, retorna el índice de la primera ocurrencia del número objetivo en el arreglo o -1 si no se encuentra
    for (int i = 0; i < size; i++) { // Itera sobre el arreglo para buscar el número
        if (arr[i] == numero) { //  Si el elemento actual es igual al número buscado, retorna el índice
            return i;
        }
    }
    return -1; // No encontrado
}

// Ejercicio 6

float calcularPromedioPares(float arr[], int size) { // Recibe un arreglo de números float y su tamaño, retorna el promedio de los números pares contenidos en el arreglo o 0 si no hay números pares
    float suma = 0;
    int contador = 0;
    for (int i = 0; i < size; i++) { // Itera sobre el arreglo para calcular la suma de los números pares y contar cuántos hay
        if (static_cast<int>(arr[i]) % 2 == 0) { // Verificar si es par
            suma += arr[i]; // Acumula la suma de los números pares
            contador++;
        }
    }
    return (contador > 0) ? (suma / contador) : 0; // Evitar división por cero
}

// Ejercicio 7

void concatenarArreglos(char arr1[], char arr2[], char resultado[], int size1, int size2) {
    for (int i = 0; i < size1; i++) { // Copia el primer arreglo al resultado
        resultado[i] = arr1[i]; // Copia el elemento actual del primer arreglo al resultado
    }
    for (int j = 0; j < size2; j++) { // Copia el segundo arreglo al resultado, comenzando después del último elemento del primer arreglo
        resultado[size1 + j] = arr2[j];
    }
    resultado[size1 + size2] = '\0'; // Agregar terminador de cadena
}

// Ejercicio 8

bool esPalindromo(char arr[], int size) {
    for (int i = 0; i < size / 2; i++) { // Itera solo hasta la mitad del arreglo para comparar los elementos desde el inicio y el final
        if (arr[i] != arr[size - 1 - i]) { // Si los elementos no son iguales, la cadena no es un palíndromo
            return false;
        }
    }
    return true;
}

int main() {
    // Ejercicio 1
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Suma de elementos: " << calcularSuma(arr1, size1) << endl;

    // Ejercicio 2
    float arr2[] = {1.5, 3.2, 5.8, 2.4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Valor máximo: " << encontrarMaximo(arr2, size2) << endl;

    // Ejercicio 3
    int numeroBuscar = 3;
    cout << "Ocurrencias de " << numeroBuscar << ": " << contarOcurrencias(arr1, size1, numeroBuscar) << endl;

    // Ejercicio 4
    invertirArreglo(arr1, size1);
    cout << "Arreglo invertido: ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Ejercicio 5
    int indice = buscarElemento(arr1, size1, numeroBuscar);
    if (indice != -1) {
        cout << "Número encontrado en el índice: " << indice << endl;
    } else {
        cout << "Número no encontrado." << endl;
    }

    // Ejercicio 6
    cout << "Promedio de números pares: " << calcularPromedioPares(arr2, size2) << endl;

    // Ejercicio 7
    char arr3[] = {'H', 'o', 'l', 'a'};
    char arr4[] = {' ', 'M', 'u', 'n', 'd', 'o'};
    char resultado[100];
    concatenarArreglos(arr3, arr4, resultado, sizeof(arr3), sizeof(arr4)); // Concatenar los dos arreglos de caracteres en el resultado
    cout << "Arreglo concatenado: " << resultado << endl;

    // Ejercicio 8
    char palabra[] = {'r', 'a', 'd', 'a', 'r'};
    int sizePalabra = sizeof(palabra) / sizeof(palabra[0]);
    if (esPalindromo(palabra, sizePalabra)) {

        cout << "La palabra es un palíndromo." << endl;
    } else {
        cout << "La palabra no es un palíndromo." << endl;
    }

    return 0;

}
