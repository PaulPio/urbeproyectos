// Programa para ingresar X cantidad de artículos y obtener diferentes salidas
#include<iostream>
using namespace std;

main (){
	
	 double can_1, can_2, pre_1, pre_2;
  string prod_1, prod_2, cod_1, cod_2, mayoritario, can_mayor, continuar;
  bool final = true;
  int proceso = 0;
while(final){

	cout << "Nombre de producto: \n";
  	cin >> prod_1;

  	cout << "Numero de productos: \n";
  	cin >> can_1;

 	 cout << "Numero de codigo: \n";
 	 cin >> cod_1;

	  cout << "Precio: \n";
	  cin >> pre_1;

  //2 producto
	 cout << "Nombre de producto: \n";
	  cin >> prod_2;

  	cout << "Numero de productos: \n";
 	 cin >> can_2;

  	cout << "Numero de codigo: \n";
  	cin >> cod_2;

  	cout << "Precio: \n";
  	cin >> pre_2;
  // Primero comparamos los precios
  if (pre_1 > pre_2) {
    mayoritario = prod_1;
    cout << "El producto con mayor precio es: " << mayoritario << ", con un precio de: " << pre_1 << endl;
  }
  else if (pre_1 < pre_2) {
    mayoritario = prod_2;
  cout << "El producto con mayor precio es: " << mayoritario << ", con un precio de: " << pre_2 << endl;
  }
  else{
    mayoritario = prod_2;
    cout << "Ambos productos tienen el mismo precio de: " << mayoritario << endl;
  }

  // Ahora comparamos la cantidad
  if (can_1 > can_2) {
    can_mayor = prod_1;
    cout << "El producto con mayor cantidad es: " << can_mayor << ", con un numero de articulos de: " << can_1 << endl;
  }
  else if(can_1 < can_2){
    can_mayor = prod_2;
    cout << "El producto con mayor cantidad es: " << can_mayor << ", con un numero de articulos de: " << can_2 << endl;
  }
  else{
    cout << "Ambos productos tienen la misma cantidad de articulos de: " << can_1 << endl;
  }
  cout << "Desea continuar? (Y | N)" << endl;
	cin >> continuar;
	
	if (continuar == "N"){
		final = false;
		cout << "Hasta luego, que pase un buen dia.";
	}
  
}
}
