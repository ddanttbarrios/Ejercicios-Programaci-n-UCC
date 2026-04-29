// En una veterinaria se desea saber el promedio de edad de gatos y perros (por
//separados) que fueron asistidos durante un mes. En total se registran N animales. La
// veterinaria solo atiende gatos y perros

// para estudio: esta muy parecida a la estructura del ejercicio 5.1, pero con la diferencia de que ahora se tienen dos ciclos for, uno para ingresar las edades de los gatos y otro para ingresar las edades de los perros, y luego se calcula el promedio de cada uno por separado.

#include <iostream>
using namespace std;

int main () {
    float gatos = 0, perros = 0, sumagatos = 0, sumaperros = 0;
    int edadgatos = 0, edadperros = 0;
     

    cout << "Ingrese la cantidad de gatos " << endl;
    cin >> gatos;

    cout << "Ingrese la cantiadad de perros " << endl;
    cin >> perros;

    for (int i = 0; i < gatos; i++) {
        cout << "Ingrese la edad del gato " << i + 1 << endl;
        cin >> edadgatos;
        sumagatos += edadgatos;
    }

    for (int i = 0; i < perros; i++) {
        cout << "Ingrese la edad del perro " << i + 1 << endl;
        cin >> edadperros;
        sumaperros += edadperros;
    }

    float promediogatos = sumagatos / gatos;
    float promedioperros = sumaperros / perros;

    cout << "El promedio de edad de los gatos es: " << promediogatos << endl;
    cout << "El promedio de edad de los perros es: " << promedioperros << endl;

    return 0;

}
