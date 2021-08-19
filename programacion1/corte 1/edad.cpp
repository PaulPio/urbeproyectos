//edad

#include <iostream>
using namespace std;

//Prototipo de la funcion
//void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);

int main ()
{
    int anioAct;  //Año Actual
    int mesAct; //Mes actual
    int fechAct; //Fecha actual

    int anioNac; //Año nacimiento
    int mesNac; //Mes nacimiento
    int fechNac; //Fecha nacimiento

    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Año Actual: ";   cin >> anioAct;
    cout << "Ingrese Mes Actual: ";   cin >> mesAct;
    cout << "Ingrese Fecha Actual: ";  cin >> fechAct;

    cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";  cin >> fechNac;

    int respFech , respMes, edad;

    if ( fechAct < fechNac  )
    {   //En caso de ser menor la fecha actual que el nacimiento
        fechAct = fechAct + 30; // Se le suma los 30 días (1 mes) a la fecha actual
        mesAct = mesAct - 1; // Se le resta un mes (30 días) al mes actual
        respFech =  fechAct - fechNac; //Se le resta fecha nacimiento al actual
    }
    else //En caso de ser mayor la fecha actual que el nacimiento
        respFech =  fechAct - fechNac;  //Se le resta fecha nacimiento al actual

    if( mesAct < mesNac )
    {   //En caso de ser menor el mes actual que el nacimiento
        mesAct = mesAct + 12; // Se le suma los 12 meses (1 año) al mes actual
        anioAct = anioAct - 1 ; // Se le resta 1 año ( 12 meses) al año actual
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
    }
    else //En caso de ser mayor el mes actual que el nacimiento
    {
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
	}
 	edad = anioAct - anioNac;
    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<edad << endl; //Muestra edad
    cout << " Mes: " << respMes << endl; //Muestra mes
    cout << " Dia: " << respFech << endl; //Muestra dia

    return 0;
}



//Definicion de la Funcion
/*
                        cout << "Ingrese dia de nacimiento del estudiante: \n";
						cin >> dia_nac;
			
						cout << "Ingrese mes de nacimiento del estudiante: \n";
						cin >> mes_nac;
						
						cout << "Ingrese ano de nacimiento del estudiante: \n";
						cin >> ano_nac;
					
						//Para calcular la edad con dia, mes y años
						if ( dia_act < dia_nac  )
					    {   
					        dia_act = dia_act + 30; 
					        mes_act = mes_act - 1; 
					        edad =  dia_act - dia_nac; 
					    }
					    else 
					        edad =  dia_act - dia_nac;  
					
					    if( mes_act < mes_nac )
					    {   
					        mes_act = mes_act + 12; 
					        ano_act = ano_act - 1 ; 
					        mes_e = mes_act - mes_nac; 
					    }
					    else 
					        mes_e = mes_Act - mes_nac; 
					 	
					    edad= anioAct - anioNac;
					    
						cout << "Ingrese promedio del estudiante: \n";
						cin >> promedio;

					//Se agregan los datos de los estudiantes a la lista
						lista_est[z][0] =dia_nac;
						lista_est[z][1] =mes_nac;
						lista_est[z][2] =ano_nac;
						lista_est[z][3] =edad;
						lista_est[o][4] = mes_e;
						lista_est[z][5] = dia_e;*/