package persona;
import calculos.Calculo;
import java.util.Scanner;
public class Principal {
	
	static Jugador jug;
	static Directivo dir;
	static Entrenador ent;
	static Persona per;
	Scanner sc= new Scanner(System.in);
	Calculo cal = new Calculo();
	
	
	//Declarar variables
	public String nombre;
	public String apellido;
	public Integer edad;
	public String pais;
	public Double sueldo; 
	public Integer numero;
	public String pie_preferido;
	public String posicion;
	public String tipo_entrenador;
	public String cargo;
	
	public int contador_jugador = 0;
	
	//Listas de las personas
	public Jugador[] lista_jugadores = new Jugador[100];
	public Entrenador[] lista_entrenadores = new Entrenador[100];
	public Directivo[] lista_directivos = new Directivo[100];
	public Persona[] lista_personas = new Persona[100];
	
	public static void main(String[] args) {
		
		Principal pr = new Principal();
		pr.menu();
	}
	
	public void menu(){
		int opcion;
		boolean verdad= true;
		do {
			
			System.out.println("Bienvenido al programa usuario, elija una opcion.\n1. Registrar jugadores.\n2. Registrar entrenadores.\n3. Registrar directivos.\n4. Listado.\n5. Edicion.\n6. Estadistica.\n7. Salir");
			opcion = sc.nextInt();
			
			switch(opcion) {
				case 1:
					jugadores();
					break;
					
				case 2:
					entrenadores();
					break;
				case 3:
					directivos();
					break;
				case 4:
					listado();
					break;
					
				case 5:
					editar();
					break;
					
				case 6:
					estadisticas();
					break;
					
				case 7:
					System.out.println("Ha elegido salir del programa");
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					
					verdad = false;
					break;
					
				default: 
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					break;
					
			}
			
			
		}while(verdad);
	}
	
	//Para registrar jugadores
	public void jugadores() {
		char lista;
		int opcion;
		System.out.println("Bienvenido a la opcion de agregar jugadores, elija una opcion.\na. Cantidad de jugadores");
		lista = sc.next().charAt(0);
		System.out.println("Numero de jugadores que desee agregar: ");
		opcion = sc.nextInt();
		switch(lista){
		case 'a':
			for(int i = 0; i<opcion; i++) {
				nombre = per.setNombre();
				
				apellido = per.setApellido();
			
				edad = per.setEdad();
				
				pais = per.setPais();
				
				sueldo = per.setSueldo();
				
				numero = jug.setNumero();
				
				pie_preferido = jug.setPie();
				
				posicion = jug.setPosicion();
				
				jug = new Jugador(nombre, apellido, edad, sueldo, pais, numero, pie_preferido, posicion);
				lista_jugadores[i] = jug;
				contador_jugador++;
			}
		}
		System.out.println("Press Enter To Continue...");
		new java.util.Scanner(System.in).nextLine();

	}
	//Para registrar entrenadores
	public void entrenadores() {
		char lista;
		int opcion;
		System.out.println("Bienvenido a la opcion de agregar entrenadores, elija una opcion.\na. Cantidad de entrenadores");
		lista = sc.next().charAt(0);
		System.out.println("Numero de entrenadores que desee agregar: ");
		opcion = sc.nextInt();
		switch(lista){
		case 'a':
			for(int i = 0; i<opcion; i++) {
				
				nombre = per.setNombre();
				
				apellido = per.setApellido();
				
				edad = per.setEdad();
				
				pais = per.setPais();
				
				sueldo = per.setSueldo();
				
				tipo_entrenador = ent.setTipo();
				
				
				ent = new Entrenador(nombre, apellido, edad, sueldo, pais, tipo_entrenador);
				lista_entrenadores[i] = ent;
				
			}
		}
		System.out.println("Press Enter To Continue...");
		new java.util.Scanner(System.in).nextLine();

	}
	//Para registrar directivos
	public void directivos() {
		char lista;
		int opcion;
		System.out.println("Bienvenido a la opcion de agregar directivos, elija una opcion.\na. Cantidad de directivos");
		lista = sc.next().charAt(0);
		System.out.println("Numero de directivos que desee agregar: ");
		opcion = sc.nextInt();
		switch(lista){
		case 'a':
			for(int i = 0; i<opcion; i++) {
				
				nombre = per.setNombre();
				
				apellido = per.setApellido();
				
				edad = per.setEdad();
				
				pais = per.setPais();
				
				sueldo = per.setSueldo();
				
				cargo = dir.setCargo();
				
				
				dir = new Directivo(nombre, apellido, edad, sueldo, pais, cargo);
				lista_directivos[i] = dir;
				
			}
		}
		System.out.println("Press Enter To Continue...");
		new java.util.Scanner(System.in).nextLine();

	}
	
	//Para la opcion de estadisticas
	public void estadisticas() {
		char opcion;
		boolean verdad = true;
		do {
			
			System.out.println("Bienvenido a la opcion de estadisticas, elija una opcion.\na.	Calcular el dinero total a pagar al año \r\n"
					+ "b.	Calcular el dinero total a pagar al mes\r\n"
					+ "c.	Jugador que más gana y el que menos gana.\r\n"
					+ "d.	Entrenador que más gana y el que menos gana.\r\n"
					+ "e.	Directivo que más gana y el que menos gana. \r\n"
					+ "f. 	Salir.");
			opcion = sc.next().charAt(0);
			
			
			switch(opcion) {
				case 'a':
					cal.getSueldoAnual();
					break;
				case 'b':
					cal.getSueldoMensual();
					break;
				case 'c':
					cal.datos_jug(1);
					cal.datos_jug(2);
					break;
				case 'd':
					cal.datos_ent(1);
					cal.datos_ent(2);
					break;
				case 'e':
					cal.datos_dir(1);
					cal.datos_dir(2);
					break;
				case 'f':
					System.out.println("Ha elegido salir del programa");
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					verdad = false;
					break;
				default:
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					break;
			}
		}while(verdad);
		
	}
	
	//Para el listado
	public void listado() {
		int opcion;
		boolean verdad = true;
		
		do {
			System.out.println("Bienvenido a la opcion de listas, elija una opcion.\na. Jugadores.\nb. Entrenadores.\nc. Directivos\nd. Salir");
			opcion = sc.next().charAt(0);
			switch(opcion) {
				case 'a':
					for(int i = 0; i<lista_jugadores.length; i++) {
						
						lista_jugadores[i].mostrarDatos();
					}
					break;
				case 'b':
						for(int i = 0; i<lista_entrenadores.length; i++) {
						
						lista_entrenadores[i].mostrarDatos();
					}
					break;
				case 'c':
					for(int i = 0; i<lista_directivos.length; i++) {
						
						lista_directivos[i].mostrarDatos();
					}
					break;
				case 'd':
					System.out.println("Ha elegido salir del programa");
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					verdad = false;
					break;
				default:
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					break;
			
			}
		}while(verdad);
		
	}

	//Para editar
	public void editar() {
		char opcion;
		boolean verdad = true, verdad_1 = true, verdad_2 = true, verdad_3 = true;
		
		//Bucle do while para que la funcion corra las veces que desee el usuario
		do {
			int player, coach, president;
			System.out.print("Bienvenido a la opcion de editar datos, elija una opcion. a.	Editar Jugadores\r\n"
					+ "b.	Editar Entrenador\r\n"
					+ "c.	Editar Directivo\r\n"
					+ "");
			opcion = sc.next().charAt(0);
			//Condicional switch para los diferentes casos
			switch(opcion) {
			//Para editar jugadores
				case 'a':
					System.out.println("Bienvenido a la opcion de editar jugadores.\nEscriba el indice del jugador que desee editar: ");
					player = sc.nextInt();
					
					//Bucle do while para que el user decida que parte desee editar
					
						nombre = per.setNombre();
						
						apellido = per.setApellido();
					
						edad = per.setEdad();
						
						pais = per.setPais();
						
						sueldo = per.setSueldo();
						
						numero = jug.setNumero();
						
						pie_preferido = jug.setPie();
						
						posicion = jug.setPosicion();
						
						jug = new Jugador(nombre, apellido, edad, sueldo, pais, numero, pie_preferido, posicion);
						lista_jugadores[player] = jug;
					
					
					break;
					//Para editar entrenadores
				case 'b':
					
					System.out.println("Bienvenido a la opcion de editar entrenadores.\nEscriba el indice del entrenador que desee editar: ");
					coach = sc.nextInt();
					
					//Bucle do while para que el user decida que parte desee editar
					
						nombre = per.setNombre();
						
						apellido = per.setApellido();
					
						edad = per.setEdad();
						
						pais = per.setPais();
						
						sueldo = per.setSueldo();
						
						tipo_entrenador = ent.setTipo();
						
						ent = new Entrenador(nombre, apellido, edad, sueldo, pais, tipo_entrenador);
						lista_entrenadores[coach] = ent;
					break;
					//Para editar directivos
				case 'c':
					System.out.println("Bienvenido a la opcion de editar directivos.\nEscriba el indice del directivo que desee editar: ");
					president = sc.nextInt();
					nombre = per.setNombre();
					
					apellido = per.setApellido();
					
					edad = per.setEdad();
					
					pais = per.setPais();
					
					sueldo = per.setSueldo();
					
					cargo = dir.setCargo();
					
					
					dir = new Directivo(nombre, apellido, edad, sueldo, pais, cargo);
					lista_directivos[president] = dir;
					
					break;
					//Para salir
				case 'd':
					System.out.println("Ha elegido salir del programa");
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					verdad = false;
					break;
				default:
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					break;
			}
		}while(verdad);
		
		
		
	}

}
