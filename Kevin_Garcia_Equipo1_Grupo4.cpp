#include <iostream>
using namespace std;

int main()
{
    int n, i;
    long double factorial;
	cout << "Introduce el numero: " << endl;
	cin >> n;
    factorial=1;
    for(i=1;i<=n;i++)
    factorial = factorial * i;
    cout << endl << "El factorial del numero es " << factorial << endl;

    return 0;
}