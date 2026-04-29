//Ingresar las edades de 10 personas y hallar el promedio.

#include <iostream>
using namespace std;

int main () {
    int edades[10];
    
    cout << "Porfavor, ingrese las edades correspondientes a cada alumno: " << endl;
    
        for (int contador1 = 0; contador1 < 10; contador1++) {       // contador1 es el contador para el primer ciclo for, esa variable se declara aqui mismo con int y se iguala a 0, seguido a eso se establece la condicion de que el ciclo se ejecute mientras contador1 sea menor a 10, y por ultimo se le suma 1 a contador1 cada vez que se ejecute el ciclo, esto es para que el ciclo se ejecute exactamente 10 veces, una por cada alumno.
        cout << "Alumno " << contador1 + 1 << ": ";        // ahora ponemos la variable a imprimir, que es contador1, pero como contador1 empieza en 0, le sumamos 1 para que se imprima correctamente el numero del alumno, es decir, que el primer alumno sea el numero 1 y no el numero 0.
        cin >> edades[contador1];        // ahora se le asigna a cada posicion del arreglo edades el valor que el usuario ingrese, y para eso se utiliza contador1 como indice del arreglo, esto es porque contador1 va a ir desde 0 hasta 9, lo que corresponde a las posiciones del arreglo edades.
    }

    int suma = 0;
    for (int contador2 = 0; contador2 < 10; contador2++) {       // contador2 es el contador para el segundo ciclo for, esta variable se declara aqui mismo con int y se iguala a 0, seguido a eso se establece la condicion de que el ciclo se ejecute mientras contador2 sea menor a 10, y por ultimo se le suma 1 a contador2 cada vez que se ejecute el ciclo, esto es para que el ciclo se ejecute exactamente 10 veces, una por cada alumno.
        suma += edades[contador2];             // ahora se le suma a la variable suma el valor de cada posicion del arreglo edades, y para eso se utiliza contador2 como indice del arreglo, esto es porque contador2 va a ir desde 0 hasta 9, lo que corresponde a las posiciones del arreglo edades.
    }   

    float promedio = static_cast<float>(suma) / 10; // ahora se calcula el promedio de las edades, para eso se divide la variable suma entre 10, que es el numero de alumnos, y se utiliza static_cast<float> para convertir el resultado a un numero decimal, ya que el promedio puede ser un numero decimal.
    cout << "El promedio de las edades es: " << promedio << endl;

    return 0;
    
}


