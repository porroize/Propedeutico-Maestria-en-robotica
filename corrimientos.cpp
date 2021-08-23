//Programa: corrimientos.cpp
//Autor: Tonalli Garcia
#include <iostream>
using namespace std;

int main(){
	int n, a, b;
	int suma, resta, and_i, or_i, or_exclusivo, complemento_A, complemento_B;
	
	do{
		cout << "Introduzca el primer entero" << endl;
		cin >> a;
		cout << "Introduzca el segundo entero" << endl;		
		cin >> b;
		cout << "\n\n *** MENU***\n\n"
			 << "1.- Corrimiento a la derecha (dividir)" << endl
			 << "2.- Corrimiento a la izquierda (multiplicar)" << endl
			 << "3.- AND bit a bit" << endl
			 << "4.- OR bit a bit" << endl
			 << "5.- OR exclusivo" << endl
			 << "6.- Complemento a 1" << endl
			 << "7.- Salida \n\n" << endl
			 << "\t\t Introduce tu opcion" << endl;
		cin >> n;
		
		switch(n){
			case 1: 
				suma = a >> b;
				cout << suma << endl; 
				break;
			case 2:
				resta = a << b; 
				cout << resta << endl;
				break;
			case 3:
				and_i = a & b;
				cout << and_i << endl;
				break;
			case 4: 
				or_i = a | b;
				cout <<  or_i << endl;
				break;			
			case 5: 
				or_exclusivo = a^b;
				cout << or_exclusivo << endl;
				break;
			case 6: 
				complemento_A = ~a;
				complemento_B = ~b;
				cout << complemento_A << endl;
				cout << complemento_B << endl;
				break;
			case 7: break;
			default: cout << "Opcion no valida";
		}
		
	}while(n!= 7);
	return 0;
}
