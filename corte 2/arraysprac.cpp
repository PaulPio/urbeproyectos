#include <iostream>
#include <string>
using namespace std;

main(){
/*
	int i = 3;
	int number[i][2] = {
			{1,2},
			{3,8},
			{2,9}			
			};
	
	string lis = "loa";
	string puma = "chaves " + lis;
	cout<< puma << endl;
	
	string y[3][2];
	
	y = {
  {"paul", lis},
  {"213298", "libro"}
};
	for (int i=0; i<3; i++){
		for (int j=0; j<2; j++){
			cout << y[i][j]<< endl;
		}
	}
	int len = sizeof(number)/sizeof(number[0]);
	cout << len;*/
	int cantidad, numeroso;
	cout << "Cuantos libros desea agregar?";
	cin >> cantidad;
	string libros[cantidad][2];
    cout << "Por favor ingrese la siguiente informacion de los Libros: \n";
    string titulo, autor;
    for(int i = 0; i < cantidad; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "\nTitulo: ";
        cin >> titulo;
        cout << "\nAutor: ";
        getline(cin,autor);
        libros[i][0] = titulo;
        libros[i][1] = autor;
    }

    system("pause");
	system("cls");
    for (int i=0; i<cantidad; i++){
		for (int j=0; j<2; j++){
			cout << libros[i][j] << ", ";

		}
		cout << endl;
	}
			}
			
		
