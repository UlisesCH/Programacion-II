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


int main (int argc, char *argv[])
{
	
	char yes;
	//eaux es una variable temporal auxiliar.
	empleados eaux;
	empleados *pun;
	//stack tendra una estructura de nodos similar a la de los empleados.
	stack<empleados>pila;
	
	
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
	
	}while (eaux.sal <= 0); //fin del ciclo do while
	
	//pila le pondra los valores de eaux
	//pasando los datos por valor (copia)
	pila.push(eaux);
	
	cout<<"Quiere continuar? (Y / N)"<<endl;
	cin>>yes;
	
	}while(yes=='y');

	pun = &pila.top();
	
	int c=1;

	
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
