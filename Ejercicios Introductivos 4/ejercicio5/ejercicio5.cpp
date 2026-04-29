/*
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

5. Sistema de Ventas con Metas y Comisiones
Consigna: Una empresa tiene un vendedor que ingresa sus ventas diarias. No se sabe
cuántas ventas hizo (usar un valor centinela como -1 para finalizar).
● Lógica de negocio:
1. Si la venta es menor a $500, no hay comisión.
2. Si la venta es entre $500 y $1500, la comisión es del 5%.
3. Si la venta supera los $1500, la comisión es del 10%.
● Resultados esperados:
1. Total recaudado en ventas.
2. Total que la empresa debe pagar en comisiones.
3. El "Récord": Indicar en qué número de venta (posición) se produjo la venta
más alta y de cuánto fue.
4. Informar si el vendedor cumplió la meta de "Vendedor Estrella" (esto ocurre si
realizó más de 5 ventas superiores a $1000).

*/

#include <iostream>
using namespace std;

int main() {
    float venta, totalVentas = 0, totalComisiones = 0, ventaMasAlta = 0;
    int posicionVentaMasAlta = 0, contadorVentasSuperiores1000 = 0, numeroVenta = 0;

    cout << "Ingrese las ventas diarias (ingrese -1 para finalizar): " << endl;

    while (true) {
        cin >> venta;
        if (venta == -1) break; // Termina la carga de datos al ingresar -1

        totalVentas += venta; // Acumula el total de ventas
        numeroVenta++; // Incrementa el número de venta

        // Calcula la comisión según la lógica de negocio
        if (venta >= 500 && venta <= 1500) {
            totalComisiones += venta * 0.05; // Comisión del 5%
        } else if (venta > 1500) {
            totalComisiones += venta * 0.10; // Comisión del 10%
        }

        // Verifica si la venta actual es la más alta registrada
        if (venta > ventaMasAlta) {
            ventaMasAlta = venta; // Actualiza la venta más alta
            posicionVentaMasAlta = numeroVenta; // Actualiza la posición de la venta más alta
        }

        // Cuenta las ventas superiores a $1000 para determinar si se cumple la meta de "Vendedor Estrella"
        if (venta > 1000) {
            contadorVentasSuperiores1000++;
        }
    }

    // Mostrar resultados
    cout << "Total recaudado en ventas: $" << totalVentas << endl;
    cout << "Total que la empresa debe pagar en comisiones: $" << totalComisiones << endl;
    cout << "La venta más alta fue de $" << ventaMasAlta << " en la posición " << posicionVentaMasAlta << endl;
    cout << "¿Cumplió la meta de Vendedor Estrella? " << (contadorVentasSuperiores1000 > 5 ? "Sí" : "No") << endl;

    return 0;
}

