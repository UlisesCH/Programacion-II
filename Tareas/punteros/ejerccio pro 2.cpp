/*Programa realisado por Ulises Edgarco Coreas Huezo
Carnet: CH18030 */

/*2. Escribir una función que multiplique un valor por 10 
y devuelva el valor modificado. 
Hacer un programa que la utilice.*/

//librerias utilizadas
#include <iostream>
#include <math.h>

//cuerpo del programa
using namespace std;

//funcion para la multipicacion
void multiplicado();

//variable global
int a;

int main()
{
//peticion del valor
cout<<"Digite el numero a multiplicar con 10: ";
//asigna valor a la variable a
cin>>a;

//llamadao a la funcion multiplicado
multiplicado();
//comando apra retornar a 0
return 0;
}

void multiplicado()
{
	//comando para limmpiar pantalla
	system ("cls");
	
	//se multiplica la variable por 10
	a = a*10;
	//se imprime el resultado
	cout<<"El resultado es: "<<a<<endl;
}
