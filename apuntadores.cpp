 //Programa: apuntadores.cpp
 //Autor: Tonalli Garcia

#include <iostream>
using namespace std;

void f1(int n){
   n *= 2; 
   cout << n << endl; //Colocar en el flujo estándar de salida el contenido de la variable n, recien modificada.
}


void f2(int *ptr){
   *ptr *= 2;
   cout << *ptr << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta ptr (F100), es decir 10.
}


void f3(int &ref){
	ref *= 2; //alias
	cout << ref << endl; //Colocar en el flujo estándar de salida el contenido de la variable ref que acabade ser modificado.
}


int main(int argc, char **argv){
	int a=5, b=7, *p1, *p2;
    int &r = a;
   
    p1 = &a;
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de la variable a, es decir 5.
    cout << *p1 << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta p1 (F100), es decir 5.
    cout << &a << endl; //Colocar en el flujo estándar de salida la dirección en memoria de la variable a, es decir F100.
    cout << p1 << endl; //Colocar en el flujo estándar de salida el contenido de p1, es decir F100.
    cout << &p1 << endl; //Colocar en el flujo estándar de salida la dirección del apuntador p1, es decir F120.
    cout << r << endl; //Colocar en el flujo estándar de salida el contenido de la variable alias r, es decir 5.
    cout << &r << endl; //Colocar en el flujo estándar de salida la dirección de la variable alias r, es decir F100.
        
    p2 = &r;
    *p2 = 10;
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 10.
    cout << *p1 << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta p1 (F100), es decir 10.
    cout << *p2 << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta p2 (F100), es decir 10.
    cout << p2 << endl; //Colocar en el flujo estándar de salida el contenido de p2, es decir F100.
    cout << r << endl; //Colocar en el flujo estándar de salida el contenido de la variable alias r, es decir 10.
       
	p2 = &b;
    *p2 = 11;    
    
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 10.
    cout << b << endl; //Colocar en el flujo estándar de salida el contenido de b, es decir 11.
    cout << *p1 << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta p1 (F100), es decir 10.
    cout << *p2 << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta p2 (F110), es decir 11.
    cout << r << endl; //Colocar en el flujo estándar de salida el contenido de la variable alias r, es decir 10.
   
    cout <<*&a << endl; //Colocar en el flujo estándar de salida el contenido al que se accede de manera indirecta a través de la dirección de a(F100), dicho valor es 10.
    cout << *&p1 << endl; //Colocar en el flujo estándar de salida el contenido al que se accede de manera indirecta a través de una dirección (F120), dicha dirección es F100.
    cout <<&*p1 << endl; //Colocar en el flujo estándar de salida la dirección de donde esta apuntando p1, es decir p1 apunta a F100.
    cout <<*&r << endl; //Colocar en el flujo estándar de salida el contenido al que se accede de manera indirecta a través de la dirección de r, dicho contenido es 10.
        
    *p1 = *p2 +a + b + 1;
    
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 33.
    cout << b << endl; //Colocar en el flujo estándar de salida el contenido de b, es decir 11.
    cout << *p1 << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta p1 (F100), es decir 33.
    cout << *p2 << endl; //Colocar en el flujo estándar de salida el contenido hacia donde apunta p2 (F110), es decir 11.
    
    a = 5;    
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 5.		
	f1(a); //A la función f1 se le pasa una copia del valor de la variable "a = 5"; La función f1 realiza lo siguiente: n = n*2 = 5*2 = 10
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 5.
	f2(&a); //Se le envía a la función f2 la dirección de memoria del parámetro actual "a --> F100"; la función f2 modifica directamente a la variable "a" : a = a*2 = 5*2 = 10
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 10
	f3(a); //A la función f3 se le pasa una copia del valor de la variable "a" y esta crea una variable alias que modifica el valor de "a"; ref = ref*2= 10*2 = 20
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 20
	f1(a+b); //A la función f1 se le pasa una copia del valor de la suma de variables "a y b", es decir 20+11=31; La función f1 regresa el valor de 31*2 = 62
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 20
	f2(&b); //Se le envía a la función f2 la dirección de memoria del parámetro actual "b --> F110"; la función f2 modifica directamente a la variable "b" : b = b*2 = 11*2 = 22
	cout << b << endl; //Colocar en el flujo estándar de salida el contenido de b, es decir 22 
	f3(*p1); //A la función f3 se le pasa una copia del valor a donde apunta p1 y esta crea una variable alias que modifica el valor de "a"; ref = ref*2= 20*2 = 40
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 40
	f3(r); //A la función f3 se le pasa una copia de la variable alias "r", despues la función f3 crea una variable alias que modifica el valor de "a"; ref = ref*2= 40*2 = 80
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 80.
	   
    p1 = &a;
	p2 = &b; 
	f1(*p1); //A la función f1 se le pasa una copia del valor hacia donde apunta p1, es decir 80; La función f1 realiza lo siguiente: n = n*2 = 80*2 = 160
	cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 80.		
    f2(p1); //Se le envía a la función f2 el contenido del parámetro actual "p1 --> F100 "; la función f2 modifica directamente a la variable "a" : a = a*2 = 80*2 = 160
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 160.
	f1(r + a); //A la función f1 se le pasa una copia del valor del contenido de la variables alias + el contenido de a (160+160=320); La función f1 realiza lo siguiente: n = n*2 = 320*2 = 640
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 160.
    f2(&r); //Se le envía a la función f2 la dirección de la variable alias "r" (F100); la función f2 modifica directamente a la variable "a" : a = a*2 = 160*2 = 320.
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 320.
    f1(*p2 + *p1); //A la función f1 se le pasa una copia de la suma de donde apuntan p2 y p1, es decir 22 y 320 respectivamente (320+22=342); La función f1 realiza lo siguiente: n = n*2 = 342*2 = 684
    cout << b << endl; //Colocar en el flujo estándar de salida el contenido de b, es decir 22.
    
	f2(p2); //Se le envía a la función f2 el contenido de "p2 --> F110 "; la función f2 modifica directamente a la variable "b" : b = b*2 = 22*2 = 44
    cout << b << endl; //Colocar en el flujo estándar de salida el contenido de b, es decir 44.    
    f3(*p2);  //A la función f3 se le pasa el contenido de donde apunta p2, despues la función f3 crea una variable alias que modifica el valor de "b"; ref = ref*2= 44*2 = 88
    cout << b << endl; //Colocar en el flujo estándar de salida el contenido de b, es decir 88.   
    f2(*&p1); //Se le envía a la función f2 la dirección a la que se accede de manera indirecta a través de la dirección de p1(F120), dicha dirección es (F100); la función f2 modifica directamente a la variable "a" : a = a*2 = 320*2 = 640.
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 640.    
    
	f2(&*p1); //Se le envía a la función f2 la dirección de donde apunta p1, dicha dirección es F100; la función f2 modifica directamente a la variable "a" : a = a*2 = 640*2 = 1280
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 1280.    
        
	f3(*&r); //A la función f3 se le pasa  el contenido al que se accede de manera indirecta a travez de la dirección de "r" (F100), despues la función f3 crea una variable alias que modifica el valor de "a"; ref = ref*2= 1280*2 = 2560
    cout << a << endl; //Colocar en el flujo estándar de salida el contenido de a, es decir 2560.    
    
    return 0;
}
