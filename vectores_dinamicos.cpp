 //Programa: vectores_dinamicos.cpp
 //Autor: Tonalli Garcia
 #include <iostream>
 using namespace std;
 
 //Prototipo de funciones
 int* inicializaVector(int);
 void printVector(int[], int);
 void leeVector(int *, int);
 void duplicaVector(int *, int n);
 void liberaVector(int **);
 
 int main(){
 	
 	int *vec1 = NULL;	//declaración de apuntador e inicializado en NULL
 	int tamanho; //Declaración de variable que contendra la longitud del vector dinamico
 	
 	cout << "Introduce el tamaño: " << endl;
 	cin >> tamanho;
 	
 	//los apuntadores almacenan direcciones de memoria
 	vec1 = inicializaVector(tamanho);
 	printVector(vec1, tamanho);
 	cout << endl;
 	
 	leeVector(vec1, tamanho);
 	printVector(vec1, tamanho);
 	cout << endl;
 	
 	duplicaVector(vec1,tamanho);
 	printVector(vec1, tamanho);
 	cout << endl;
 	
 	liberaVector(&vec1);
 	cout << vec1 << endl;
	return 0; 	
 }
 
 //Declaración de funciones
 int* inicializaVector(int n){
 	int *p = new int[n];
	for(int i = 0; i <n; i++){
		p[i] = 0;	 	
	}
	return p;  
 }
 
 void printVector(int a[], int n){
 	for( int i = 0; i <n; i++){
 		cout << *(a++) << " ";		 		
	}
	cout << endl; 	
 }
 
 void leeVector(int *a, int n){
 	for(int i = 0; i < n; i++, a++){
 		cout << "a[" << i << "]= " ;		
 		cin >> *a;
	}
	cout << endl;	
 }
 
 void duplicaVector(int *a, int n){
 	for(int i = 0; i < n; i++){
 		*(a+i) *= 2; 		
	}	
 }
 
 void liberaVector(int **a){
 	delete [] *a;
 	*a = NULL;
 }
 
 
 
 
 
