//Programa para hacer un inventario
package arreglos;

import java.util.Scanner;

public class Nuevoarreglo {
	//Se usan variables globales para simplificar la escritura y el funcionamiento del programa
	private static double preUSD = 3000000.00, iva = 0.00;
	private static String[] lista_clientes_nombre = new String[10];//lista de los nombres de los clientes
	private static String[] lista_clientes_apellido = new String[10];//lista de los apellidos de los clientes
	private static int contador_cli_nombre = 0, contador_cli_apellido = 0;//Contador de nombres y apellidos de los clientes para que no se sobreescriban debido a la funcion clientes y la funcion compras
	
//Programa para llevar inventario con funciones
	public static void main(String[] args) {
		//condicional switch para ir llamando a las funciones
		System.out.println("Hola Usuario.");//Mensaje de bienvenida
		Nuevoarreglo tf = new Nuevoarreglo(); //Inicializando la instancia de la clase
		String[] lista_prod = tf.inventario();//Llamando a la funcion inventario para obtener los productos
		double[] lista_can = new double[]{201, 501, 322, 451, 75, 32, 12, 81, 90, 232};//Lista de cantidades
		int[] lista_cod = new int[] {32131, 32135, 64314, 12341, 65234, 12413, 64231, 12347, 93213, 23190};//Lista de codigos
		double[] lista_preUSD = new double[10];//Lista de precios en USD
		
		int opcion;
		Scanner sc = new Scanner(System.in);
		boolean verdad = true;
		do {
			
			double[] lista_preVES = new double[]{5.00, 3.00, 1.00, 5.00, 12.00, 9.00, 29.00, 34.00, 120.00, 87.00};//Lista de precios en VES
			
			//Ciclo for para dar precio en dolares y agregar el iva
			for (int i = 0; i < lista_preUSD.length; i++) {
				lista_preVES[i] = lista_preVES[i] + (lista_preVES[i] * tf.iva);
				lista_preUSD[i] = lista_preVES[i] * tf.preUSD;
			}
			
			//Menu de operaciones
			System.out.println("Bienvenido al menu de operaciones.\n1.Productos.\n2.Clientes.\n3.Realizar compras.\n4.Configuraciones.\n5.Salir.");
			opcion = sc.nextInt();
			switch (opcion) {
			//lista de productos
			case 1:
				tf.lista(lista_can, lista_preUSD, lista_preVES, lista_cod);
				break;
				//Lista y nombre de clientes
			case 2:
				tf.clientes();
				break;
				//Para comptar
			case 3:
				tf.compras(lista_can, lista_preUSD, lista_preVES, lista_cod, lista_prod);
				break;
				//Para configurar algunos valores
			case 4:
				tf.configurar(iva, preUSD);
				break;
			case 5:
				System.out.println("Ha elegido salir del programa");
				verdad = false;
				break;
			default:
				System.out.println("Press Enter To Continue...");
				new java.util.Scanner(System.in).nextLine();
				break;
			}
		}while(verdad);

	}
	//Funcion para ver la lista del inventario
	public void lista(double[] lista_can, double[] lista_preUSD, double[] lista_preVES, int[] lista_cod){
		Nuevoarreglo tf = new Nuevoarreglo(); 
		Scanner sc = new Scanner(System.in);
		String[] lista_prod = tf.inventario();
		char tip;
		System.out.println("Bienvenido a la opcion de Productos. \na. Ver listado");
		tip = sc.next().charAt(0);
		switch (tip) {
			case 'a':
			
				//bucle for para ver las listas
				for(int i = 0; i<10; i++) {
					System.out.println("Producto["+ i + "]: " + lista_prod[i]);
					System.out.println("Cantidad["+ i + "]: " + lista_can[i]);
					System.out.println("Codigo["+ i + "]: " + lista_cod[i]);
					System.out.println("Precio(VES)["+ i + "]: " + lista_preVES[i]);
					System.out.println("Precio(USD)["+ i + "]: " + lista_preUSD[i]);
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
			}
				return;
			
			default:
				System.out.println("Press Enter To Continue...");
				new java.util.Scanner(System.in).nextLine();
				
		}
		return;
	}
	
	//Para introducir los productos al inventario
	 public void clientes(){
		 Scanner sc = new Scanner(System.in);
		 Nuevoarreglo tf = new Nuevoarreglo(); 
		boolean opio = true;
		int tipo;
		char op;

		//Condicional swicth para la opcion 2
		do {
			System.out.println("Bienvenido a la opcion de Clientes.\na. Registro.\nb. Listado.\nc. Salir");
			op = sc.next().charAt(0);
			
			switch (op) {
			case 'a':
				//Condicional switch para las Registro
				boolean libre = true;
				do {
					System.out.println("Bienvenido a la opcion de introducir los datos de los clientes. \n1.Nombre.\n2.Apellido.\n3.Salir.");
					tipo = sc.nextInt();
					switch (tipo) {
					
					//caso nombre
					case 1:
						System.out.println("Introduzca el nombre del cliente: \n");
						tf.lista_clientes_nombre[tf.contador_cli_nombre] = sc.next();
						tf.contador_cli_nombre++;
						
						break;
						
						//caso apelldio
					case 2:
						System.out.println("Introduzca el apellido del cliente: \n");
						tf.lista_clientes_apellido[tf.contador_cli_apellido] = sc.next();
						tf.contador_cli_apellido++;
						
						break;
						
						//Para salir
					case 3:
						System.out.println("Has elegido salir de la opcion User.");
						libre = false;
						break;
						
					//default
					default:
						System.out.println("Press Enter To Continue...");
						new java.util.Scanner(System.in).nextLine();
						break;
					}
				}while(libre);
				break;
				
			//Lista de clientes
			case 'b':
				
				for (int i = 0; i < tf.contador_cli_apellido; i++) {
					System.out.println("Cliente [" + i + "] de nombre "+ tf.lista_clientes_nombre[i]+ " y apellido " + tf.lista_clientes_apellido[i]);
				}
				break;
				
			//Para salir de la opcion
			case 'c':
				System.out.println("Has elegido salir de la opcion");
				opio = false;
				break;
				
			//Default
			default:
				System.out.println("Press Enter To Continue...");
				new java.util.Scanner(System.in).nextLine();
				
			}

		}while(opio);
		System.out.println("Press Enter To Continue...");
		new java.util.Scanner(System.in).nextLine();	
		return;
	}

	//Para introducir las comprar
	public void compras(double[] lista_can, double[] lista_preUSD, double[] lista_preVES, int[] lista_cod, String[] lista_prod){
		
		//Declarar variables 
		Nuevoarreglo tf = new Nuevoarreglo(); 
		Scanner sc = new Scanner(System.in);
		int opcion;
		boolean vida = true;
		
		do {
			
			//Ingresar datos del cliente
			System.out.println("Bienvenido a la opcion de Compras User.");
			System.out.println("Ingrese Nombre del cliente: ");
			tf.lista_clientes_nombre[tf.contador_cli_nombre] = sc.next();
			tf.contador_cli_nombre++;
			System.out.println("Ingrese Apellido del cliente: ");
			tf.lista_clientes_apellido[tf.contador_cli_apellido] = sc.next();
			tf.contador_cli_apellido++;
			
			//Ingresar producto y cantidad a llevar
			System.out.print("Ingrese el producto que desee llevar.");
			String producto = sc.next();
			System.out.print("Ingrese la cantidad de productos que desee llevar.");
			int cantidad = sc.nextInt();
			
			
			vida = false;
		}while(vida);
		
		
		return;
	}

	//Para configurar diferentes opciones
	public double configurar(double iva, double preUSD){
		Nuevoarreglo tf = new Nuevoarreglo(); 
		Scanner sc = new Scanner(System.in);
		char opci;
		System.out.println("Bienvenido a la opcion de configuraciones.\na. Registrar IVA.\nb. Valor del dolar.");
		opci = sc.next().charAt(0);

		switch (opci) {
			case 'a':
				System.out.println("Introduzca el nuevo porcentaje del IVA");
				tf.iva = sc.nextDouble();
				return tf.iva;
				
			case 'b':
				System.out.println("Introduzca el nuevo valor del dolar");
				tf.preUSD = sc.nextDouble();
				
				return tf.preUSD;
				

			default:
				System.out.println("Press Enter To Continue...");
				new java.util.Scanner(System.in).nextLine();	
				
		}
		return 0;
	}

	//Para tener los productos del inventario
	public String[] inventario(){
		String[] lista_inventario = new String[]{"Pollo", "Aceite", "Salsa", "Pasta", "Pan", "Harina", "Queso", "Leche", "Frijoles", "Jamon"};
		return lista_inventario;
	}

}
