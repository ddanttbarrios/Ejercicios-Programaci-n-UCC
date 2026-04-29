/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

13) Permita ingresar 10 notas por teclado, y que determine si está aprobado (4 o más) o no.
Contabilice la cantidad de aprobados, la cantidad de desaprobados, y el promedio.

*/

#include <iostream>
using namespace std;

int main() {
    float nota, sumaNotas = 0;
    int contadorAprobados = 0, contadorDesaprobados = 0;

    cout << "Ingrese 10 notas:" << endl;

    for (int i = 0; i < 10; i++) { // Bucle que se ejecuta 10 veces para ingresar las notas
        cin >> nota; // Lee la nota ingresada por el usuario
        sumaNotas += nota; // Acumula la suma de las notas para calcular el promedio

        if (nota >= 4) { // Verifica si la nota es aprobatoria
            contadorAprobados++; // Incrementa el contador de aprobados si la nota es 4 o más
        } else { // Si la nota es menor a 4, es desaprobatoria
            contadorDesaprobados++; // Incrementa el contador de desaprobados si la nota es menor a 4
        }
    }

    float promedio = sumaNotas / 10; // Calcula el promedio dividiendo la suma de las notas entre 10

    cout << "Cantidad de aprobados: " << contadorAprobados << endl;
    cout << "Cantidad de desaprobados: " << contadorDesaprobados << endl;
    cout << "Promedio de las notas: " << promedio << endl;

    return 0;
}




