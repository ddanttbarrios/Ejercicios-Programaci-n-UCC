/* 
todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria
Estructura de control repetitiva (do while):

7) Existen 1000 unidades de un determinado producto. Mientras existan más de 200 se
pueden seguir realizando entregas. Si la cantidad baja de 200 debe notificarse un alerta.


*/

#include <iostream>
using namespace std;

int main() {
    int unidades = 1000; // Inicializa la cantidad de unidades disponibles

    do { // El bloque de código dentro del do se ejecutará al menos una vez antes de verificar la condición
        cout << "Unidades disponibles: " << unidades << endl; // Muestra la cantidad actual de unidades
        cout << "Ingrese la cantidad a entregar (0 para finalizar): ";
        int entrega;
        cin >> entrega; // Lee la cantidad a entregar ingresada por el usuario

        if (entrega == 0) { // Si el usuario ingresa 0, se termina el proceso de entregas
            break;
        }

        if (entrega > unidades) { // Verifica si la cantidad a entregar es mayor que las unidades disponibles
            cout << "Error: No hay suficientes unidades para entregar esa cantidad." << endl;
            continue; // Continúa con la siguiente iteración sin restar unidades
        }

        unidades -= entrega; // Resta la cantidad entregada de las unidades disponibles

        if (unidades < 200) { // Si las unidades bajan de 200, muestra una alerta
            cout << "Alerta: Quedan menos de 200 unidades disponibles!" << endl;
        }
    } while (unidades > 0); // Continúa el bucle mientras haya unidades disponibles

    cout << "Proceso finalizado. Unidades restantes: " << unidades << endl;

    return 0;
}

