/*Programa realisado por Ulises Edgarco Coreas Huezo.
Carnet: CH18030.*/

/*	-Hacer un programa que permita invertir una cadena de caracteres utilizando punteros
	-Codigo de como pasar toda la cadena a minúscula o mayúscula todo.*/

//variables utilizadas.
#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<cstdlib>

//cuerpo del programa.
using namespace std;

//funcion del contador.
void contar(char *);

//variable global.
char p[500]; //varible para almacenar la palabra.

int main(){

	//peticion de la palabra.
	cout<<"Digite una palabra: ";
	//almacena la palabra y espacios.
	cin.get(p,500);

	//comando para que todo se combierta en minusculas.
	tolower(*p);

	//imprime la palabra dijitada.
	cout<<"Su palabra es: "<<p<<endl;
	//llama a la funcion del contador.
	contar(p);

	//comando para detener el programa.
	return 0;
}

void contar(char *c)
{
	//variable del contador incia en 0.
	int cont=0;

	//ciclo apra el contador.
	while (*c!='\0')
	{
		//validacion si todas las vocales estan en minusculas.
		if (*c=='a' || *c=='e' || *c=='i' || *c=='o' || *c=='u')
		{	//si cumple se le suma 1 al contador.
			cont++;
		}
		//es para que el ciclo continue sin romperse.
		c++;
	}

	//imprime la cantidad de vocales que hay en la palabra.
	cout<<"Cantidad de vocales: "<<cont<<endl;

	//invierte las letras.
	cout<<"Orden de las letras invertidas "<<endl;

	/*el contador se multiplica para dejar mas espacio
	por si la palabra tiene mas consonantes que vocales
	ejemplo pteranodon.*/

	//ciclo para hacer la invercion.
	for (int i=cont*2.5; i>=0; i--)
	{

	//se agina el valor.
	c=&p[i];

	//se imprime el resultado.
	cout<<*c<<endl;
	}
}
