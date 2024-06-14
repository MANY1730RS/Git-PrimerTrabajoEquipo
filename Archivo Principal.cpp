

#include <iostream>
#include <string>

using namespace std;

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

}

void Funcion2()
{
	
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