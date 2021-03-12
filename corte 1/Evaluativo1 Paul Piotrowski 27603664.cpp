// Programa para realizar un registro de las ganacias mensuales
// Primero declaramos las variables y obtenemos las entradas para llenarlas
#include <iostream>
using namespace std;
main ()
{

// Variables declaradas
int edad, cedula;
double costo_ht, pago, pago_final, costo_extra, dinero, horas_t, horas_e;
string nombre, apellido, nacimiento;	
dinero = 8;
// Escribe el usuario los valores de cada variable
costo_ht = 8;

cout << "Escriba su nombre: " << endl;
getline(cin, nombre);

cout << "Escriba su apellido: \n";
cin >> apellido;

cout << "Escriba su cedula: " << endl;
cin >> cedula;

cout << "Escitba su fecha de nacimiento: \n";
cin >> nacimiento;

cout << "Escriba su edad: \n";
cin >> edad;

cout << "Escriba las horas trabajadas: " << endl;
cin >> horas_t;

cout << "Escriba las horas extras: " << endl;
cin >> horas_e;
pago = 8 * horas_t;
double horas_super_e = horas_e - 10;
// Ahora utilizamos condicionales para saber el pago por el numero de horas extras trabajadas

costo_extra = (dinero + (dinero * 0.25)) * horas_super_e;

if (horas_e > 0 && horas_e <= 10)
{
	costo_ht = 	(costo_ht + (costo_ht * 0.10)) * horas_e;
	cout << "Las horas extras son: " << horas_e << " y el pago por ellas es " << costo_ht << endl;
}

if (horas_e > 10)
{
	costo_ht = 	(costo_ht + (costo_ht * 0.10)) * 10;
	costo_ht = costo_ht + costo_extra;
	cout << "Las horas extras son: " << horas_e << " y el pago por ellas es " << costo_ht << endl;
}
// Para asegurar que, cuando horas_e = 0, se muestre el pago por horas extras 0, se hace este condicional
if(costo_ht == 8)
{
	pago_final = pago;
	costo_ht = 0; 
}
else {
pago_final = pago + costo_ht;	
}

// Sumamos, en caso de haber, el costo de las horas extras por el pago de las horas normales y mostramos el resultado final	
cout << "El trabajdor " << nombre << " " << apellido << " de cedula de identidad " << cedula << " , que nacio el " << nacimiento << " y una edad de " << edad << endl;

cout << "El pago total es: " << pago_final;
return 0;
}
