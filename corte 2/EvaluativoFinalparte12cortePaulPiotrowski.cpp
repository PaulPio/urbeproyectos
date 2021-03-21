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
int bingo();

main (){
    char play;
    //Bucle para preguntar al user si quiere volver a jugar
    bingo();
    do {
    cout << "Quiere volver a jugar? (Y|N)\n";
    cin >> play;
    if (play == 'Y')
    {
        bingo();
    }
    else{
        cout << "Hasta luego user.\n";
    }
    }while(play != 'N');
}

//Funcion para realizar el bingo
int bingo(){
    //Declaracion de variables
    bool proceso, lista[5][5];
    int k = 0;
    int cero = 0;
    int tabla[5][5], arreglo[50], index = 5, num, cambio, contador;    
    char letra_tabla[5] = {'B', 'I', 'N', 'G', 'O'};
    srand(time(NULL));
    //Bucle para asignar valores a la tabla 
    
    do{
        //Mensaje de Bienvenida
        cout << "Bienvenido al Bingo user\n";
        for(int i = 0; i < 26; i++){
            num = (1 + rand() % 99);
            int num_2 = 0;
            while(num_2 < i){
                if(num != arreglo[num_2])
                    num_2++;
                else{
                        num = (1 + rand() % 99);
                        num_2 = 0;
                    }
            }
            arreglo[i] = num;
        }for (int i = 0; i < index; i++)
        {
            
            for (int j = 0; j < 5; j++){
                k++;
                tabla[i][j]= arreglo[k];
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
    //Para cambiar a 0 el numero que se teclee
    char opcion;
    do{
        contador = 0;
        cout << "Desea ingresar un numero? (Y|N)\n";
        cin >> opcion;
        //En caso de que teclee Y
        if (opcion == 'Y'){
        cout << "Ingrese numero: \n";
        cin >> cambio;
        system("cls");
        for(int i=0;i<index;i++){
            for(int j=0;j<index;j++){
                //En caso de que sean todos los numeros de la tabla 0
                if (tabla[i][j] == 0){
                    contador++;
                    if (contador == 24)
                    {
                        cout << "La tabla ha sido completada.\nHas ganado el juego user\n";
                        system("pause");
                        system("cls");
                        opcion = 'N';
                        proceso = false;
                    }
                }
                if (cambio == tabla[i][j]){
                    tabla[i][j] = 0;
                }
            }
        }
        //Bucle para imprimir la tabla
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
        
        //En caso de que teclee N
        if (opcion == 'N'){
            cout << "El programa ha finalizado\n";
            proceso = false;
            system("pause");
            system("cls");
        }
        }while(opcion == 'Y');
    
    }while(proceso);
    return 0;
}