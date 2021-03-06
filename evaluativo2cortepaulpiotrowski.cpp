//Evaluativo 2 corte usando arrays para hacer una lista de los estudiantes
#include <iostream>
#include <conio.h>
using namespace std;

main() {
	//Se declaran las variables
		string nombre, apellido, sexo, cedula;
		int dia_nac, est_num, mes_nac, ano_nac, promedio, ano_actual = 2021, opcion, edad;
		int  index = 5, index_2 = 4;
		bool continuar = true;
		int o=0, z= 0, u = 0;
		int lista_est[100][100];
		string lista_est_string[100][100];
     //Se realiza el programa con un bucle do-while para asegurarse de que corra por lo menos una vez              
	do{
		cout << "Bienvenido al programa usuario, elija una opcion\n1.Registro de estudiantes\n2.Editar estudiantes\n3.Estadistica\n4.Salir del Programa\n";
		cin >> opcion;
		system("cls");
		
	//Se hace una declaracion switch para tomar en cuenta las diferentes opciones
		switch(opcion){
			case 1:{
				//Mensaje de bienvenida e ingreso del numero de estudiantes que desea registrar
				cout << "Bienvenido a la opcion de Registrar Estudiantes\nPor favor ingrese el numero de estudiantes que desea registrar: \n";
				cin >> est_num;
				
				//Registrar los estudiantes usando un bucle		
				for(int y = 1; y <= est_num; y++) {
						cout << "Ingrese nombre del estudiante: \n";
						cin >> nombre;
							
						cout << "Ingrese apellido del estudiante: \n";
						cin >> apellido;
						
						cout << "Ingrese sexo del estudiante: (H/M)\n";
						cin >> sexo;
						
						cout << "Ingrese cedula del estudiante: \n";
						cin >> cedula;
					//Se agregan los datos de los estudiantes a la lista
						lista_est_string[o][0] =nombre;
						lista_est_string[o][1] =apellido;
						lista_est_string[o][2] =sexo;
						lista_est_string[o][3] =cedula;

						cout << "Ingrese dia de nacimiento del estudiante: \n";
						cin >> dia_nac;
			
						cout << "Ingrese mes de nacimiento del estudiante: \n";
						cin >> mes_nac;
						
						cout << "Ingrese ano de nacimiento del estudiante: \n";
						cin >> ano_nac;
					
						edad= ano_actual - ano_nac;
						cout << "Ingrese promedio del estudiante: \n";
						cin >> promedio;

					//Se agregan los datos de los estudiantes a la lista
						lista_est[o][0] =dia_nac;
						lista_est[o][1] =mes_nac;
						lista_est[o][2] =ano_nac;
						lista_est[o][3] =edad;
						lista_est[o][4] =promedio;
					o = o + 1;
					system("pause");                                                   
      				system("cls");
				}
				
				cout << "Esta parte ha concluido\n";
				system("pause");                                                   
      			system("cls"); 
				
				continue;}
			case 2:{
				//Se muestran los estudiantes con todos sus datos para que se pueda elegir que modificar
				for (int i=0; i<o; i++){
					cout << "El estudiante [" << i<< "] ";
			
					cout << "de nombre: " << lista_est_string[i][0] << " y apellido: " << lista_est_string[i][1] << endl;
					cout << "Sexo: " << lista_est_string[i][2] << "\nCedula: " << lista_est_string[i][3] << endl;
				
					cout << "La fecha de nacimiento del estudiante es:" << lista_est[i][0] << "/" <<lista_est[i][1] << "/" << lista_est[i][2] << endl;
					cout << "La edad es: " << lista_est[i][3] << "\nEl promedio es de: " << lista_est[i][4] << endl; 
					cout << endl << endl;
						}
					// Se escribe le numero del estudiante en el arreglo para modificar
					cout << "Escriba un numero para escoger el estudiante a editar: \n";
					cin >> z;
					system("cls");
					int choice;
					//Se escoge la opcion que mas desee
					cout << "Que desea cambiar?\n0.Nombre\n1.Apellido\n2.Sexo\n3.Cedula\n4.Dia de nacimiento\n5.Mes de nacimiento\n6.Ano de nacimiento\n7.Promedio\n8.Salir del menu\n";
					cin >> choice;
					system("pause");
					system("cls");
				switch(choice){
					//Diferentes opciones para modificar los datos del estudiante que se desee
					case 0:
						cout << "Introduzca el nombre: \n";
						cin >> nombre;
						lista_est_string[z][0] = nombre;
						system("pause");
						system("cls");
						continue;
					case 1:
						cout << "Introduzca el apellido: \n";
						cin >> apellido;
						lista_est_string[z][1] = apellido;
						system("pause");
						system("cls");
						continue;
					case 2:
						cout << "Introduzca el sexo: \n";
						cin >> sexo;
						lista_est_string[z][2] = sexo;
						system("pause");
						system("cls");
						continue;
					case 3:
						cout << "Introduzca la cedula: \n";
						cin >> cedula;
						lista_est_string[z][3] = cedula;
						system("pause");
						system("cls");
						continue;
					case 4:
						cout << "Introduzca el dia de nacimineto: \n";
						cin >> dia_nac;
						lista_est[z][0] = dia_nac;
						system("pause");
						system("cls");
						continue;
					case 5:
						cout << "Introduzca el mes de nacimineto: \n";
						cin >> mes_nac;
						lista_est[z][1] = mes_nac;
						system("pause");
						system("cls");
						continue;
					case 6:
						cout << "Introduzca el ano de nacimineto: \n";
						cin >> ano_nac;
						lista_est[z][2] = ano_nac;
						edad= ano_actual - ano_nac;
						lista_est[z][3] = edad;
						system("pause");
						system("cls");
						continue;
					case 7:
						cout << "Introduzca el promedio: \n";
						cin >> promedio;
						lista_est[z][4] = promedio;
						system("pause");
						system("cls");
						continue;
					case 8:
						cout << "Ha salido de la opcion.\n";
						system("pause");
						system("cls");
						break;
					default:
						cout << "Ha introducido mal un dato\n";
						system("pause");
						system("cls");
						continue;
				}                                                  
      			system("cls"); 
				continue;
			}

			case 3:{
				//Se declaran variables para que se mantengan en este case
				char libre;
				int average_menor, average_mayor = lista_est[0][4], average_2,average_1, can_h = 0, can_m = 0, contador, contador_2;
				string can_1, position;
				// Se da a elegir la opcion que el user desee
				cout << "Bienvenido a la opcion de estadisticas\nPor favor elige una opcion\n";
				cout << "a.	Estudiante con el promedio mas alto\nb.	Estudiante con el promedio mas bajo\nc.	Cantidad de Hombres\nd.	Cantidad de Mujeres\ne.	Cantidad de Estudiantes.\n";
				cin >> libre;
				average_1 = lista_est[0][4];
				average_mayor = average_1;
				average_menor = average_1;
				// Bucle for para comparar todos los datos del arreglo
				for (int i = 0; i < o; i++)
					{
						can_1 = lista_est_string[i][2];
						average_2 = lista_est[i][4];
						//mayor promedio
						if (average_2 > average_mayor)
						{
							average_mayor = average_2;
						}
						//menor promedio
						if (average_2 < average_menor)
						{
							average_menor = average_2;
							contador_2++;
						}
						//Numero de hombres 
						if (can_1 == "H"){
							can_h = can_h + 1; 		
						}
						//Numero de mujeres
						if (can_1 == "M"){
							can_m = can_m + 1;
						}
		
					}
				//Se usa un conditional switch con char para las imprimir las estadisticas
				switch (libre)
				{
					
				case 'a':
					//Se hace un bucle para saber que estudiante es el del promedio
					for (int i = 0; i < o; i++){
							if (average_mayor == lista_est[i][4])
							{
								contador = i;	
							}
							
							}
								

					cout << "El promedio mas alto es de: " << average_mayor << " ";
					cout << "El estudiante de nombre: " << lista_est_string[contador][0] << " y apellido: " << lista_est_string[contador][1] << endl;
					cout << "Sexo: " << lista_est_string[contador][2] << "\nCedula: " << lista_est_string[contador][3] << endl;
					cout << "La fecha de nacimiento del estudiante es:" << lista_est[contador][0] << "/" <<lista_est[contador][1] << "/" << lista_est[contador][2] << endl;
					cout << "La edad es: " << lista_est[contador][3] << "\nEl promedio es de: " << lista_est[contador][4] << endl; 
					
					cout << endl << endl;
					system("pause");
					system("cls");
					continue;
				case 'b':
					//Se hace un bucle para saber que estudiante es el del promedio
					for (int i = 0; i < o; i++){
							if (average_menor == lista_est[i][4])
							{
								contador_2 = i;	
							}
							}

					cout << "El promedio mas bajo es de: " << average_menor << " ";
					cout << "El estudiante del nombre: " << lista_est_string[contador_2][0] << " y apellido: " << lista_est_string[contador_2][1] << endl;
					cout << "Sexo: " << lista_est_string[contador_2][2] << "\nCedula: " << lista_est_string[contador_2][3] << endl;
					cout << "La fecha de nacimiento del estudiante es:" << lista_est[contador_2][0] << "/" <<lista_est[contador_2][1] << "/" << lista_est[contador_2][2] << endl;
					cout << "La edad es: " << lista_est[contador_2][3] << "\nEl promedio es de: " << lista_est[contador_2][4] << endl; 
					system("pause");
					system("cls");
					continue;
				case 'c':
					cout << "El numero de estudiantes hombres es: " << can_h << endl;
					system("pause");
					system("cls");
					continue;
				case 'd':
					cout << "El numero de estudiantes mujeres es: " << can_m << endl;
					system("pause");
					system("cls");
					continue;
				case 'e':
					cout << "El numero de estudiantes es: " << o <<endl;
					system("pause");
					system("cls");
					continue;
				default:
					break;
				}

			}
			//Para terminar el programa
			case 4:
				continuar = false;
				cout << "Ha terminado el programa\n";
				break;
			//Por si se introduce mal un numero en el menu
			default:
				cout << "Ha introducido mal un dato\n";
				system("pause");                                                   
      			system("cls"); 
				continue;
			}	
		}while(continuar);

		getch();
		return 0;
}
