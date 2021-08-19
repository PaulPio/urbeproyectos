package persona;
import java.util.Scanner;
//Clase padre 
public class Persona {
	public int contador_personas = 0;
	
	public Scanner sc = new Scanner(System.in);
	
	public String nombre;
	public String apellido;
	public Integer edad;
	public String pais;
	public Double sueldo; 
	
	public Persona(String nombre, String apellido, Integer edad, Double sueldo, String pais ) {
		this.nombre = nombre;
		this.apellido = apellido;
		this.edad = edad;
		this.sueldo = sueldo;
		this.pais = pais;
	}
	
	//Funciones para poner datos de los objetos
	public String setNombre() {
		System.out.println("Introduce el nombre del jugador: ");
		nombre = sc.next();
        return nombre;
    }

    public String setApellido() {
    	System.out.println("Introduce el apellido del jugador: ");
		apellido = sc.next();
        return apellido;
    }

    public int setEdad() {
    	System.out.println("Introduce la edad del jugador: ");
		edad = sc.nextInt();
        return edad;
    }  
    public double setSueldo() {
    	System.out.println("Introduce el sueldo del jugador: ");
		sueldo = sc.nextDouble();
    	
        return sueldo;
    }  
    public String setPais() {
    	System.out.println("Introduce el pais del jugador: ");
		pais = sc.next();
        return pais;
    }  
	
	
	
	//Funciones para obtneer datos de los objetos
	public String getNombre() {
        return nombre;
    }

    public String getApellido() {
        return apellido;
    }

    public int getEdad() {
        return edad;
    }  
    public double getSueldo() {
        return sueldo;
    }  
    public String getPais() {
        return pais;
    }  
    
}
