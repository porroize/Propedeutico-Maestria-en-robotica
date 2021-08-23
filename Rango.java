//Programa: Rango.java
//autor: Tonalli Garcia

import java.util.Scanner;
public class Rango{
	public static void main(String [] args){
		Scanner in = new Scanner(System.in);

		int n1;
		System.out.println("Introduce un entero en [0, 100]");
		n1 = in.nextInt();
		
		if( n1 >= 0 && n1 <= 100) {
			System.out.println(n1 + " Esta en [0, 100]");
		}
		else{
			System.out.println(n1 + " No esta en [0, 100]");
		}

		if(n1%2 == 0 | n1%3 == 0  ){
		System.out.println(n1 + " Es divisible entre 2 o 3");
		}
		else{
			System.out.println(n1 + " No es divisible entre 2 ni es divisible entre 3");
		}

		if( !(n1==0) ){
			System.out.println(n1 + " Es diferente de cero");
		}
		else{
			System.out.println(n1 + " Es igual a cero");
		}

		if( n1*n1 >= 0 && n1*n1 <= 50 ){
			System.out.println("El cuadrado de " + n1 + "es menor que 50 y mayor o igual que cero");
		}
		else{
			System.out.println("El cuadrado de " + n1 + " es mayor que 50");
		}

		if( n1 != 25 || false ){
			System.out.println(n1 + " Es difernte a 25");
		}
		else{
			System.out.println(n1 + " Es igual a 25");
		}

	}
}