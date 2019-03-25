#include <iostream>
#include <stack>
#include <conio.h>

using namespace std;

struct llantas
{
	int codigo;
	char modelo[20];
	char marca[20];
	char tamaio[25];
};

int main()
{
	stack<llantas> pila_llantas;
	llantas aux;
	char res;
	llantas *puntero;
	int opc;
	
do{
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1-AGREGAR NODO"<<endl;
	cout<<"2-ELIMINAR NODO"<<endl;
	cout<<"3-MOSTRAR NODO"<<endl;
	cout<<"4-SALIR"<<endl;
	cout<<"INGRESE UNA OPCION:"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			
	do{
	
	cout<<"cod: "<<endl;
	cin>>aux.codigo;
	cout<<"marca: "<<endl;
	cin>>aux.marca;
	cout<<"modelo: "<<endl;
	cin>>aux.modelo;
	cout<<"tamaño: "<<endl;
	cin>>aux.tamaio;
	pila_llantas.push(aux);
	//cout<<&pila_llantas;
	
	cout<<"desea continuar? [y/n]: ";
	}while(res=='y'||res=='Y');
		
		break;
		
		case 2:
			pila_llantas.pop();
			puntero=&pila_llantas.top();
			
		break;
		
		case 3:

		for(int i=1; i<=pila_llantas.size();i++)
	{
		aux=*puntero;
	
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	
	cout<<"cod: "<<aux.codigo<<endl;
	cout<<"marca: "<<aux.marca<<endl;
	cout<<"modelo: "<<aux.modelo<<endl;
	cout<<"tamaño: "<<aux.tamaio<<endl;
		
	puntero--;
	}
		break;
		
		case 4:
			int codb;
			cout<<"Ingrese el codigo"<<endl;
	   	        cin>>codb;
	   	        puntero=&pila_llantas.top();
	   	       for(int i=1;i<=pila_llantas.size();i++)
				{
					aux=*puntero;
					if(codb==aux.codigo){
						
						cout<<"----------------------------"<<endl;
	
						cout<<"cod: "<<aux.codigo<<endl;
						cout<<"marca: "<<aux.marca<<endl;
						cout<<"modelo: "<<aux.modelo<<endl;
						cout<<"tamaño: "<<aux.tamaio<<endl;
						
					}
				}
			
		break;
		
		case 5: exit(1);
			
		break;
		
		default: 
	//se imprime si la opcion no esta
	cout<<"\n Opcion no valida!!"<<endl; 
	
	//comando para detener la pantalla
	system ("pause");
	}
	
}while(opc<1 && opc>4);
	
	
	getch();
	return 0;
}
