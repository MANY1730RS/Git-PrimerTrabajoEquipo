l/*Escriba un programa que reciba como entrada un número natural, e indique si es 
primo o compuesto*/

#include <iostream>

using namespace std;

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

int main() {
  int numero;

  cout << "Ingresa un número natural porfa: ";
  cin >> numero;

  if (esPrimo(numero)) {
    cout << numero << " es un lo que se conoce como un número primo" << endl;
  } else {
    cout << numero << " es lo que se conoce como un número compuesto" << endl;
  }

  return 0;
}