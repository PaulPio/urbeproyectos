#include <iostream>
#include <math.h>

using namespace std;

main () {
	
	/* 
		Tipos de datos
		Enteros 	- int 	 (2 4 15 22 33 100)
		Flotantes 	- float  (2.25, 9.45, 15.33) {8 decimales}
		Dobles 		- double (2.55, 9.45, 15.33) {16 decimales}
		String      - caracteres (hola como estas)
		char        - literal 
	*/
	
	int x;
	int v1, v2, suma, resta, multi, divi;

	cout << "Introducir numero: ";
	cin >> x;
	
	cout << "El numero es: " << x << endl;

	cout << "*** OPERACIONES ***" << x << endl;
	
	cout << "Introducir valor 1: ";
	cin >> v1;
	
	cout << "Introducir valor 2: ";
	cin >> v2;
	
	suma = v1 + v2;
	resta = v1 - v2;
	multi = v1 * v2;
	divi = v1 / v2;
	
	cout << "La suma es = " << suma << endl;
	cout << "La resta es = " << resta << endl;
	cout << "La multiplicacion es = " << multi << endl;
	cout << "La division es = " << divi << endl;
	
	cout << "*** OPERACIONES AVANZADAS***" << endl;
	double base, expo;
	
	cout << "BASE: ";
	cin >> base;
	
	cout << "EXPO: ";
	cin >> expo;
	
	double pote = pow(base, expo);
	cout << "La operacion es = " << pote << endl;
	
	double raiz;
	cout << "Introducir valor para la raiz cuadrada: ";
	cin >> raiz;
	
	double valor_raiz = sqrt(raiz);
	cout << "La raiz es = " << valor_raiz << endl;
	
	
}
