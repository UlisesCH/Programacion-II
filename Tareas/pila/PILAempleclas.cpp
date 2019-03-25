//Hacer un programa que nos permita trabajar en una pila, los nombres, apellido, salario y un codigo.

#include <iostream>
#include <stack>
#include <windows.h>

using namespace std;

struct empleados{
	char codigo[9];
	char nombre[51];
	char apellido[51];
	float sal;
};

//funcion para que no acepte letras o 0 cuando pide las veces que llamo
int nl(int clear);

int main (int argc, char *argv[])
{
	
	char yes;
	//eaux es una variable temporal auxiliar.
	empleados eaux;
	empleados *pun;
	//stack tendra una estructura de nodos similar a la de los empleados.
	stack<empleados>pila;
	
	//8 significa el color del fondo, 1 significa el color de la letra
	system("color 81");
	
	do{
	
	cout<<"Cod"<<endl;
	cin>>eaux.codigo;

	cout<<"Nombre"<<endl;
	cin>>eaux.nombre;
	
	cout<<"Apellido"<<endl;
	cin>>eaux.apellido;

	do{
	
	cout<<"Salario"<<endl;
	cin>>eaux.sal;	
	nl(eaux.sal);
	
	}while (eaux.sal <= 0); //fin del ciclo do while
	
	//pila le pondra los valores de eaux
	//pasando los datos por valor (copia)
	pila.push(eaux);
	
	//comando para limmpiar pantalla
	system ("cls");
	
	//8 significa el color del fondo, 1 significa el color de la letra
	system("color 81");
	
	cout<<"Quiere continuar? (Y / N)"<<endl;
	cin>>yes;
	
	}while(yes=='y');

	pun = &pila.top();
	
	int c=1;

	//comando para limmpiar pantalla
	system ("cls");
	
	while (c<=pila.size())
	{
	
	cout<<c<<") Empleado"<<endl;
	eaux = *pun;
	cout<<eaux.codigo<<endl;
	cout<<eaux.nombre<<endl;
	cout<<eaux.apellido<<endl;
	cout<<eaux.sal<<endl;
	cout<<"----------"<<endl;
	
	pun--;
	c++;
}
	system("pause");
	return 0;
}

		//cuerpo de la funcion para que no acepte letras o 0 cuando pide las veces que llamo
int nl(int clear)
{			
	//4 significa el color del fondo, 0 significa el color de la letra
	system("color 40");

	//condicion para saber si es letra o 0
	if(cin.fail()||clear<=0)
	{			//operacion para cumplir la funcion
		cin.clear();
		cin.ignore();
				//limpia la pantalla
		system ("cls");
				//imprime una peticvion
		cout<<"Ingrese un numero por favor"<<endl;
				
}
				//returna a una variable para realizar un ciclo
	return clear;
}
