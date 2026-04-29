// En el puerto de la ciudad, ingresan N contenedores. Cada contenedor es pesado y su
// peso se registra en una planilla de control. Realizar un algoritmo que permita calcular:
// Cantidad de contenedores registrados
//Promedio de Peso entre todos los contenedores.
//Cantidad de contenedores con peso mayor al límite máximo establecido por el puerto.
//(Este dato se debe ingresar antes del ingresar los datos de los contenedores)

#include <iostream>
using namespace std;

int main() {
    int contenedores, pesoc, limitepesomaximo, suma= 0, promedio;
    int i= 0;
    int contenedoresmayores = 0;

    cout << "Ingrese el numero de contenedores que ingresaron: " << endl << "(ACLARACION: Para finalizar de ingresar contenedores ingrese 0)" << endl;
    cin >> contenedores;

    cout << "Ingrese el limite de peso establecido por el puerto: " << endl;
    cin >> limitepesomaximo;

    while (contenedores > 0) {

        cout << "Ingrese el peso del contenedor " << i + 1 << ": " << endl;
        cin >> pesoc;
        suma += pesoc;
        i++;
        contenedores--; 

        if (pesoc > limitepesomaximo) {
            contenedoresmayores++;
        }
        
    }
    promedio = suma / i;
    cout << "La cantidad de contenedores registrados es: " << i << endl;
    cout << "El promedio de peso entre todos los contenedores es: " << promedio << endl;
    cout << "La cantidad de contenedores con peso mayor al limite maximo establecido por el puerto es: " << contenedoresmayores << endl;

   
                   
       
}
