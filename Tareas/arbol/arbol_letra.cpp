//programa hecho por Ulises Edgardo Coreas Huezo
//carnet CH18030

//librerias
#include <iostream>
#include <conio.h>
#include <stdlib.h>

//cuerpo del programa
using namespace std;

struct nodo{ //structura
	char nro;
	struct nodo *izq, *der;
};

typedef struct nodo *ABB; //le pone un aliaz a struct nodo el cual es ABB

void insertar(ABB &arbol, char x) //resive el valor de x
{
	if(arbol == NULL)//solo si no hay ni un valor
	{
		ABB nuevonodo=new(struct nodo); //crea nodo
		nuevonodo->nro=x;
		nuevonodo->izq=NULL;
		nuevonodo->der=NULL;
		arbol=nuevonodo;//cabia la direccion del apunte de arbol
	}
	//si es diferente a las vocales se dirigen a la izquierda
	else if(x!='a','e','i','o','u')
		insertar(arbol->izq,x); //funcion recursiva
	//si no se dirigen a la derecha
	else 
	 	insertar(arbol->der,x); //funcion recursiva 
}
//funcion para mostrar el arbol
void verarbol (ABB arbol, int n)
{
	if(arbol==NULL) //verificacion si el arbol esta vacio
		return;
		
	else{//ciclo para mostrar en orden el arbol
	for(int i=0; i<n; i++)
	{
		cout<<"   ";
	}
	
		cout<<arbol->nro<<endl;
		verarbol(arbol->der,n+1);
	}
	verarbol(arbol->izq,n+1);
		
}
//funcion para mostrar el preorden
void preorden(ABB arbol)
{
	if(arbol!=NULL)	//verificacion para saber si el arbol esta vacio
	{
		cout<<arbol->nro<<"  ";
		 preorden(arbol->izq);
		 preorden(arbol->der);
	}
}

int main()
{
	ABB arbol=NULL;
	char x;//dato insertar en el nodo
	int n;//numero de nodos
	
	cout<<"ARBOL BINARIO"<<endl;
	cout<<"Inserte el numero de nodos del arbol: "<<endl;
	cin>>n;
	
	//ciclo para la peticion de nodos
	for(int i=0; i<n; i++)
	{
		cout<<"Ingrese la letra del nodo"<<endl;
		cin>>x;
		insertar(arbol,x);
	}
	//muestra el arbol
	cout<<"Mostrando el arbol"<<endl;
	verarbol(arbol,n);
	//muestra el preorden de los nodos
	cout<<"Mostrando el arbol en preorden"<<endl;	
	preorden(arbol);
	
	cout<<endl;
	
	system("pause");
	
	return 0;	
}
