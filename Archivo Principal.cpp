

#include <iostream>
#include <string>

using namespace std;
// Función para verificar si una cadena es un palíndromo
bool esPalindromo(string cadena) {
    int longitud = cadena.length();
    for (int i = 0; i < longitud / 2; i++) {
        if (cadena[i] != cadena[longitud - 1 - i]) {
            return false;
        }
        i += 6;
    }
    return true;
}

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= numero) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

void mostrarMenu() {
    cout << "\nSeleccione una opción: \n";
    cout << "1. Verificar si una cadena es un palíndromo\n";
    cout << "2. Verificar si un número es primo\n";
    cout << "3. Calcular el factorial de un número\n";
    cout << "4. Dibujar un rectángulo de asteriscos\n";
    cout << "5. Salir\n";
    cout << "Ingrese el número de opción: ";
}

void Funcion1()
{
cin.ignore(); // Limpiar el buffer de entrada
                string cadena;
                cout << "Ingrese una cadena de texto: ";
                getline(cin, cadena);
                if (esPalindromo(cadena)) {
                    cout << cadena << ": En efecto es un palíndromo." << endl;
                } else {
                    cout << cadena << ": No es un palíndromo." << endl;
                }

}

void Funcion2()
{
		int numero;
                cout << "Ingresa un número natural porfa: ";
                cin >> numero;
                if (esPrimo(numero)) {
                    cout << numero << " es lo que se conoce como un número primo" << endl;
                } else {
                    cout << numero << " es lo que se conoce como un número compuesto" << endl;
                }
}

void Funcion3()
{

}

void Funcion4()
{

}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1: {
                Funcion1();

                break;
            }
            case 2: {
                Funcion2();

                break;
            }
            case 3: {
                Funcion3();

                break;
            }
            case 4: {
                Funcion4();

                break;
            }
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, intente de nuevo." << endl;
        }
    } while(opcion != 5);

    return 0;
}