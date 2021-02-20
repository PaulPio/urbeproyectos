// PROGRAMA PARA EVALUAR NOTAS DEL EVALUATIVO FINAL
#include <iostream>
using namespace std;

main (){
    // Declarar las variables
   bool proceso = true;
   do{
   	int opcion, i;
	int count = 0, notas = 0, prom_notas = 0, total_notas = 0,aprobado = 0,reprobado = 0;
	string notas_letra;
	
    cout << "Bienvenido al programa del evaluativo final.\n" << "Estas son sus opciones: \n";
    // Hacer el menu de opciones
    cout << "1.Promedio del estudiante.\n2.Transformacion de nota Venezuela a USA.\n3.Aprobados o Reprobados.\n4.Fin del programa\n";
    cin >> opcion;
   	system("cls");
    switch (opcion) {
      // Trabajar la opcion 1 con condicionales. Sacar el promedio de la nota de los estudiantes
      case 1:{
	
        cout << "Bienvenido a la opcion de Promedio de estudiantes.\nPor favor escriba el numero de estudiantes que va a sacar el promedio\n";
        cin >> count;
        // Se realiza un bucle for para realizar la operacion las veces que sean necesarias

        for ( i = 1; i <= count; i++) {
          cout << "Ingrese la nota del estudiante: \n";
          cin >> notas;
          if (notas<0 || notas >20){
			cout <<"Has introducido una nota incorrecta\n";
			system("pause");                                                   
      		system("cls"); 
			break;}
          total_notas = total_notas + notas;
    		}
		if (notas>0 && notas <20)  {
        prom_notas = total_notas / count;
        cout << "Se agregaron " << count << " para promediar en el programa\n";
        cout << "El promedio de las notas de los estudiantes fue de " << prom_notas << endl;
        system("pause");        
        system("cls");}
        continue;
}
   // Trabajar la opcion 2 con condicionales. Transformar la nota de venezuela a usa
      case 2:
      	cout << "Bienvenido a la opcion de transformar nota.\nPor favor ingrese a nota que desea transformar: \n";
      	cin >> notas;
       if (notas<0 || notas >20){
			cout <<"Has introducido una nota incorrecta\n";
			system("pause");                                                   
      		system("cls"); 
			break;}  
      	else if(notas < 10){
      			cout << "El estudiante ha reprobado. Su nota es F\n";
			  }
      	else if (notas>=10 && notas<=13){
      			cout << "El estudiante ha aprobado. Su nota es C\n";
      				}
		else if (notas>13 && notas<=16){
			cout << "El estudiante ha aprobado. Su nota es B\n";
			}
		else if (notas>16 && notas <=20){
			cout << "El estudiante ha aprobado. Su nota es A\n";
      	}                                            
		
		if (notas>0 && notas <20)  {
		
      	notas = notas * 5;
      	cout << "La nota del estudiante transformada es " << notas << endl;
      	system("pause");                                                   
      	system("cls");      	}
      	
		continue;
      
      // Trabajar la opcion 3 con condicionales. Saber cuantos estudiantes pasaron y cuantos no
      
	  case 3:
      	
      	cout << "Bienvenido a la opcion de aprobado y reprobado de estudiantes\nPor favor ingrese el numero de estudiantes\n";
      	cin >> count;
      	
      	// se realiza un bucle for
      	
      	for (int i = 1; i <= count; i++){
      		cout << "Ingrese las notas: \n";
      		cin >> notas;
      		if (notas<0 || notas >20){
			cout <<"Has introducido una nota incorrecta\n";
			system("pause");                                                   
      		system("cls"); 
			break;}
      		else if (notas >= 10 && notas <= 20){
      			aprobado = aprobado + 1;
			  }
			else if (notas < 10) {
				reprobado = reprobado + 1;
			}
		}
		
		if (notas>0 && notas <20)  {
		cout << "El numero de estudiantes que se revisaron fue de " << count << endl;
		cout << "El numero de estudiantes que aprobaron fue de " << aprobado << endl;
		cout << "El numero de estudiantes que reprobaron fue de " << reprobado << endl;
		system("pause");
		system("cls");}
		continue;	
			
	// Para terminar el programa
	case 4:
		cout << "El programa ha finalizado";
		proceso = false;
		break;
	// Por si se coloca mal un dato
	default:
		cout << "Ha ingresado mal las opciones\n";
		system("pause");
		system("cls");
		break;
}       

}	while(proceso);
}







