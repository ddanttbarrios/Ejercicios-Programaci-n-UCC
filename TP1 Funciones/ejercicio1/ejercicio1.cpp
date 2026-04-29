/* 1) Escribir una función que permita calcular el cubo de un número con punto decimal
*/

#include <iostream>
using namespace std;

double cubo(double numero1){
    return numero1 * numero1 * numero1;
}

int main() {
    double numero1 = 3.5;
    double r = 0;

    r = cubo (numero1);
    cout << "El cubo de " << numero1 << "Es:" << r << endl;

}




