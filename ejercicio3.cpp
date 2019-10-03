#include <iostream>

using namespace std;

int main ()
{
	int contador = 0, entrada = 0, n = 0, suma = 0;
	float x = 0;

	cout << "Número de datos: " << endl;
	cin >> n;

	for (int i = 0; i < n; i ++) {
		cout << "Ingrese número: " << endl;
		cin >> entrada;

		suma = suma + entrada;
	}

	x = suma / n;
	cout << "El resultado es: " << x << endl;

	return 0;
}