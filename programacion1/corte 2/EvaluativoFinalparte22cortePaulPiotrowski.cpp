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
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;
void ahorcado();

main(){
    ahorcado();
}

//Funcion de juego del ahorcado
void ahorcado(){
    //Declarar variables
    srand(time(0));
    int count = 10, num_palabras, opcion, j = 0, k= 0, victorias = 0, derrotas = 0; 
    string palabras_usadas[100], respuesta;
    bool proceso = true, programa = true, hangmen = true;
    char carga;  
    string elegido; //Se asigna la palabra 
    //Mensaje de bienvenida
    do{
        cout << "Bienvenido al juego del ahorcado user\nElija una opcion\n1.Jugar.\n2.Estadistica.\n3.Salir\n";
        cin >> opcion;
        system("cls");

    switch (opcion)
    {
        //Jugar
        case 1:
            {   //Con un bucle do-while vamos realizando el juego
                carga = 'Y';
                while(carga != 'N'){
                    cout << "Elige la palabra con la que se jugara: \n";
                    cin >> elegido;

                    int sizel = elegido.length();//Para tener el numero de caracteres de elegido
                    bool game = true;
                    string pal(sizel, '_'); //Para concantenar el numero de letras de elegido
                    
                    int m = 3;//intentos fallidos
                    system("cls");
                    //Bucle para medir la cantidad de intentos
                    cout << "\nQuedan " << m << " oportunidades\n";//Para mostrar las oportunidades restantes
                    while(game){
                        
                        cout << pal << endl;    
                        cout << "Introduzca una letra: \n";
                        cin >> respuesta;
                        for (int j=0; j <= sizel; j++){
                        if(respuesta[0] == elegido[j])//para comparar la resuesta y obtener el resultado
                            {
                            pal[j] = elegido[j];  
                            } 
                        }
                        //Para saber si la letra esta en elegido y sumar el contador de los intentos en caso de que no esté
                        if(elegido.find(respuesta) == -1){
                            m--;
                        }
                        cout << "\nQuedan " << m << " oportunidades\n";//Para mostrar las oportunidades restantes
                        //Si hay victoria
                        if(pal == elegido){
                        cout << "Has ganado esta partida";
                        game = false;
                        victorias++;
                    }
                    //Se consume todos los intentos
                    if(m == 0){
                        cout << "Has perdido esta partida";
                        game = false;
                        derrotas++;
                    }
                    }
                    //Se agregan las palabras a la lista de palabras usadas con el contador j
                    palabras_usadas[j] = elegido;//Para asignar palabras usadas
                    j++;
                    
                    cout << "\nQuiere seguir jugando? (Y|N)\n";//Para saber si el user quiere seguir jugando
                    cin >> carga;
                    system("cls");
                    //Condicional comparativo para saber si continuar con el programa
                    if (carga == 'N'){
                        cout << "Has terminado el juego.\n";  
                    }    
                }          
                system("pause");
                system("cls");
                continue;
            }
        //Estadisticas
        case 2:{
            char parcial;//opciones del case 2 de estadisticas
            cout << "Bienvenido a la opcion de estadisticas.\nElija una opcion: \na.Victorias.\nb.Derrotas\nc.Palabras usadas.\nd.Salir\n";
            cin >> parcial;
            switch (parcial)
            {
                //Victorias
                case 'a':
                    cout << "El numero de victorias en esta sesion es de " << victorias << endl;
                    system("pause");
                    system("cls");
                    continue;
                //Derrotas
                case 'b':
                 cout << "El numero de victorias en esta sesion es de " << derrotas << endl;
                    system("pause");
                    system("cls");
                    continue;
                //Palabras usadas
                case 'c':
                    for (size_t i = 0; i < j; i++)
                    {
                        cout << "Palabra [" << i << "] " << palabras_usadas[i] << endl;
                    }
                    system("pause");
                    system("cls");
                    continue;
                    //Salir del menu
                case 'd':
                    cout << "Ha elegido salir del menu.\n";
                    system("cls");
                    continue;
                default:
                    cout << "Ha escrito mal un dato\n";
                    system("pause");
                    system("cls");
                    continue;
            }
            continue;
        }
        //Salir
        case 3:
            cout << "Has elegido salir del programa\n";
            programa = false;
            system("pause");
            system("cls");
            break;
        default:
            cout << "Has introducido mal un dato\n";
            system("pause");
            system("cls");
            continue;
        }
    
    }while(programa);
   
}