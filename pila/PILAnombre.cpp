//programa: pila01.c
// un simple ejemplo del uso de la platilla stack

#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

struct datos{
	char nombre[20];
	char apellido[20];
} aux;

int main (int argc, char *argv[])
{
	stack<datos> s;
	char res;
do{
	
cout<<"Ingrese un nombre"<<endl;
cin>>aux.nombre;
cout<<"Ingrese un apellido"<<endl;
cin>>aux.apellido;
s.push(aux);

cout<<"Ingrese un nombre [y/n]"<<endl;
cin>>res;
}while(res== 'y');

while(! s.empty())
	{
		aux=s.top();
		cout<<aux.nombre<<" "<<aux.apellido<<" ";
		s.pop();
	}
	
	cout<<endl;
	system("pause");
	return EXIT_SUCCESS;
}
