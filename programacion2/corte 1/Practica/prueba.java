import java.util.Scanner;

public class prueba {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int x, y, total;
        
        System.out.print("Ingrese valor: ");
        x = sc.nextInt();
        
        System.out.print("Ingrese valor: ");
        y = sc.nextInt();
        
        total = x + y;
        String persona;

        System.out.println("Ingrese su nombre");
        persona = sc.next();
        System.out.println("El resultado es: " + total + "\n" + persona);


        if(persona.equals("paul")){
            System.out.println("Hola de nuevo");
        }
        else{
            System.out.println("Hola " + persona);
        }
    }
    
}