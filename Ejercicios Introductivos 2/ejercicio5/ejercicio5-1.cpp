#include <iostream>
using namespace std;

int main () {
    int i = 0;
    float nota = 0, suma = 0, promedio = 0;

    cout << "Ingrese las notas de los alumnos, para finalizar ingrese un numero 0" << endl;
    cin >> nota;
    while (nota > 0) {
        suma += nota;
        i++;
        cin >> nota;

    }

    promedio = suma / i;
    cout << "El promedio es: " << promedio << endl;

}