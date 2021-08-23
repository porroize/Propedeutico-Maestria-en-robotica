//Programa: Corrimientos.java
//Autor: Tonalli Garcia
import java.util.Scanner;
public class Corrimientos{
	public static void main(String [] args){
		Scanner in = new Scanner (System.in);
		int n, a, b;
		int suma, resta, and_i, or_i, or_exclusivo, complemento_A, complemento_B;
		do{
			System.out.println("Introduzca el primer entero");
			a = in.nextInt();
			System.out.println("Introduzca el segundo entero");
			b = in.nextInt();
			System.out.println("\n\n *** MENU*** \n");
			System.out.println("1.- Corrimiento a la derecha (dividir)");
			System.out.println("2.- Corrimiento a la izquierda (multiplicar)");
			System.out.println("3.- AND bit a bit");
			System.out.println("4.- OR bit a bit");
			System.out.println("5.- OR exclusivo");
			System.out.println("6.- Complemento a 1");
			System.out.println("7.- Salida \n\n");
			System.out.println("\t\t Introduce tu opcion");
			n = in.nextInt();
			
			switch(n){
				case 1: 
					suma = a >> b;
					System.out.println(suma);
					break;
				case 2:
					resta = a << b; 
					System.out.println(resta);
					break;
				case 3:
					and_i = a & b;
					System.out.println(and_i);
					break;
				case 4: 
					or_i = a | b;
					System.out.println(or_i);
					break;			
				case 5: 
					or_exclusivo = a^b;
					System.out.println(or_exclusivo);
					break;
				case 6: 
					complemento_A = ~a;
					complemento_B = ~b;
					System.out.println(complemento_A);
					System.out.println(complemento_B);
					break;
				case 7: break;
				default: System.out.println("Opcion no valida");
			}
		}while(n!= 7);
	

	}
}