// Se ingresa por teclado la categoría de un socio del club Deportivo y su antigüedad en
// años. Las categorías posibles son A, B y C.
// Determinar el valor de la cuota que le corresponde pagar a un socio de acuerdo a la
// siguiente tabla

#include <iostream>
using namespace std;

int main () {
    int antiguedad, categoria, A= 100, B= 200, C= 300; // A, B, y C son las unicas categorias que podemos ingresar
    
    cout << "Ingrese la categoria del socio (1 para A, 2 para B, 3 para C): " << endl;
    cin >> categoria;
    cout << "Ingrese la antiguedad del socio en años: " << endl;
    cin >> antiguedad;
    if (categoria == 1) { // Categoria A
        if (antiguedad < 10) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << A << endl;
        } else if (antiguedad >= 10 && antiguedad <= 20) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << A * 1.20 << endl;
        }
        else if (antiguedad > 20) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << A * 1.30 << endl;
        }
        
    } else if (categoria == 2) {
        if (antiguedad < 10) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << B << endl;
        } else if (antiguedad >= 10 && antiguedad <= 20) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << B * 1.15 << endl;
        } else if (antiguedad > 20) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << B * 1.25 << endl;
        }

    } else if (categoria == 3) {
        if (antiguedad < 10) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << C << endl;
        } else if (antiguedad >= 10 && antiguedad <= 20) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << C * 1.10 << endl;
        } else if (antiguedad > 20) {
            cout << "El valor de la cuota que le corresponde pagar al socio es: " << C * 1.20 << endl;
        }
        
    }
    else {
        cout << "La categoria ingresada no es valida, por favor ingrese una categoria valida (1 para A, 2 para B, 3 para C)" << endl;
    }

    return 0;
}

