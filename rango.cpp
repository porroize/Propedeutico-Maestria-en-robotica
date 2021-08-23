//Programa: rango.cpp
//Autor: Tonalli Garcia
#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main(){
	int n1;
	
	cout << "Introduce un entero en [0, 100]" << endl;
	cin >> n1;
	
	if( n1 >= 0 && n1 <=100){
		cout << n1 << " Esta en el [0, 100]" << endl;		
	}
	else{
		cout << n1 << " No esta en el [0, 100]" << endl;
	}
		
	if(n1%2 == 0 | n1%3 == 0  ){
		cout << n1 << " Es divisible entre 2 o 3" << endl;
	}
	else{
		cout << n1 << " No es divisible entre 2 ni es divisible entre 3" << endl;
	}
	
	if( !(n1==0) ){
		cout << n1 << " Es diferente de cero" << endl;
	}
	else{
		cout << n1 << " Es igual a cero" << endl;
	}
	
	if( n1*n1 >= 0 && n1*n1 <= 50 ){
		cout << "El cuadrado de " << n1 << " es menor que 50" << " y mayor o igual  que 0."<< endl;
	}
	else{
		cout << "El cuadrado de " << n1 << " es mayor que 50" << endl;
	}
	
	if( n1 != 25 || 0 ){
		cout << n1 << " Es diferente a 25 " << endl;		
	}
	else{
		cout <<  n1 << " Es igual a 25" << endl;			
	}
	
	system("Pause");
		
	return 0;
}
