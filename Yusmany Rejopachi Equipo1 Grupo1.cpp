#include <iostream>

using namespace std;

int main() {
    int altura, ancho;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    cout << "Ingrese el ancho del rectangulo: ";
    cin >> ancho;

    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < ancho; ++j) {
            if (i == 0 || i == altura - 1 || j == 0 || j == ancho - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
