/* Programa para ver las notas de un estudiante en un ciclo*/
import java.util.Scanner; //Se importa el scanner
class Notas{
    public static void main(String[] args){

        // Para mostrar el mensaje de Bienvenida 
        System.out.println("Bienvenido usuario");
        // Se declaran las variables a usar
        int numero, notas, cantidad, promedio, alta = 0, baja, total_n = 0, aprobadas = 0, reprobadas = 0;
        Scanner sc = new Scanner(System.in);
        String nombre = "";
        //Ciclo de programa
        
        System.out.println("Indique el numero de estudiantes: ");
        numero = sc.nextInt();

        // Ciclo para realizar la operacion segun el numero de estudiantes
        for (int i = 0; i < numero; i++) {
            System.out.println("Indique el nombre del Estudiante: ");
            nombre = sc.next();
            System.out.println("Indique el numero de notas a subir: ");
            cantidad = sc.nextInt();

            //Reiniciar las variables luego de cada ciclo
            aprobadas = 0; reprobadas = 0; alta = 0; baja = 2033333;total_n = 0; notas = 0;
            
            // Ciclo para realizar la operaacion segun la cantidad de notas que quiera el user
            for (int j = 0; j < cantidad; j++) {

                System.out.println("Ingrese nota: ");
                notas = sc.nextInt();
                // Saber notas reprobadas
                if(notas < 10 && notas >= 0){
                    reprobadas++;
                }
                // Saber notas aprobadas
                if(notas >=10 && notas < 21){
                    aprobadas++;
                }
                // Saber nota mas alta
                if(notas >= alta){
                    alta = notas;   
                }
                // Saber nota mas baja
                if(notas < baja){
                    baja = notas;
                }
                // Saber el total de notas
                total_n = total_n + notas;
            }
            // Saber promedio de notas
            promedio = total_n/cantidad;

            // Mostrar los resultados
            System.out.println("Los datos de " + nombre + " son :");
            System.out.println("El numero de notas aprobadas es de: " +aprobadas);
            System.out.println("El numero de notas reprobadas es de: " + reprobadas);
            System.out.println("El promedio es de: " + promedio);
            //Para saber si aprobo el curso
            if (promedio >= 10) {
                System.out.println("El Estudiante " + nombre + " ha aprobado el curso.");
            } else {
                System.out.println("El Estudiante " + nombre + " ha reprobado el curso.");
            }
            System.out.println("La cantidad de notas del Estudiante" + nombre + " es: " + cantidad);
            System.out.println("La nota mas alta es de: " + alta);
            System.out.println("La nota mas baja es de: " + baja);
            System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n");
        }
    }
}
