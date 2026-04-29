//  Escribir una función que permita determinar si un número es positivo, negativo o cero.


#include <iostream>
using namespace std;

double determinacionNumero(double numero){
    if(numero > 0){
        cout << "El numero es positivo" << endl;
        return 1;
    }

    else if (numero < 0){
        cout << "El numero es negativo" << endl;
        return -1;
    }

    else {
        cout << "El numero es igual a cero" << endl;     
        return 0;  
    }
}

int main(){
    double numero = 0;
    double r = 0;

    cout << "Ingrese el numero del que desea determinar si es positivo, negativo o cero: " << endl;
    cin >> numero;
    
    r = determinacionNumero(numero);

}


