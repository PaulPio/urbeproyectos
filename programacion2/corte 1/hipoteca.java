import java.util.Scanner;
//Programa para hacer una hipoteca

public class hipoteca {
    //SE declaran las variables
    public static void main(String[] args){

        double pagos, tasa_interes;
        int capital, numero_pagos;
        Scanner sc = new Scanner(System.in)
        //SE piden los datos
        System.out.println("Bienvenido al programa. \nIntroduzca el monto de la hipoteca: \n");
        capital = sc.nextInt();

        System.out.println("Introduzca la tasa de interes: \n");
        tasa_interes = sc.nextDouble();

        System.out.println("Inroduzca el numero de anos que va a durar el prestamo: \n");
        numero_pagos = ssc.nextInt();
        
        //SE hacen ajustes a los valores de las variables

        tasa_interes = (tasa_interes/100) / 12;
        numero_pagos = numero_pagos*12;

        pagos = capital * ((tasa_interes * ((1 + tasa_interes)*Math.pow(tasa_interes))/(1+tasa_interes)*Math.pow(tasa_interes) - 1);

        System.out.println(pagos);
    }
}