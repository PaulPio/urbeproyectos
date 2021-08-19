import java.util.Scanner;
public class App {
//Programa para hacer una hipoteca

    public static void main(String[] args) {
        //SE declaran las variables
        double pagos;
        float tasa_interes;
        double capital, numero_pagos;
        Scanner sc = new Scanner(System.in);
        //SE piden los datos
        System.out.println("Bienvenido al programa. \nIntroduzca el monto de la hipoteca: \n");
        capital = sc.nextInt();

        System.out.println("Introduzca la tasa de interes: \n");
        tasa_interes = sc.nextFloat();

        System.out.println("Inroduzca el numero de anos que va a durar el prestamo: \n");
        numero_pagos = sc.nextInt();
        
        //SE hacen ajustes a los valores de las variables

        tasa_interes = (tasa_interes/100) / 12;
        
        numero_pagos = numero_pagos * 12;
        
        //operacion matematica para calcular los pagos
        pagos = capital * ((tasa_interes * (double) Math.pow(1+tasa_interes, numero_pagos) ) / ((double) Math.pow(1 + tasa_interes, numero_pagos) - 1));
        //imprimir resultado
        System.out.println(pagos);
    }

}
