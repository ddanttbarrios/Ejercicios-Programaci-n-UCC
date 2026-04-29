// Escribir una función que calcule la cantidad de veces que un número está contenido en
// otro.

#include <iostream>
using namespace std;

int cantidadVeces(int num1, int num2) {
    if (num2 == 0) {
        return -1; // Retorna -1 para evitar división por cero
    }
    return num1 / num2; // Retorna la cantidad de veces que num2 está contenido en num1
}

int main(){
    int num1 = 10;
    int num2 = 2;
    int r = 0; // Variable para almacenar el resultado de la función cantidadVeces
    r = cantidadVeces(num1, num2);
    cout << "El numero " << num2 << " esta contenido " << r << " veces en el numero " << num1 << endl;
    
}


