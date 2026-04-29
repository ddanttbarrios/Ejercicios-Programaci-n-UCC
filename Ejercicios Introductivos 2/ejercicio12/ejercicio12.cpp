//  La compañía del problema anterior, adquiere dos máquinas más para realizar el
//proceso de producción. Modificar el programa anterior teniendo en cuenta que, a demás
//de la información solicitada anteriormente, se debe mostrar:
//Cantidad total de piezas producidas por máquina.
//Porcentaje de piezas defectuosas producidas por máquina.


#include <iostream>
using namespace std;

int main(){
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

}