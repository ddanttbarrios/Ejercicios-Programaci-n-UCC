//Ingresar dos números por teclado y sumarlos. En caso que los números sean negativos, previo a la suma se debe cambiar su signo.

#include <iostream>
using namespace std;

int main () {
    float num1, num2, suma;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 < 0) {         // el if es para verificar si el numero es negativo, si lo es, se cambia su signo a positivo
        num1 = -num1; // cambiamos el signo de la variable misma
    }

    if (num2 < 0) {
        num2 = -num2; // lo mismo aca kjaskajskja
    }

    suma = num1 + num2;

    cout << "La suma de los numeros es: " << suma << endl;  // no te olvides del endl nunca pelotudo

    return 0;

}