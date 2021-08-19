package persona;

import java.util.Scanner;

public class Entrenador extends Persona{
	public String tipo_entrenador;
	public Scanner sc = new Scanner(System.in);
	public Entrenador(String nombre, String apellido, Integer edad, Double sueldo, String pais, String tipo_entrenador) {
		super(nombre, apellido, edad, sueldo, pais);
		this.tipo_entrenador = tipo_entrenador;
	}


	//Para colocar los datos de los objetos
	public String setTipo(){
		System.out.println("Introduce el tipo de entrenador: ");
		tipo_entrenador= sc.next();
		return tipo_entrenador;
	}

	
	
	//Para obtener los datos de los objetos
	public String getTipo(){
		return tipo_entrenador;
	}

	//Para mostrar los datos
	public void mostrarDatos() {
		System.out.println("Nombre " + getNombre()
				+ "\nApellido " + getApellido()
				+ "\nedad " + getEdad()
				+ "\nPais " + getPais()
				+ "\nSueldo " + getSueldo()
				+ "\nTipo de entrenador " + getTipo()
				+ "\n");
	}
	
	
}
