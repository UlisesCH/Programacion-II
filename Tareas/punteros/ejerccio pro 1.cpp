/*Programa realisado por Ulises Edgarco Coreas Huezo
Carnet: CH18030 */

/*1. Escribir una función mayor() que intercambie dos valores 
cuando el primero sea mayor que el segundo. 
Hacer un programa que la utilice.*/

//librerias utilizadas
#include <iostream>
#include <math.h> 

//cuerpo del programa
using namespace std;

//funcion mayor que
void mayor(); 
//variables globales	
	int a;
	int b;

int main() 
{
	//peticion de valor
	cout<<"Digite el primer valor"<<endl;
	//asigna valor a la variable a
	cin>>a;
	//peticion de valor
	cout<<"Digite el segundo valor"<<endl;
	//asigna valor a la variable b
	cin>>b;
	
	//llamado a la funcion mayor
	mayor();
	
	//comando para detener la pantalla
	system ("pause");
	

	//comando apra retornar a 0
	return 0;
} 

void mayor()
{
	//comando para limmpiar pantalla
	system ("cls");
	
//condicionnal si a es mayor que b
	if (b < a)
	{
  
	int c;
	  
	c = a;    
	a = b;    
	b = c; 
	
	//explicacion del porque el cambio
	cout<<"El primer valor es mayor que el segundo valor"<<endl;
	cout<<"Por lo tanto se intercambiaron los valores"<<endl;	
	}

	else if (a < b)
	{
		cout<<"No hay cambios"<<endl;
	}

//imoprime los resultados
cout<<"Primer valor: "<<a<<endl;
	
cout<<"Segundo valor: "<<b<<endl;
}
