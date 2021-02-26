//Registro de estudiantes
#include <iostream>

using namespace std;

main() {
	
	int est = 0;
	int i = 0;
	string nombre;
	int edad;

	cout << "Ingrese cant. de estudiantes: ";
	cin >> est;
	
	while(i<est) {
		
		cout << "Nombre: ";
		cin >> nombre;
		
		cout << "Edad: ";
		cin >> edad;
		
		if(edad >= 18) {
			cout << "El estudiante " << nombre << " es mayor de edad" << endl;
		}
		else {
			cout << "El estudiante " << nombre << " es menor de edad" << endl;
		}
	
	}
	
}
