#include <iostream>

using namespace std;

int main ()
{
	int entrada = 6, a = 1, b = 1, res = 0;

	/* Mostrar comentarios en pantalla */
	cout << "Entrada" << entrada << endl;
	cout << "Salida:" << endl;

	cout << a << endl;
	cout << b << endl;

	for (int i = 0; i < entrada; i++) {
		res = a + b;
		a = b;
		b = res;	


		cout << b << endl;
	}

	return 0;
}