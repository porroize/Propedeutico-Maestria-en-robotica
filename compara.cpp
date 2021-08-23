//Programa: compara.cpp
//Autor: Tonalli Garcia
#include <iostream>
//using namespace std;

int main(){
	int n1, n2;
	
	std::cout << "Introduce dos enteros: "<< std::endl;
	std::cin >> n1 >> n2;
	
	if(n1 >= n2){
		std::cout << n1 << " Es mayor o igual a " << n2 << std::endl;
	}
	
	if(n1 <= n2){
		std::cout << n1 << " Es menor o igual a " << n2 << std::endl;
	}
	
	if(n1 > n2){
		std::cout << n1 << " Es mayor a " << n2 << std::endl;
	}
	
	if(n1 < n2){
		std::cout << n1 << " Es menor a " << n2 << std::endl;
	}
	
	if(n1 != n2){
		std::cout << n1 << " Es diferente a " << n2 << std::endl;
	}
	
	if(n1 == n2){
		std::cout << n1 << " Es igual a " << n2 << std::endl;
	}
	
	
	return 0;
}
