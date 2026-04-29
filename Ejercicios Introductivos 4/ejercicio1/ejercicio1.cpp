/*

todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

1. El Simulador de Cajero con Optimización de Billetes
Consigna: Crea un programa que simule un retiro de efectivo. El usuario ingresa un monto
entero (múltiplo de 10). El programa debe calcular la menor cantidad de billetes posible
utilizando denominaciones de $1000, $500, $200 y $100.
● Restricción: No usar divisiones sucesivas simples; usar un bucle para "ir
entregando" los billetes.
● Desafío Extra: Al finalizar, el programa debe preguntar si desea realizar otro retiro y,
al cerrar, mostrar el total de dinero entregado en el día y cuál fue el billete que más
se utilizó.


*/

#include <iostream>
using namespace std;

int main() {
    int monto, totalEntregado = 0;
    int billetes1000 = 0, billetes500 = 0, billetes200 = 0, billetes100 = 0;

    do {
        cout << "Ingrese el monto a retirar (múltiplo de 10): ";
        cin >> monto;

        if (monto % 10 != 0) {
            cout << "Error: El monto debe ser un múltiplo de 10." << endl;
            continue;
        }

        while (monto >= 1000) {
            monto -= 1000;
            billetes1000++;
        }
        while (monto >= 500) {
            monto -= 500;
            billetes500++;
        }
        while (monto >= 200) {
            monto -= 200;
            billetes200++;
        }
        while (monto >= 100) {
            monto -= 100;
            billetes100++;
        }

        int retiroTotal = billetes1000 * 1000 + billetes500 * 500 + billetes200 * 200 + billetes100 * 100;
        totalEntregado += retiroTotal;

        cout << "Billetes entregados: " << endl;
        cout << "$1000: " << billetes1000 << endl;
        cout << "$500: " << billetes500 << endl;
        cout << "$200: " << billetes200 << endl;
        cout << "$100: " << billetes100 << endl;

        char opcion;
        cout << "¿Desea realizar otro retiro? (s/n): ";
        cin >> opcion;

        if (opcion == 'n' || opcion == 'N') {
            break;
        }

    } while (true);

    cout << "Total de dinero entregado en el día: $" << totalEntregado << endl;

    // Determinar el billete más utilizado
    int maxBilletes = max(max(billetes1000, billetes500), max(billetes200, billetes100));
    if (maxBilletes == billetes1000) {
        cout << "El billete más utilizado fue el de $1000." << endl;
    } else if (maxBilletes == billetes500) {
        cout << "El billete más utilizado fue el de $500." << endl;
    } else if
    (maxBilletes == billetes200) {
            cout << "El billete más utilizado fue el de $200." << endl;
        } else {
            cout << "El billete más utilizado fue el de $100." << endl;
        }
     
    return 0;
    } 

