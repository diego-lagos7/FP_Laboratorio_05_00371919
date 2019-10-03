#include <iostream>



int main(int argc, char const *argv[])
{
	int f = 1;
	int opc = 0; 
	int a = 0, b = 0;
	int entrada = 6, fa = 1, fb = 1, res = 0;

	while (f) {
		cout << "**INGRESE UNA OPCION:**" << endl;
		cout << "1- Suma de dos números." << endl;
		cout << "2- Resta de dos números." << endl;
		cout << "3- Multiplicación de dos números." << endl;
		cout << "4- División de dos números." << endl;
		cout << "5- Fibonacci de un número." << endl;
		cout << "6- Factorial de un número." << endl;
		cout << "7- Salir." << endl;
		cout << "Opción: " << endl;

		cin >> opc;

		switch (opc) {
			case 1: 
				cout << "Ingrese dos números" << endl;
				cout << "a: ";
				cin >> a;
				cout << endl;
				cout << "b: " << endl;
				cin >> b;
				cout << endl;


				cout << "La suma es: " << (a + b) << endl;
				break;
			case 2: 
				cout << "Ingrese dos números" << endl;
				cout << "a: ";
				cin >> a;
				cout << endl;
				cout << "b: " << endl;
				cin >> b;
				cout << endl;


				cout << "La suma es: " << (a - b) << endl;
				break;
			case 3: 
				cout << "Ingrese dos números" << endl;
				cout << "a: ";
				cin >> a;
				cout << endl;
				cout << "b: " << endl;
				cin >> b;
				cout << endl;


				cout << "La suma es: " << (a * b) << endl;
				break;
			case 4: 
				cout << "Ingrese dos números" << endl;
				cout << "a: ";
				cin >> a;
				cout << endl;
				cout << "b: " << endl;
				cin >> b;
				cout << endl;


				cout << "La suma es: " << (a / b) << endl;
				break;
			case 5: 
				/* Mostrar comentarios en pantalla */
				cout << "Entrada" << entrada << endl;
				cout << "Salida:" << endl;

				cout << fa << endl;
				cout << fb << endl;

				for (int i = 0; i < entrada; i++) {
					res = fa + fb;
					fa = b;
					fb = res;	


					cout << fb << endl;
				}
				break;
			case 6: 
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
				break;
			case 7:
				f = 0;
				break;
			default:
				f = 0;
				break;
		}
	}

	return 0;
}