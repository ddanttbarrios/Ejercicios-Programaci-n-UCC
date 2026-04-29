/* 2) Se necesita obtener el promedio simple de un estudiante a partir de sus 4
notas parciales.
*/

#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, nota4, promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;
    cout << "Ingrese la cuarta nota: ";
    cin >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "El promedio simple es: " << promedio << endl;

    return 0;
}
