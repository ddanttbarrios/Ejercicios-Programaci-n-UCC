/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

Estructura de control repetitiva (while):

2) Queremos conocer los gastos de nuestro último viaje. Permita al usuario ingresar todos
los gastos deseados. El programa mostrará la sumatoria de los mismos cuando el usuario
ingrese un valor negativo.

*/ 

#include <iostream>
using namespace std;

int main() {
    float gasto, totalGastos = 0; // Se utilizan variables de tipo float para permitir decimales en los gastos

    cout << "Ingrese los gastos del viaje (ingrese un valor negativo para finalizar): " << endl;

    while (true) { // Bucle infinito que se romperá al ingresar un gasto negativo
        cin >> gasto; // Lee el gasto ingresado por el usuario
        if (gasto < 0) { // Si el gasto es negativo, se termina la carga de datos
            break;
        }
        totalGastos += gasto; // Acumula el gasto en totalGastos
    }

    cout << "La sumatoria total de los gastos del viaje es: $" << totalGastos << endl;

    return 0;
}

