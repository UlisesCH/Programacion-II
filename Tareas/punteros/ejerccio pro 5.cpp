/*Programa realisado por Ulises Edgarco Coreas Huezo
Carnet: CH18030 */

/*5. Escribir una funci�n menorAcero() al que se pasan dos argumentos 
int por referencia y a continuaci�n fijar el menor de los dos n�meros a 0. 
Escribir un programa que utilice esta funci�n.*/

//librerias utilizadas
#include <iostream>
#include <math.h>

//cuerpo del programa
using namespace std;

//funcion para hacer 0
void menorAcero();

//variables globales
int b;
int a;

int main()
{	
	//peticion del valor
	cout<<"Ingrese el valor de su primer numero: "<<endl;
    //asigna valor a la variable a
	cin>>a;
    //peticion del valor
	cout<<"Ingrese el valor de su segundo numero: "<<endl;
	//asigna valor a la variable b
    cin>>b;
	
	//imprime los valores asignados
   cout<<"El valor de su primer numero es: " << a <<endl;
   cout<<"El valor de su segundo numero es: " << b <<endl;
   
   //comando para detener la pantalla
	system ("pause");
	
   //llama a la funcion
   menorAcero();
   
   //comando apra retornar a 0
  return 0;
}

void menorAcero()
{
	//comando para limmpiar pantalla
	system ("cls");
	
	//verificacion si a es menor que b
    if (a<b)
    {	//imporime explicaion del porque el cambio
    	cout<<"El valor de su primer numero: "<<a<<" es menor que el segundo: "<<b<<endl;
    	cout<<"Por lotanto su valor cambia a 0"<<endl;
    	//cambia el valor de a por 0
    	a=0;	
	}
	
	//verificacion si b es menor que a
	else if(b<a)
	{
		//imporime explicaion del porque el cambio
		cout<<"El valor del segundo: "<<b<< " es menor que primer numero: "<<a<<endl;
		cout<<"Por lotanto su valor cambia a 0"<<endl;
		//cambia el valor de b por 0
		b=0;		
	}
	
	//imprime el valor de a
   cout<<"El valor de su primer numero es " << a <<endl;
   //imprime el valor de b
   cout<<"El valor de su segundo numero es " << b <<endl;
} 

