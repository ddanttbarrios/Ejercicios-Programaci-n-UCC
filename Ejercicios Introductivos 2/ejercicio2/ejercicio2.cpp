//mostrar el perimetro de una circunferencia siempre y cuando el radio sea mayor a 0

#include <iostream> 
using namespace std;

int main () {
    float radio, perimetro;

    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;

    if (radio > 0) {
        perimetro = 2 * 3.1416 * radio;
        cout << "El perimetro de la circunferencia es: " << perimetro << endl;
    } else {
        cout << "El radio debe ser mayor a 0." << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Intento " << i + 1 << ": Ingrese un radio valido: ";
            cin >> radio;
            if (radio > 0) {
                perimetro = 2 * 3.1416 * radio;
                cout << "El perimetro de la circunferencia es: " << perimetro << endl;
                break;
            } else {
                cout << "El radio debe ser mayor a 0." << endl;
            }
        }
    }
   
    return 0;


}
