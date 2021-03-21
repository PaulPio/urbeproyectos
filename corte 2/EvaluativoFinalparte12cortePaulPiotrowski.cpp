//Evaluativo final del 2 corte. Primera Parte
//Realizar un programa de bingo que tenga la siguiente estructura (5x5) (matriz)

/*•	Los números deben ser aleatorios y deben ir entre (1 a 99) y 
•	Cuando se ingrese el número y está en la tabla debe colocar un 0 o X para ir completado la tabla.
•	Cuando se agoten todos los números debe indicar que termino y luego si quieren volver a jugar
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


main (){
    
    //Mensaje de Bienvenida
    cout << "Bienvenido al Bingo user\n";
    //Declaracion de variables
    bool proceso;
    int tabla[5][5], arreglo[50], index = 5, num, cambio;    
    char letra_tabla[5] = {'B', 'I', 'N', 'G', 'O'};
    srand(time(NULL));
    //Bucle para asignar valores a la tabla 
    
    do{
        for (int i = 0; i < index; i++)
        {
            for (int j = 0; j < 5; j++){
                num = (1 + rand() % 99);
                int num_2 = 0;
                while (num_2 < index)
                    {
                    if(num != tabla[i][num_2]){
                            num_2++;
                        }
                        else{
                            num = (1 + rand() % 99);
                            num_2 = 0;
                        }  
                    }
                    if(num != tabla[i][num_2]){
                            //num_2++;
                            tabla[i][j]= num;
                        }
                }
        }
      

    //Bucle para imprimir la tabla del bingo
    
    for (int i = 0; i < index; i++)
    {
    cout << "| "<< letra_tabla[i] << "  | ";
    }
    cout << endl;
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index; j++)
        {
            if (tabla[i][j] < 10)
            {
                 cout << "| " << tabla[i][j] <<"  | ";
            }
            else{
            cout << "| " << tabla[i][j] <<" | ";
            }
        }
        cout << endl;
    }
    //Para cambiar a 0
    char opcion;
    do{
    cout << "Desea ingresar un numero? (Y|N)\n";
    cin >> opcion;
    if (opcion == 'Y'){

    cout << "Ingrese numero: \n";
    cin >> cambio;
    system("cls");
    for(int i=0;i<index;i++){
		for(int j=0;j<index;j++){
			
            if (cambio == tabla[i][j]){
                tabla[i][j] = 0;
            }
		}
		
	}
    for (int i = 0; i < index; i++)
    {
    cout << "| "<< letra_tabla[i] << "  | ";
    }
    cout << endl;
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index; j++)
        {
            if (tabla[i][j] < 10)
            {
                 cout << "| " << tabla[i][j] <<"  | ";
            }
            else{
            cout << "| " << tabla[i][j] <<" | ";
            }
        }
        cout << endl;
        
    }
    }
    if (opcion == 'N'){
        cout << "El programa ha finalizado";
        proceso = false;
    }
    }while(opcion == 'Y');
    }while(proceso);
}



