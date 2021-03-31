/*
Se debe crear el juego del ahorcado
Se debe introducir la palabra para ir adivinando letra por letra, si se equivoca 3 veces el jugador pierde, 
si lo adivina puede seguir jugando y se debe agregar una palabra nuevamente.
•	Si se gana suma un punto y si pierde suma 1 punto en derrota.
•	Cada palabra debe almacenarse para saber cuáles ha usado.
Menú
1.	Jugar
2.	Estadística
a.	Victorias
b.	Derrotas
c.	Palabras usadas 
Fecha Tope: 5 de abril
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void ahorcado();

main(){
    ahorcado();
}

//Funcion de juego del ahorcado
void ahorcado(){
    //Declarar variables
    srand(time(0));
    //string palabras[10] = {"pana", "octogenario", "estudio", "dinosaurio", "libro", "curso", "libertad", "mercado", "sentido", "comercio"};
    int count = 10, num_palabras, opcion, j = 0; 
    string palabras_usadas[100];
    bool proceso = true, programa = true;
    char carga;
    string elegido; //Se asigna la palabra 
    //Mensaje de bienvenida
    cout << "Bienvenido al juego del ahorcado user\nElija una opcion\n1.Jugar.\n2.Estadistica.\n3.Salir\n";
    cin >> opcion;
    system("cls");
    while(programa){

    switch (opcion)
    {
        //Jugar
        case 1:
            {   //Con un bucle do-while vamos realizando el juego
                do{
                   
                    cout << "Elige la palabra con la que se jugara: \n";
                    cin >> elegido;
                    int size = elegido.length();//Para contar los caracteres de cada palabra en el ahorcado
                   
                    for (int i = 0; i < size; i++)//bucle para la palabra del ahorcado
                    {
                        //int k = 1 * size;
                        cout << "_";
                    }

                    palabras_usadas[j] = elegido;//Para asignar palabras usadas
                    j++;
                    
                    cout << "\nQuiere seguir jugando? (Y|N)\n";//Para saber si el user quiere seguir jugando
                    cin >> carga;

                    //Condicional comparativo para saber si continuar con el programa
                    if (j == 10){
                        cout << "Has terminado el juego.\n";
                        carga = 'N';
                    }
                    
                }while(carga != 'N');                
               continue;
            }
        //Estadisticas
        case 2:{
            char parcial;
            cout << "Bienvenido a la opcion de estadisticas.\nElija una opcion: \na.Victorias.\nb.Derrotas\nc.Palabras usadas.\nd.Salir\n";
            cin >> parcial;
            switch (parcial)
            {
                //Victorias
                case 'a':
                    
                    continue;
                //Derrotas
                case 'b':

                    continue;
                //Palabras usadas
                case 'c':
                    for (size_t i = 0; i < j; i++)
                    {
                        cout << "Palabra [" << i << "] " << palabras_usadas[i] << endl;
                    }
                    
                    continue;
                    //Salir del menu
                case 'd':
                    cout << "Ha elegido salir del menu.\n";
                    continue;
                default:
                    cout << "Ha escrito mal un dato\n";
                    system("pause");
                    system("cls");
                    break;
            }
            continue;
        }
        //Salir
        case 3:
            cout << "Has elegido salir del programa\n";
            programa = false;
            break;
        default:
            cout << "Has introducido mal un dato\n";
            system("pause");
            system("cls");
            continue;
        }
    
    }
   
}