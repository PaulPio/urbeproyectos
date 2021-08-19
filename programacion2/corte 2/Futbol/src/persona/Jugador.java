package persona;
import java.util.Scanner;
public class Jugador extends Persona {
	public Integer numero;
	public String pie_preferido;
	public String posicion;
	public Scanner sc = new Scanner(System.in);
	
	public Jugador(String nombre, String apellido, Integer edad, Double sueldo, String pais, Integer numero, String pie_preferido, String posicion) {
		super(nombre, apellido, edad, sueldo, pais);
		// TODO Auto-generated constructor stub
		this.numero = numero;
		this.pie_preferido = pie_preferido;
		this.posicion = posicion;
	}
	//Para mostrar los datos
	public void mostrarDatos() {
		System.out.println("Nombre " + getNombre()
				+ "\nApellido " + getApellido()
				+ "\nedad " + getEdad()
				+ "\nPais " + getPais()
				+ "\nSueldo " + getSueldo()
				+ "\nNumero " + getNumero() 
				+ "\nPie Preferido " + getPie() 
				+ "\nPosicion " + getPosicion()
				+ "\n");
	}
	
	//Para poner datos a los obetos
	public String setPie() {
		System.out.println("Introduce el pie preferido del jugador: (D|I)");
		pie_preferido = sc.next();
		return pie_preferido;
	}
	public int setNumero() {
		System.out.println("Introduce el numero del jugador: ");
		numero= sc.nextInt();
		return numero;
	}
	public String setPosicion() {
		System.out.println("Introduce la posicion del jugador: ");
		posicion = sc.next();
		return posicion;
	}
	
	
	//Para obtener los daots de los objetos
	public String getPie() {
		return pie_preferido;
	}
	public int getNumero() {
		return numero;
	}
	public String getPosicion() {
		return posicion;
	}
	

}
