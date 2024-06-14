#include <iostream>
#include <string>

    using namespace std;

    bool esPalindromo(string cadena)
    {

        // Obtener la longitud de la cadena
        int longitud = cadena.length();

        // Comparar caracteres desde el principio y el final de la cadena
        for (int i = 0; i < longitud / 2; i++) {
            if (cadena[i] != cadena[longitud - 1 - i]) {
                return false;
            }
        }

        // Si no se encontró ninguna diferencia, la cadena es un palíndromo
        return true;
    }

    int main() {

        string cadena;

        // Solicitar al usuario que ingrese una cadena de texto
        cout << "Ingrese una cadena de texto: ";
        getline(cin, cadena);

        // Verificar si la cadena es un palíndromo
        if (esPalindromo(cadena)) {
            cout << cadena << ": En efecto es un palindromo." << endl;
        }
        else {
            cout << cadena << ": No es un palindromo." << endl;
        }

        return 0;
    }
//hola

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
