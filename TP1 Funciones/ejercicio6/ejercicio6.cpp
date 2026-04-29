/* Escribir una función que permita realizar una operación matemática entre dos números.
La función debe recibir como parámetros:
Operando 1
Operando 2
Operación (+, -, *, /)
*/

#include <iostream>
using namespace std;

double realizarOperacion(double operando1, double operando2, char operacion) {      // Función que realiza la operación matemática según el operador ingresado
    switch (operacion) {            // Evaluar la operación ingresada
        case '+':
            return operando1 + operando2;
        case '-':
            return operando1 - operando2;
        case '*':
            return operando1 * operando2;
        case '/':           // Verificar que el divisor no sea cero antes de realizar la división
            if (operando2 != 0) {       // Evitar división por cero
                return operando1 / operando2;
            } else {
                cout << "Error: División por cero." << endl;
                return 0;
            }
        default:            // Si el operador no es válido, mostrar un mensaje de error
            cout << "Error: Operación no válida." << endl;
            return 0;
    }
}

int main() {
    double operando1, operando2;
    char operacion;

    cout << "Ingrese el primer operando: ";
    cin >> operando1;

    cout << "Ingrese el segundo operando: ";
    cin >> operando2;

    cout << "Ingrese la operación a realizar (+, -, *, /): ";
    cin >> operacion;

    double resultado = realizarOperacion(operando1, operando2, operacion);
    cout << "El resultado de la operación es: " << resultado << endl;

    return 0;
}

