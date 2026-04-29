// Crear un algoritmo que muestre cada uno de los dígitos de un numero ingresado por el
// usuario. El máximo permitido es de 4 dígitos. Por ejemplo: si se ingresa el numero 150,
// entonces debe mostrar en un único cartel lo siguiente: “Los dígitos que componen el
// número ingresado son: d1 = 0, d2 = 1, d3 = 5 y d4 =0”.

#include <iostream>
using namespace std;

int main () {
    int n, d1, d2, d3, d4; 
    cout << "Ingrese un numero de hasta 4 digitos: " << endl;
    cin >> n;

    while (n > 9999) {
        cout << "El numero ingresado es mayor a 4 digitos, por favor ingrese un numero de hasta 4 digitos: " << endl;
        cin >> n;
    }

    d4 = n % 10;  
    d3 = (n / 10) % 10;
    d2 = (n / 100) % 10;
    d1 = (n / 1000) % 10; 
    cout << "Los digitos que componen el numero ingresado son: d1 = " << d1 << ", d2 = " << d2 << ", d3 = " << d3 << " y d4 = " << d4 << endl;

    return 0;
}