/*

todos los ejercicios deben tener barras de comentarios explicando codigo, sintaxisis y operadores como ayuda memoria

2. El Radar de Velocidad y Promedios Móviles
Consigna: Se requiere controlar el flujo de una avenida. El programa recibirá velocidades
de vehículos una por una (un valor de 0 corta la carga).
● Requerimientos:
1. Informar cuántos vehículos superaron el límite de 60 km/h.
2. Calcular la velocidad máxima y la mínima registrada.
3. Complejidad: Determinar cuál fue la mayor "aceleración" entre dos vehículos
consecutivos (la diferencia absoluta de velocidad entre un auto y el anterior).
4. Indicar el porcentaje de vehículos infractores sobre el total.


*/

#include <iostream>
using namespace std;

int main() {
    int velocidad, contadorInfractores = 0, totalVehiculos = 0;
    int velocidadMaxima = 0, velocidadMinima = 9999, aceleracionMaxima = 0;
    int velocidadAnterior = -1; // Inicializa con un valor que no es posible para la primera comparación

    cout << "Ingrese las velocidades de los vehículos (0 para finalizar): " << endl;

    while (true) {
        cin >> velocidad;
        if (velocidad == 0) break; // Termina la carga de datos al ingresar 0

        totalVehiculos++;

        // Verificar si el vehículo es infractor
        if (velocidad > 60) {
            contadorInfractores++;
        }

        // Actualizar velocidad máxima y mínima
        if (velocidad > velocidadMaxima) {
            velocidadMaxima = velocidad;
        }
        if (velocidad < velocidadMinima) {
            velocidadMinima = velocidad;
        }

        // Calcular aceleración si no es el primer vehículo
        if (velocidadAnterior != -1) {
            int aceleracion = abs(velocidad - velocidadAnterior);
            if (aceleracion > aceleracionMaxima) {
                aceleracionMaxima = aceleracion;
            }
        }

        velocidadAnterior = velocidad; // Actualiza la velocidad anterior para la próxima comparación
    }

    // Mostrar resultados
    cout << "Cantidad de vehículos infractores: " << contadorInfractores << endl;
    cout << "Velocidad máxima registrada: " << velocidadMaxima << " km/h" << endl;
    cout << "Velocidad mínima registrada: " << velocidadMinima << " km/h" << endl;
    cout << "Mayor aceleración entre vehículos consecutivos: " << aceleracionMaxima << " km/h" << endl;

    if (totalVehiculos > 0) {
        double porcentajeInfractores = (static_cast<double>(contadorInfractores) / totalVehiculos) * 100;
        cout << "Porcentaje de vehículos infractores: " << porcentajeInfractores << "%" << endl;
    } else {
        cout << "No se ingresaron vehículos." << endl;
    }

    return 0;
}

