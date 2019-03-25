//programa: pila01.c
// un simple ejemplo del uso de la platilla stack

#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

struct empleados{
	char nombre[50];
	char apellido[50];
	char codigo[8];
	float sal;
} aux;

int main (int argc, char *argv[])
{
	stack<empleados> s;
	char res;
do{
	
cout<<"Ingrese un nombre"<<endl;
cin>>aux.nombre;
cout<<"Ingrese un apellido"<<endl;
cin>>aux.apellido;
cout<<"Ingrese un codigo"<<endl;
cin>>aux.codigo;
cout<<"Ingrese un salario"<<endl;
cin>>aux.sal;
s.push(aux);

cout<<"Ingrese un nombre [y/n]"<<endl;
cin>>res;
}while(res== 'y');

while(! s.empty())
	{
		aux=s.top();
		cout<<aux.nombre<<" "<<aux.apellido<<" "<<endl;
		cout<<aux.codigo<<" "<<aux.sal<<" ";
		s.pop();
	}
	
	cout<<endl;
	system("pause");
	return EXIT_SUCCESS;
}
