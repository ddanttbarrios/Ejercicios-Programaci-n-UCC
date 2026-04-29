// Escribir una función que calcule el monto a pagar en una compra. Los parámetros a recibir son los siguientes:
//  Cantidad
//  Precio
//  sPorcentaje de descuento

#include <iostream>
using namespace std;

double calcularMontoAPagar(int cantidad, double precio, double porcentajeDescuento) {
    double montoTotal = cantidad * precio;
    double montoDescuento = montoTotal * (porcentajeDescuento / 100);
    return montoTotal - montoDescuento;
}

int main() {
    int cantidad;
    double precio, porcentajeDescuento;

    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;

    cout << "Ingrese el precio por unidad: ";
    cin >> precio;

    cout << "Ingrese el porcentaje de descuento: ";
    cin >> porcentajeDescuento;

    double montoAPagar = calcularMontoAPagar(cantidad, precio, porcentajeDescuento);
    cout << "El monto a pagar es: " << montoAPagar << endl;

    return 0;
}
