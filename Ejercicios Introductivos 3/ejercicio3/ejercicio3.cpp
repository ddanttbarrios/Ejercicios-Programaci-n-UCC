/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

Estructura de control repetitiva (while):

3) Permita al usuario ingresar cualquier cantidad de notas. El proceso finalizará cuando se
ingrese un ‘0’. Posteriormente, calculará el promedio de las notas.


*/

#include <iostream>
using namespace std;

int main() {
    float nota, sumaNotas = 0; // Se utilizan variables de tipo float para permitir decimales en las notas
    int contadorNotas = 0; // Contador para llevar la cantidad de notas ingresadas

    cout << "Ingrese las notas (ingrese 0 para finalizar): " << endl;

    while (true) { // Bucle infinito que se romperá al ingresar una nota de 0
        cin >> nota; // Lee la nota ingresada por el usuario
        if (nota == 0) { // Si la nota es 0, se termina la carga de datos
            break;
        }
        sumaNotas += nota; // Acumula la nota en sumaNotas
        contadorNotas++; // Incrementa el contador de notas
    }

    if (contadorNotas > 0) { // Verifica que se hayan ingresado notas para evitar división por cero
        float promedio = sumaNotas / contadorNotas; // Calcula el promedio dividiendo la suma total de notas por la cantidad de notas ingresadas
        cout << "El promedio de las notas es: " << promedio << endl;
    } else {
        cout << "No se ingresaron notas." << endl; // Mensaje en caso de que no se hayan ingresado notas
    }

    return 0;
}

