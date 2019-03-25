/*hacer un programa que permita almacenar los datos de productos en una pila
los productos mas antiguos en los ultimos en ser vendidos.
los productos recientes son los que se deben sacar de inventario.

los datos del producto que se debe almacenar son:
codigo (4 digitos)
nombre(25 caracteres)
precio
año*/

#include <iostream>
#include <conio.h>
#include <stack>

using namespace std;

struct productos{
	
	int codigo;
	char nombre[26];
	float precio;
	int year;
	
};

int main(int argc, char** argv){
	
	
	stack<productos> pila;
	productos proaux;
	productos *puntero;
	char res;
		int c=1;
	
	do{
	cout<<"ingrese codigo"<<endl;
	cin>>proaux.codigo;
	cout<<"ingrese nombre del producto"<<endl;
	cin>>proaux.nombre;
	cout<<"ingrese precio"<<endl;
	cin>>proaux.precio;
	cout<<"ingrese años"<<endl;
	cin>>proaux.year;
	pila.push(proaux);
	
	cout<<"agregar otro nodo? Y/N: "<<endl;
	cin>>res;
	}while(res=='y'||res=='Y');
	
	puntero=&pila.top();
	
	/*while (c<=pila.size())	se puede tambien de esta forma
	{
	
	proaux = *puntero;	
	cout<<"ejecicio con memoria dinamica"<<endl;
	cout<<"la posicion de memoria donde inicia la pila es: "<<&pila<<endl;
	cout<<"direccion del tope de la pila: "<<&pila.top()<<endl;	
	
	puntero=&pila.top();
	//puntero--;
	
	cout<<"puntero --: "<<puntero<<endl;
	
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	
	cout<<"codigo: "<<proaux.codigo<<endl;
	cout<<"nombre: "<<proaux.nombre<<endl;
	cout<<"precio: "<<proaux.precio<<endl;
	cout<<"año: "<<proaux.year<<endl;
	
	puntero--;
	c++;
}*/

	for (int i=1;i<=pila.size();i++){
			proaux = *puntero;
		
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	
	cout<<"codigo: "<<proaux.codigo<<endl;
	cout<<"nombre: "<<proaux.nombre<<endl;
	cout<<"precio: "<<proaux.precio<<endl;
	cout<<"año: "<<proaux.year<<endl;
	
	puntero--;
	}

}
	
