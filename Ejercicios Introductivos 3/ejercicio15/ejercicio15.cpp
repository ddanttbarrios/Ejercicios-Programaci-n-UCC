/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva y repetitiva (for):

15) Ingresar la cantidad de trabajadores de la empresa. Posteriormente, ingresar sus
sueldos. Calcular el monto que la empresa invierte en sueldos.

*/

#include <iostream>
using namespace std;

int main() {
    int cantidadTrabajadores;
    float sueldo, totalSueldos = 0;

    cout << "Ingrese la cantidad de trabajadores: ";
    cin >> cantidadTrabajadores;

    for (int i = 0; i < cantidadTrabajadores; i++) { // Bucle que se ejecuta según la cantidad de trabajadores
        cout << "Ingrese el sueldo del trabajador " << (i + 1) << ": ";
        cin >> sueldo; // Lee el sueldo ingresado por el usuario
        totalSueldos += sueldo; // Acumula el sueldo en totalSueldos
    }

    cout << "El monto total que la empresa invierte en sueldos es: $" << totalSueldos << endl;

    return 0;
}

