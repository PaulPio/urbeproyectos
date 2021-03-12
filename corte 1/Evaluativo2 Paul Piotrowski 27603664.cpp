#include <iostream>
using namespace std;

main(){
  int can_1, can_2, pre_1, pre_2, pre_mayor, pre_menor, cantidad_M, cantidad_m;
  string prod_1, prod_2, cod_1, cod_2, mayoritario, continuar, can_mayor, menor, can_menor;
  bool final = true;
  int proceso = 0;
  
  	
  	
// Realizamos un bucle for para hacer los articulos que queramos comparandalos uno a uno
while(final){
	cout << "Bienvenido user, cuantos articulos desea comparar? (minimo 2)" << endl;
  cin >> proceso;
	
if(proceso >= 2){ 
	// 1 producto
	
	cout << "Nombre de producto(1): \n";
  	cin >> prod_1;

  	cout << "Numero de productos: \n";
  	cin >> can_1;

 	 cout << "Numero de codigo: \n";
 	 cin >> cod_1;

	  cout << "Precio: \n";
	  cin >> pre_1;
	  
	//Los datos en default, es decir, el programa tomara como mayor al principio el prmer producto
	cantidad_M = can_1;
  	pre_mayor = pre_1;
    mayoritario = prod_1;
    can_mayor = prod_1;
    cantidad_m = can_1;
    pre_menor = pre_1;
    can_menor = prod_1;
    menor = prod_1;
  	
for(int i=2; i <= proceso; i++) {

	cout << "Nombre de producto(" << i << "): \n";
	cin >> prod_2;

  	cout << "Numero de productos: \n";
 	 cin >> can_2;

  	cout << "Numero de codigo: \n";
  	cin >> cod_2;

  	cout << "Precio: \n";
  	cin >> pre_2;
  // Primero comparamos los precios
  	 
  if (pre_2 > pre_mayor) {
    mayoritario = prod_2;
    pre_mayor = pre_2;
  } 
  if (pre_2 < pre_menor){
  	menor = prod_2;
  	pre_menor = pre_2;
  }	
  // Ahora comparamos la cantidad
  if (can_2 > cantidad_M) {
  	cantidad_M = can_2;
  	
  	can_mayor = prod_2;
  }
 if(can_2 < cantidad_m){
  cantidad_m = can_2;
  can_menor = prod_2;
  }	
}
	// se imprimen los resultados
	cout << "El producto con mayor precio es: " << mayoritario << ", con un precio de: " << pre_mayor << endl;
	cout << "El producto con menor precio es: " << menor << ", con un precio de: " << pre_menor << endl;
	
	cout << "El producto con mayor cantidad es: " << can_mayor << ", con un numero de articulos de: " << cantidad_M << endl;
	cout << "El producto con menor cantidad es: " << can_menor << ", con un numero de articulos de: " << cantidad_m << endl;		
}
// por si ocurre un error
else {
	cout << "Se introdujo mal un dato.\n";
}
// Pregunta al user si quiere volver a utilizar programa

cout << "Desea continuar? (Y | N)" << endl;
	cin >> continuar;
	
if (continuar == "N"){
		final = false;
		cout << "Hasta luego, que pase un buen dia.";
}
}
}


