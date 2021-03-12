#include <iostream>

using namespace std;

main() {
	/*forma 1
	int tor[5];
	
	//forma 2
	int tor[] = {2,1,3,5,1};
	
	//forma 3*/
	
	int k;
	int index;
	cout << "Ingrese tamano de tor: ";
	cin >> index;
	cout <<"\nIngrese tamano de 2da dimension: ";
	cin >> k;
	int tor[index][k]; //5

	
/*	
	for(int i = 0; i < index; i++) {
		cout << "Posicion [" << i << "]: " << tor[i] << endl;
	}
	*/
int dato;
for (int i = 0; i < index; i++)
{
	for (int y = 0; y < k; y++)
	{
	cout << "Ingrese el valor [" << y << "] del arreglo\n";
	cin >> dato;
	tor[i][y] = dato;
	}
	
}

	cout << "\nMostrar valores del arreglo o tor" << endl;
	for (int i=0; i<index; i++){
		for (int j=0; j<k; j++){
			cout << tor[i][j] << ", ";
		}
		cout << endl;
	}

	/*
	int len = sizeof(tor)/sizeof(tor[0]);
	cout << len;*/
}
