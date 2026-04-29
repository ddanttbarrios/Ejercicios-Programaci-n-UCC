/* 1) Se desea calcular la distancia recorrida (m) por un móvil que tiene velocidad
constante (m/s) durante un tiempo T (Sg), considerar que es un MRU
(Movimiento Rectilíneo Uniforme)
*/

#include <iostream>
using namespace std;

int main() {
    float v, t, d; // v: velocidad, t: tiempo, d: distancia // la variable float se utiliza para permitir decimales en los valores de velocidad, tiempo y distancia
    
    cout << "Ingrese la velocidad (m/s): ";
    cin >> v;
    
    cout << "Ingrese el tiempo (s): ";
    cin >> t;
    
    d = v * t;
    
    cout << "La distancia recorrida es: " << d << " m" << endl;
    
    return 0;
}