package persona;

import java.util.Scanner;

public class Directivo extends Persona{
	public String cargo;
	public Scanner sc = new Scanner(System.in);
	public Directivo(String nombre, String apellido, Integer edad, Double sueldo, String pais,String cargo) {
		super(nombre, apellido, edad, sueldo, pais);
		
		this.cargo = cargo;
	}
	
	//Para `poner los datos a los objetos
	public String setCargo() {
		System.out.println("Introduce el cargo de directivo: ");
		cargo = sc.next();
		return cargo;
	}
	
	//Para obtener daatos de los objetos
	public String getCargo() {
		return cargo;
	}
	
	
	//Para mostrar los datos
	public void mostrarDatos() {
		System.out.println("Nombre " + getNombre()
				+ "\nApellido " + getApellido()
				+ "\nedad " + getEdad()
				+ "\nPais " + getPais()
				+ "\nSueldo " + getSueldo()
				+ "\nCargo " + getCargo()
				+ "\n");
	}
}
