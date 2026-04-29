// Una compañía decide realizar el control de un lote de piezas producidas por una
// máquina. Las piezas deben tener un diámetro de 10 mm +- 10%.
// Realizar un programa que permita ingresar las medidas de N piezas por teclado y realizar
// el siguiente proceso:
//Contar las piezas que cumplen con la tolerancia especificada.
//Contar las piezas que no cumplen con la tolerancia dada.
//Calcular el el porcentaje de piezas buenas y malas con respecto al total de piezas
//ingresadas.

#include <iostream>
using namespace std;

int main () {
    double N, piezas_buenas = 0, piezas_malas = 0;
    double medida; 

    cout << "Ingrese el numero de piezas a controlar: " << endl;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese la medida de la pieza " << i + 1 << ": " << endl;
        cin >> medida; 
        

        if (medida >= 9 && medida <= 11) { // La medida debe estar entre 9 y 11 para ser considerada buena
            piezas_buenas++;
        } else {
            piezas_malas++;
        }
    }

    double porcentaje_buenas = piezas_buenas / N * 100;
    double porcentaje_malas = piezas_malas / N * 100;

    cout << "Cantidad de piezas buenas: " << piezas_buenas << endl;
    cout << "Cantidad de piezas malas: " << piezas_malas << endl;
    cout << "Porcentaje de piezas buenas: " << porcentaje_buenas << "%" << endl;
    cout << "Porcentaje de piezas malas: " << porcentaje_malas << "%" << endl;

    return 0;
}


