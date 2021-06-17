//Programa para hacer un inventario
import java.util.Scanner;

public class Nuevoarreglo {

	public static void main(String[] args) {
	
		//Declarar variables
		Double precio_USD = 3100000.00;
		char caso;
		int can_prod = 100, opcion, contador = 0;
		String producto = "N";
		Scanner sc = new Scanner(System.in);
		String[] lista_prod = new String[can_prod];
		int[] lista_can = new int[can_prod];
		int[] lista_cod = new int[can_prod];
		Double[] lista_preVES = new Double[can_prod];
		Double[] lista_preUSD = new Double[can_prod];
	
		do {
			
			System.out.println("Bienvenido al programa User!\nElija una opcion.\n1.Lista de productos\n2.Editar productos.\n3.Total Bruto(VES/USD)\n4.Configuraciones de tasa de cambio.\n5.Salir del programa.");
			opcion = sc.nextInt();

			switch (opcion) {
				
				//Para leer las listas
				case 1:{
					for(int i = 0; i<can_prod; i++) {
						System.out.println("Producto["+ i + "]: " + lista_prod[i]);
					}
					
					for(int i = 0; i<can_prod; i++) {
						System.out.println("Cantidad["+ i + "]: " + lista_can[i]);
					}
					
					for(int i = 0; i<can_prod; i++) {
						System.out.println("Codigo["+ i + "]: " + lista_cod[i]);
					}
					
					for(int i = 0; i<can_prod; i++) {
						System.out.println("Precio(VES)["+ i + "]: " + lista_preVES[i]);
					}
					
					
					for(int i = 0; i<can_prod; i++) {
						System.out.println("Precio(USD)["+ i + "]: " + lista_preUSD[i]);
					}
					
					System.out.println("Press Enter To Continue...");
          			new java.util.Scanner(System.in).nextLine();
					continue;
				}
				//Para introducir los datos a las listas
				case 2:
				{
					int o, p = 0;
					System.out.println("Bienvenido a la opcion para agregar productos.\n0. Producto nuevo.\n1. Producto ya colocado.");
					p = sc.nextInt();
					//Bucle for por si no hay datos puestos

					if (p == 0) {//Si ya se agrego un dato
						System.out.println("Introduzca el numero de productos que va a agregar");
						o = sc.nextInt();
						for (int j = 0; j < o; j++) {
							System.out.println("Introduzca el nombre del producto");
							lista_prod[contador] = sc.next();
							System.out.println("Introduzca el numero del codigo");
							lista_cod[contador] = sc.nextInt();
							System.out.println("Introduzca el precio del producto en bolivares");
							lista_preVES[contador] = sc.nextDouble();
							lista_preUSD[contador] = lista_preVES[contador] * precio_USD;
							System.out.println("Introduzca la cantidad de productos");
							lista_can[contador] = sc.nextInt();
							contador++;
						}
					}
					
					else {//else por si quiere modificar un dato de un producto
						
						System.out.println("Introduzca el numero del orden del producto, si es el primero coloque 0");
						p= sc.nextInt();
						System.out.println("Menu de opciones de cambio.\n1. Nombre.\n2. Codigo.\n3. Precio.\n 4. Cantidad.");
						o= sc.nextInt();
						
						//Condicional switch para editar los productos
						switch (o) {
							//Para cambiar el nombre
							case 1:
								System.out.println("Introduzca el nombre del producto");
								lista_prod[p] = sc.next();
								continue;
								
							//Para cambiar el numero de codigo
							case 2:
								System.out.println("Introduzca el numero del codigo");
								lista_cod[p] = sc.nextInt();
								continue;

							case 3: 
								System.out.println("Introduzca el precio del producto en bolivares");
								lista_preVES[p] = sc.nextDouble();
								lista_preUSD[p] = lista_preVES[p] * precio_USD;
								continue;
							case 4: 		
								System.out.println("Introduzca la cantidad de productos");
								lista_can[p] = sc.nextInt();
								continue;
							default:
								System.out.println("Ha colocado mal un dato.");
								continue;
							}
						}
					can_prod = contador;
					System.out.println("Press Enter To Continue...");
					new java.util.Scanner(System.in).nextLine();
					continue;
				}
				
				//Para ver el precio bruto
				case 3:
				{
					int k;
					System.out.println("Bienvenido a la opcion de ver el precio bruto de los productos\nColoque el numero del orden del producto");
					k = sc.nextInt();

					if (contador != 0) {
						System.out.println("El precio bruto del inventario del producto en VES y USD de " + lista_prod[k] + " es: \nVES: "+ lista_preVES[k] * lista_can[k] + "\nUSD: " + lista_preUSD[k] * lista_can[k]);
					} 
					else{
						System.out.print("No has introducido ningun producto en la lista.");
					}
					System.out.println("Press Enter To Continue...");
         			new java.util.Scanner(System.in).nextLine();
					continue;
				}
				//Para las configuraciones
				case 4:
				
					System.out.println("Bienvenido a la opcion de configuracion.\na. Configuracion del precio del dolar.\n");
					caso = sc.next().charAt(0);
						switch(caso){
							//Para el precio del dolar
							case 'a':
								System.out.println("Bienvenido a la opcion de modificar el precio del dolar\nColoque un nuevo precio: ");
								precio_USD = sc.nextDouble();

								System.out.println("El nuevo precio de dolar en VES es: " + precio_USD);
								
								if (contador != 0){
									for (int k = 0; k < can_prod; k++) {
										lista_preUSD[k] = lista_preVES[k] * precio_USD;
									}
								}
								System.out.println("Press Enter To Continue...");
         						new java.util.Scanner(System.in).nextLine();
								continue;
							
							default:
								System.out.println("Ha introducido mal un dato");
								continue;
						}
					
					
					//Para salir del programa
				case 5:
					System.out.println("Hasta luego user!");
					producto = "Y";
					System.out.println("Press Enter To Continue...");
         			new java.util.Scanner(System.in).nextLine();
					break;

				default:
					System.out.println("Has introducido mal un dato.");
					continue;
			}
			
		} while(producto.equals("N"));
		}
		
	}


