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

//funciones
void agregar();
void eliminar();
void listar();
void buscar();
	
	//variables globales
	stack<productos> pila;
	productos proaux;
	productos *puntero;
	char res;

int main(){
	
	int opc;
	
	system ("cls");
	
	do{
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - INGRESAR NODO A LA PILA"<<endl;
	cout<<"2 - ELIMINAR NODO DE LA PILA"<<endl;
	cout<<"3 - LISTAR PILA"<<endl;
	cout<<"4 - BUSCAR NODO"<<endl;
	cout<<"0 - SALIR"<<endl;
	cout<<"INGRESE UNA OPCION"<<endl;
	cin>>opc;
	
	//verificaicon de la opcion
switch(opc)
{
	//si la respuesta es uno se llama a la funcion del area de un cuadrado
	case 1: agregar();
 	
	break;
 	//si la respuesta es dos se llama a la funcion del area de un cubo
	case 2: eliminar();
	
	break;
	//si la respuesta es tres se sale del programa
	case 3: listar();
	
	break;
	
	case 4: buscar();
	
	break;
	
	case 0: exit(1);
	
	default: 
	//se imprime si la opcion no esta
	cout<<"\n Opcion no valida!!"<<endl; 
	
	//comando para detener la pantalla
	system ("pause");
}
	
}while(opc<1 && opc>4);
	return 0;
}

void agregar()
{
	system ("cls");
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
	
main();
}

void eliminar(){

pila.pop();

system("pause");

main();	
}

void listar()
{
	system ("cls");
	
	for (int i=1;i<=pila.size();i++){
		
		puntero--;
		
			proaux = *puntero;
		
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	
	cout<<"codigo: "<<proaux.codigo<<endl;
	cout<<"nombre: "<<proaux.nombre<<endl;
	cout<<"precio: "<<proaux.precio<<endl;
	cout<<"año: "<<proaux.year<<endl;
	
	}
	system("pause");
	
main();
}

void buscar(){

system ("cls");

	int buscar;
	cout<<"Ingrese codigo"<<endl;
	cin>>buscar;
	
	for (int i=1;i<=pila.size();i++){
		
		puntero--;
		
			proaux = *puntero;
	
	if(buscar==proaux.codigo){
		
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	
	cout<<"codigo: "<<proaux.codigo<<endl;
	cout<<"nombre: "<<proaux.nombre<<endl;
	cout<<"precio: "<<proaux.precio<<endl;
	cout<<"año: "<<proaux.year<<endl;

		}
	}

system("pause");

main();	
}
