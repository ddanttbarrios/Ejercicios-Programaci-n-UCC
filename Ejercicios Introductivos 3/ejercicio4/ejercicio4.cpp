/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

Estructura de control repetitiva (while):

4) Muestre por pantalla la tabla de multiplicación del número que ingrese el usuario. Para
definir hasta que número desea que muestre la tabla de multiplicación el usuario también
deberá ingresar este valor. La tabla de multiplicación a mostrar debe empezar en la
multiplicación por 1.


*/

#include <iostream>
using namespace std;

int main() {
    int numero, limite;

    cout << "Ingrese el número para mostrar su tabla de multiplicación: ";
    cin >> numero;
    cout << "Ingrese hasta qué número desea mostrar la tabla de multiplicación: ";
    cin >> limite;

    cout << "Tabla de multiplicación del " << numero << ":" << endl;
    for (int i = 1; i <= limite; i++) { // Itera desde 1 hasta el límite ingresado por el usuario
        cout << numero << " x " << i << " = " << numero * i << endl; // Muestra la multiplicación actual
    }

    return 0;
}

