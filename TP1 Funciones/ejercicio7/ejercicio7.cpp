/* 7) Escribir una función que permita determinar la condición si un alumno en su materia.
Debe ingresar como datos las dos notas de parciales y la asistencia de un alumno.

Condición                           Detalle
Promocionado                        Dos notas >7 y 80% asistencia
Regular                             Dos notas >5 y 60% asistencia
Libre                               No cumple con las condiciones anteriores
*/

#include <iostream>
using namespace std;

char LeerNumero(float nota1, float nota2, float asistencia) {       // Función que evalúa las notas y la asistencia para determinar la condición del alumno
    if (nota1 > 7 && nota2 > 7 && asistencia >= 80) {
        return 'P'; // Promocionado
    } else if (nota1 > 5 && nota2 > 5 && asistencia >= 60) {
        return 'R'; // Regular
    } else {
        return 'L'; // Libre
    }
}

int main() {
    float nota1, nota2, asistencia;

    cout << "Ingrese la primera nota del parcial: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota del parcial: ";
    cin >> nota2;

    cout << "Ingrese el porcentaje de asistencia: ";
    cin >> asistencia;

    char resultadoCondicion = LeerNumero(nota1, nota2, asistencia); // Llamada a la función LeerNumero
    switch (resultadoCondicion) {           // Evaluar el resultado de la función LeerNumero para determinar la condición del alumno
        case 'P':                                               // Evaluar el resultado de la función LeerNumero para determinar la condición del alumno
            cout << "El alumno está promocionado." << endl;
            break;
        case 'R':
            cout << "El alumno está regular." << endl;
            break;
        case 'L':
            cout << "El alumno está libre." << endl;
            break;
        default:
            cout << "Error en la evaluación de la condición." << endl;
    }

    return 0;
}
