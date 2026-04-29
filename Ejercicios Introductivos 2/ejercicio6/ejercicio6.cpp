// ejercicio 6: Crear un algoritmo que permita mostrar la tabla de multiplicar de un número ingresado
// por teclado. El programa finaliza cuando el número ingresado es 0.

#include <iostream>
using namespace std;

int main () {
    int n = 0;

    cout << "Ingrese el numero del que desea mostrar su tabla de multilicar" << endl;
    cin >> n;

    for (int i=1; i <= 10; i++) {
        int P;
        P = n * i;
        cout << n << " x " << i << " = " << P << endl;

    }

    cout << "Esta fue nuestra tabla de multiplicar de: " << n << endl;
    return 0;
  
}

