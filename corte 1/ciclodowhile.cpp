//Registro de estudiantes
#include <iostream>

using namespace std;

main() {
	int sys = 1;	
	int est = 0;
	
	string nombre;
	int edad;
	
	do {
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
	
		cout << "Desea continuar con el programa? 1: Si - 0: No";
		cin >> sys;
		
	}
	while(sys == 1);
		
}
