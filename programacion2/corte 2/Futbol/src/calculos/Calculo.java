package calculos;
import persona.Principal;
import persona.Persona;
//Archivo para sacar los calculos
public class Calculo {
	Persona per;//Inicializar instancia
	static Principal pr = new Principal();
	
	
	
	//Para obtneer lo que se paga anualmente en salarios
	public double getSueldoAnual() {
		double sueldo = 0;
		
		for(int i = 0; i < per.contador_personas; i++) {
			sueldo+= pr.lista_jugadores[i].getSueldo();
			sueldo+= pr.lista_entrenadores[i].getSueldo();
			sueldo+= pr.lista_directivos[i].getSueldo();
		}
		
		return sueldo;
	}
	//Para obtener el sueldo mensual
	public double getSueldoMensual() {
		
		double sueldo = 0;
		sueldo = getSueldoAnual()/12;
		return sueldo;
	}
	
	//Para obtener el menor y mayor sueldo de jugadores
	public double datos_jug(int opcion) {
		double mayor = 0, menor = 10000000;
		int index = 0;
		//Para el menor
		if(opcion == 1) {
			//Para obtener el menor en un ciclo for
			for(int i = 0; i<pr.lista_jugadores.length; i++) {
				if(menor < pr.lista_jugadores[i].getSueldo()) {
					menor = pr.lista_jugadores[i].getSueldo();
				}
			}
			
			//para obtener el indice
			for(int i = 0; i<pr.lista_jugadores.length; i++) {
				if(menor == pr.lista_jugadores[i].getSueldo()) {
					index = i;
				}
			}
			System.out.print("El jugador que menos gana es "+  pr.lista_jugadores[index].getNombre() + " " + pr.lista_jugadores[index].getApellido() +" con un sueldo de " + pr.lista_jugadores[index].getSueldo());	
			
			return menor;
		}
		
		//Para el mayor
		if(opcion == 2) {
			//Para obtener el mayor e un ciclo for
			for(int i = 0; i<pr.lista_jugadores.length; i++) {
				if(mayor > pr.lista_jugadores[i].getSueldo()) {
					mayor = pr.lista_jugadores[i].getSueldo();
				}
			}
			
			//para obtener el indice
			for(int i = 0; i<pr.lista_jugadores.length; i++) {
				if(mayor == pr.lista_jugadores[i].getSueldo()) {
					index = i;
				}
			}
			System.out.print("El jugador que mas gana es "+  pr.lista_jugadores[index].getNombre() + " " + pr.lista_jugadores[index].getApellido() +" con un sueldo de " + pr.lista_jugadores[index].getSueldo());
			
			
			return mayor;
		}
		
		
		return 0;
	}

	
	//Para obtener el mayor  y menor sueldo de entrenadores
	public double datos_ent(int opcion) {
		int index = 0;
		double mayor = 0, menor = 10000000;
		if(opcion == 1) {
			
			for(int i = 0; i<pr.lista_entrenadores.length; i++) {
				if(menor < pr.lista_entrenadores[i].getSueldo()) {
					menor = pr.lista_entrenadores[i].getSueldo();
				}
			}
			
			//para obtener el indice
			for(int i = 0; i<pr.lista_entrenadores.length; i++) {
				if(mayor == pr.lista_entrenadores[i].getSueldo()) {
					index = i;
				}
			}
			System.out.print("El entrenador que menos gana es "+  pr.lista_entrenadores[index].getNombre() + " " + pr.lista_entrenadores[index].getApellido() +" con un sueldo de " + pr.lista_entrenadores[index].getSueldo());
			
			
			return menor;
		}
		if(opcion == 2) {
			
			for(int i = 0; i<pr.lista_entrenadores.length; i++) {
				if(mayor > pr.lista_entrenadores[i].getSueldo()) {
					mayor = pr.lista_entrenadores[i].getSueldo();
				}
			}
			
			//para obtener el indice
			for(int i = 0; i<pr.lista_entrenadores.length; i++) {
				if(mayor == pr.lista_entrenadores[i].getSueldo()) {
					index = i;
				}
			}
			System.out.print("El entrenador que mas gana es "+  pr.lista_entrenadores[index].getNombre() + " " + pr.lista_entrenadores[index].getApellido() +" con un sueldo de " + pr.lista_entrenadores[index].getSueldo());
			
			return mayor;
		}
		
		
		return 0;
		
	}


	//Para obtener el mayor  y menor sueldo de directivos
	public double datos_dir(int opcion) {
		double mayor = 0, menor = 10000000;
		int index = 0;
		
		//Para el menor
		if(opcion == 1) {
			//Para el menor
			for(int i = 0; i<pr.lista_directivos.length; i++) {
				if(menor < pr.lista_directivos[i].getSueldo()) {
					menor = pr.lista_directivos[i].getSueldo();
				}
			}
			//Para obtener el indice
			for(int i = 0; i<pr.lista_directivos.length; i++) {
				if(menor == pr.lista_directivos[i].getSueldo()) {
					index = i;
				}
			}
			System.out.print("El directivo que menos gana es "+  pr.lista_directivos[index].getNombre() + " " + pr.lista_directivos[index].getApellido() +" con un sueldo de " + pr.lista_directivos[index].getSueldo() );
			return menor;
		}
		
		//Para el mayor
		if(opcion == 2) {
			//Para obtener el mayor
			for(int i = 0; i<pr.lista_directivos.length; i++) {
				if(mayor > pr.lista_directivos[i].getSueldo()) {
					mayor = pr.lista_directivos[i].getSueldo();
				}
			}
			//Para obtenre el indice
			for(int i = 0; i<pr.lista_directivos.length; i++) {
				if(menor == pr.lista_directivos[i].getSueldo()) {
					index = i;
				}
			}
			System.out.print("El directivo que menos gana es "+  pr.lista_directivos[index].getNombre() + " " + pr.lista_directivos[index].getApellido() +" con un sueldo de " + pr.lista_directivos[index].getSueldo());
			
			
			return mayor;
		}
		
		
		return 0;
		
	}


}
