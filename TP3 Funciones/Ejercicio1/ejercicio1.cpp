

#include <iostream>
#include <string>
using namespace std;

/* 1) Escribir una función que permita mostrar un mensaje por pantalla con el siguiente
formato:


*************************************************************
                            Mensaje                             
*************************************************************
El mensaje a mostrar debe ser enviado por parámetro a la función

*/ 

void mostrarMensaje(string mensaje) { // Función que muestra el mensaje formateado
    cout << "*************************************************************" << endl;
    cout << "                            " << mensaje << "                             " << endl;
    cout << "*************************************************************" << endl;
}

// trabajamos con la funcion LeerNumero (consigna 7)

int main() {
    string mensaje;
    cout << "Ingrese el mensaje que desea mostrar: ";
    getline(cin, mensaje); // Leer el mensaje completo, incluyendo espacios
    mostrarMensaje(mensaje); // Llamada a la función mostrarMensaje para mostrar el mensaje formateado
    return 0;
}