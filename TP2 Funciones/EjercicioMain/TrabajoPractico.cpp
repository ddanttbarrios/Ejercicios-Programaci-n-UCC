//  1) Escriba una función que reciba como parámetros 2 números, y retorne la suma de ambos
// no denemos usar variables globales, ni tampoco podemos usar variables locales dentro de la función, es decir, la función debe retornar directamente el resultado de la suma sin almacenar el resultado en una variable local.


#include <iostream>
using namespace std;

// Function prototypes

int sumar(int a, int b) {
    return a + b; // Retorna directamente la suma de a y b
}

// 2) Escriba una función que tenga un argumento de tipo entero, y que devuelva la letra P, si es
 // positivo, N si es negativo y C si es cero.
char evaluarNumero(int numero) {
    if (numero > 0) {
        return 'P'; // Retorna 'P' si el número es positivo
    } else if (numero < 0) {
        return 'N'; // Retorna 'N' si el número es negativo
    } else {
        return 'C'; // Retorna 'C' si el número es cero
    }
}


// 3) La función debe recibir como parámetro 2 números, y debe devolver como resultado el mayor
// de ellos.
int mayor(int a, int b) {
    return (a > b) ? a : b; // operador ternario // le tengo que preguntar al profe si ya se puede usar o hago el if/else

}

// 4) Obtener una función que calcule la factorial de un número n
int factorial(int nfactorial) {
    if (nfactorial < 0) {
        return -1; // Retorna -1 para números negativos, ya que el factorial no está definido
    } else if (nfactorial == 0 || nfactorial == 1) {
        return 1; // El factorial de 0 y 1 es 1
    } else {
        int resultado = 1;
        for (int i = 2; i <= nfactorial; i++) {
            resultado *= i; // Multiplica resultado por i en cada iteración
        }
        return resultado; 
    }
}

// 5) Elabore un programa que lea las edades y los nombres de dos mujeres que son familiares, e
// implemente una función que devuelva el nombre de la madre.

int funcionMadre(int edadMujer1, int edadMujer2, char Mujer1, char Mujer2) {
    if (edadMujer1 > edadMujer2) {
        return Mujer1; // Retorna el nombre de la mujer 1 si es mayor
    } else if (edadMujer2 > edadMujer1) {
        return Mujer2; // Retorna el nombre de la mujer 2 si es mayor
    } else {
        return 'E'; // Retorna 'E' si ambas mujeres tienen la misma edad (empate)
    }
}

// 6). Dada una medida de tiempo expresada en horas, minutos y segundos con valores arbitrarios,
// obtenga un programa que transforme dicha medida en una expresión correcta. Por ejemplo,
// dada la medida 3h 118m 195s, el programa deberá obtener como resultado 5h 1m 15s.

int convertirTiempo(int horas, int minutos, int segundos) {
    // Convertir minutos a horas
    horas += minutos / 60;
    minutos = minutos % 60; // Obtener los minutos restantes

    // Convertir segundos a minutos
    minutos += segundos / 60;
    segundos = segundos % 60; // Obtener los segundos restantes

    return horas * 3600 + minutos * 60 + segundos; // Retorna el tiempo total en segundos
}

//  7) Obtener un programa que lea un número natural y diga si es o no es triangular.
// A saber: un número N es triangular si, y solamente si, es la suma de los primeros M números
// naturales, para algún valor de M.
// Ejemplo: 6 es triangular pues 6 = 1 + 2 + 3.

int LeerNumero(int numero, int suma, int m){
    if (suma == numero) {
        return m; // Retorna m si la suma es igual al número
    } else if (suma > numero) {
        return -1; // Retorna -1 si la suma supera el número, indicando que no es triangular
    } else {
        return LeerNumero(numero, suma + m + 1, m + 1); // Llama recursivamente con la siguiente suma y el siguiente valor de m
    }
}

//  8) Desarrollar un programa en el cual introduzca un número entero positivo e invierta los dígitos
 // del número. Mostrar en pantalla el número invertido.

 int invertirNumero(int numero) {
    int numeroInvertido = 0;
    while (numero > 0) {
        int digito = numero % 10; // Obtener el último dígito
        numeroInvertido = numeroInvertido * 10 + digito; // Agregar el dígito al número invertido
        numero /= 10; // Eliminar el último dígito del número original
    }
    return numeroInvertido; // Retorna el número invertido
}

// 9). Solicitar al usuario un valor entero y decir si es capicúa

bool esCapicua(int numero) {
    int numeroOriginal = numero; // Guardar el número original para compararlo después
    int numeroInvertido = 0;

    while (numero > 0) {
        int digito = numero % 10; // Obtener el último dígito
        numeroInvertido = numeroInvertido * 10 + digito; // Agregar el dígito al número invertido
        numero /= 10; // Eliminar el último dígito del número original
    }

    return numeroOriginal == numeroInvertido; // Retorna true si el número es capicúa, false en caso contrario
}

// 10). Escribir un programa que sume las cifras de un número entero positivo.

int enteroPositivo(int numero){
    int sumaCifras = 0;
    while (numero > 0) {
        int digito = numero % 10; // Obtener el último dígito
        sumaCifras += digito; // Sumar el dígito a la suma total
        numero /= 10; // Eliminar el último dígito del número original
    }
    return sumaCifras; // Retorna la suma de las cifras
}

// 11). Se dice que un número es hyperpar cuando todos sus dígitos son pares. Obtener una
// función que retorne True si el número pasado como parámetro es hyperpar o False en caso
// contrario.

bool esHyperpar(int numero) {
    while (numero > 0) {
        int digito = numero % 10; // Obtener el último dígito
        if (digito % 2 != 0) { // Verificar si el dígito es impar
            return false; // Retorna false si se encuentra un dígito impar
        }
        numero /= 10; // Eliminar el último dígito del número original
    }
    return true; // Retorna true si todos los dígitos son pares
}

/* 
 El jugador tira dos dados. Cada dato tiene seis caras. Las caras contienen 1, 2, 3, 4, 5 y 6
 puntos.

 Una vez que los dados se hayan detenido, se calcula la suma de los puntos en las dos
 caras superiores.
 - Si la suma es 7 u 11, el jugador gana y acaba el juego
 - Si la suma es 2, 3 o 12 el jugador pierde y acaba el juego
 - Si la suma es 4, 5, 6, 8, 9 ó 10 se repite la jugada hasta que gane o pierda

*/

int tirarDados() {
    int dado1 = rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6 para el primer dado
    int dado2 = rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6 para el segundo dado
    return dado1 + dado2; // Retorna la suma de los dos dados
}


int main() { 
    
    // trabajamos con la funcion sumar (consigna 1)
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    int resultado = sumar(num1, num2); // Llamada a la función sumar
    cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << endl;

    // trabajmos con la funcion evaluar (consigna 2)
    int numero;
    cout << "Ingrese un número para evaluar: ";
    cin >> numero;
    char resultadoEvaluacion = evaluarNumero(numero); // Llamada a la función evaluarNumero
    cout << "El resultado de la evaluación es: " << resultadoEvaluacion << endl;

    // trabajamos con la funcion mayor (consigna 3)
    int a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    int resultadoMayor = mayor(a, b); // Llamada a la función mayor
    cout << "El mayor de " << a << " y " << b << " es: " << resultadoMayor << endl;

    //trabajamos con la funcion factorial (consigna 4)

    int nfactorial;
    cout << "Ingrese el numero a evaluar: ";
    cin >> nfactorial;
    int ResultadoFactorial = factorial(nfactorial); // Llamada a la función factorial
    cout << "El factorial de " << nfactorial << "es: " << ResultadoFactorial << endl;

    //trabajamos con la funcion funcionMadre (consigna 5)

    int edadMujer1, edadMujer2;
    char Mujer1, Mujer2;
    cout << "Ingrese el nombre de la primera mujer: ";
    cin >> Mujer1;
    cout << "Ingrese la edad de la primera mujer: ";
    cin >> edadMujer1;
    cout << "Ingrese el nombre de la segunda mujer: ";
    cin >> Mujer2;
    cout << "Ingrese la edad de la segunda mujer: ";
    cin >> edadMujer2;
    char resultadoMadre = funcionMadre(edadMujer1, edadMujer2, Mujer1, Mujer2); // Llamada a la función funcionMadre
    if (resultadoMadre == 'E') {
        cout << "Ambas mujeres tienen la misma edad. No se puede determinar quién es la madre." << endl;
    } else {
        cout << "La madre es: " << resultadoMadre << endl;
    }
    
    //trabajamos con la funcion convertirTiempo (consigna 6)
    int horas, minutos, segundos;
    cout << "Ingrese las horas: ";
    cin >> horas;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    cout << "Ingrese los segundos: ";
    cin >> segundos;
    int tiempoTotalSegundos = convertirTiempo(horas, minutos, segundos); // Llamada a la función convertirTiempo
    cout << "El tiempo total en segundos es: " << tiempoTotalSegundos << "segundos" << endl;

    //trabajamos con la funcion LeerNumero (consigna 7)
    int numeroTriangular;
    cout << "Ingrese un número para verificar si es triangular: ";
    cin >> numeroTriangular;
    int resultadoTriangular = LeerNumero(numeroTriangular, 0, 1); // Llamada a la función LeerNumero
    if (resultadoTriangular == -1) {
        cout << numeroTriangular << " no es un número triangular." << endl;
    } else {
        cout << numeroTriangular << " es un número triangular, ya que es la suma de los primeros " << resultadoTriangular << " números naturales." << endl;
    }

    //trabajamos con la funcion invertirNumero (consigna 8)
    int numeroInvertir;
    cout << "Ingrese un número entero positivo para invertir: ";
    cin >> numeroInvertir;
    int resultadoInvertido = invertirNumero(numeroInvertir); // Llamada a la función invertirNumero
    cout << "El número invertido es: " << resultadoInvertido << endl;


    // trabajamos con la funcion esCapicua (consigna 9)

    int numeroCapicua;
    cout << "Ingrese un número entero para verificar si es capicúa: ";
    cin >> numeroCapicua;
    if (numeroCapicua < 0) {
        cout << "Los números negativos no pueden ser capicúas." << endl;
    } else {
    bool resultadoCapicua = esCapicua(numeroCapicua); // Llamada a la función esCapicua
    if (resultadoCapicua) {
        cout << numeroCapicua << " es un número capicúa." << endl;
    } else {
        cout << numeroCapicua << " no es un número capicúa." << endl;
    }
    }


    // trabajamos con la funcion enteroPositivo (consigna 10)
    int numeroSumaCifras;
    cout << "Ingrese un número entero positivo para sumar sus cifras: ";
    cin >> numeroSumaCifras;
    if (numeroSumaCifras < 0) {
        cout << "Los números negativos no son válidos para esta operación." << endl;
    } else {
        int resultadoSumaCifras = enteroPositivo(numeroSumaCifras); // Llamada a la función enteroPositivo
        cout << "La suma de las cifras de " << numeroSumaCifras << " es: " << resultadoSumaCifras << endl;
    }

    // trabajamos con la funcion esHyperpar (consigna 11)
    int numeroHyperpar;
    cout << "Ingrese un número entero para verificar si es hyperpar: ";
    cin >> numeroHyperpar;
    if (numeroHyperpar < 0) { // Verificar que el número sea positivo, ya que los números negativos no pueden ser hyperpares
        cout << "Los números negativos no son válidos para esta operación." << endl;
    } else {
        bool resultadoHyperpar = esHyperpar(numeroHyperpar); // Llamada a la función esHyperpar
        if (resultadoHyperpar) {
            cout << numeroHyperpar << " es un número hyperpar." << endl;
        } else { // Si el resultado es false, significa que el número no es hyperpar
            cout << numeroHyperpar << " no es un número hyperpar." << endl;
        }
    }

    // trabajamos con la funcion tirarDados (consigna 12)

    int resultadoDados = tirarDados(); // Llamada a la función tirarDados
    cout << "La suma de los dados es: " << resultadoDados << endl;
    if (resultadoDados == 7 || resultadoDados == 11) {
        cout << "¡Felicidades! Has ganado." << endl;
    } else if (resultadoDados == 2 || resultadoDados == 3 || resultadoDados == 12) {
        cout << "Lo siento, has perdido." << endl;
    } else {
        cout << "La suma es " << resultadoDados << ". Repite la jugada hasta que ganes o pierdas." << endl;

        while (true) {
            resultadoDados = tirarDados(); // Llamada a la función tirarDados para repetir la jugada
            cout << "La suma de los dados es: " << resultadoDados << endl;
            if (resultadoDados == 7 || resultadoDados == 11) {
                cout << "¡Felicidades! Has ganado." << endl;
                break; // Salir del bucle si el jugador gana
            } else if (resultadoDados == 2 || resultadoDados == 3 || resultadoDados == 12) {
                cout << "Lo siento, has perdido." << endl;
                break; // Salir del bucle si el jugador pierde
            } else {
                cout << "La suma es " << resultadoDados << ". Repite la jugada hasta que ganes o pierdas." << endl;
            }
        }
       
    }

    return 0;
}


