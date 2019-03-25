/*Programa realisado por Ulises Edgarco Coreas Huezo
Carnet: CH18030 */

/*3. Escribir una función potencia(), que calcule la potencia 
de un número n (tipo double) elevado a un exponente p (tipo int). 
Escribir un programa que haga uso de esta función.*/

//librerias utilizadas
#include <iostream>
#include <math.h>

//cuerpo del programa
using namespace std;

//funcion para la potencia
void potencia();
//variables glovales
double a;//potencia
int b;//exponente

int main()
{
//peticion del valor
cout<<"Digite la potencia: "<<endl;
//asigna valor a la variable a
cin>>a;
//peticion del valor
cout<<"Digite el exponente: "<<endl;
//asigna valor a la variable b
cin>>b;

//comando para detener la pantalla
	system ("pause");

//se llama a la funcion
potencia();
//comando apra retornar a 0
return 0;
	
}

void potencia()
{
	//comando para limmpiar pantalla
	system ("cls");
	
	//variable para la respuesta
	double r;
	//proceso para sacar la potencia
	r=pow(a, b);
	//imprime el resultado
	cout<< a << " elevado a " << b << " es igual a: " << r <<endl;
	
}
