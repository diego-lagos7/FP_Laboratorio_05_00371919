#include <iostream>

using namespace std;

int main ()
{
	int factorial = 6, resultado = 1;

	if (factorial < 0) {
	   cout << "Entrada invalida. No se aceptan datos negativos" << endl;
	   return 0;
	}

	while (factorial > 0) {
		resultado *= factorial;
		factorial --;
	}

	cout << "El resultado es: " << resultado << endl;
	return 0;
}