//programa: Compara.java
//Autor: Tonalli Garcia
import java.util.Scanner;

public class Compara{
	public static void main(String [] args){
		Scanner in = new Scanner(System.in);
		int n1, n2;

		System.out.println("Introduce dos enteros: ");
		n1 = in.nextInt();
		n2 = in.nextInt();

		if( n1 >= n2) {
			System.out.println(n1 + " Es mayor o igual a "+ n2);			
		}

		if( n1 <= n2) {
			System.out.println(n1 + " Es menor o igual a "+ n2);
		}

		if( n1 < n2) {
			System.out.println(n1 + " Es menor a "+ n2);	
		}

		if( n1 > n2) {
			System.out.println(n1 + " Es mayor a "+ n2);	
		}

		if( n1 != n2) {
			System.out.println(n1 + " Es diferente a "+ n2);	
		}

		if( n1 == n2) {
			System.out.println(n1 + " Es diferente a "+ n2);	
		}

	}
}