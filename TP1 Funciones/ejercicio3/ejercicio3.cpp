//  Escribir una función que permita determinar el menor de dos números

#include <iostream>
using namespace std;

int valorMenor (int numero1, int numero2){
    if (numero1 > numero2) {
        return numero2;
    }

    else if (numero1 < numero2) {
        return numero1;
    }   

    else {
        return 0; 
    }
}


int main(){
    int numero1 = 8;
    int numero2 = 8;
    int r = 0;

    r = valorMenor (numero1, numero2);
    if (r == 0){
        cout << "Ambos numeros resultan iguales, por lo tanto no existe numero menor" << endl; 
    }
    else{ 
        cout << "El menor entre los numeros " << numero1 << " Y " << numero2 << " Es: " << r << endl;
    
    }
    

}

