

//librerias utilizadas
#include <iostream>
#include <conio.h>
#include <locale.h>//libreria para que reconozca palabras en español

//cuerpo del programa
using namespace std;

//estructura
struct producto
{	
	int cod;	//variable representa al codigo del producto
	char nombre[26];//variable representa al nombre del producto
	float precio;//variable representa al precio del producto
	int year;//variable representa al año del producto
	
};

void c()	//funcion para cambiar color de pantalla
{				
//8 significa el color del fondo, 1 significa el color de la letra
	system("color 81");
}

void l()	//funcion para limpiar pantalla
{				
	system("cls");
}

void p()	//funcion para pausar la pantalla
{				
	system("pause");
}

//funcion para que no acepte letras o menor que 0
float nl(float clear);

//funciones del menu principal
void agregar();	//agrega datos
void lista();	//muestra los datos en una lista
void buscar();	//busca nodos

//funciones para el menu de buscar
void cod();	//se busca por medio del codigo del producto
void precio();//se busca por medio del precio del producto
void year(); //se busca por medio del año del producto

	//arreglo de la estrucura producto
	producto arreglo[]={};
	//declara variable auxiliar
	producto aux;
	
	//variables globales
	char resp; //representa algunas respuestas
	int busq; //representa a la busqueda de datos
	int nod = 2;// represeta el numero de nodos

int main()
{
	setlocale(LC_CTYPE,"spanish"); //codigo para que reconozca palabras en español
	
	int opc;//representa las opciones del menu
	
	//llama a la funcion de limpiar la pantalla
	l();
	
	//llama a la funcion para cambiar color de la pantalla
	c();
	//ciclo para el menu principal
	do{
		//imprime opciones del menu principal
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - INGRESAR NUEVO DATO"<<endl;
	cout<<"2 - LISTA DE DATOS"<<endl;
	cout<<"3 - BUSCAR DATO"<<endl;
	cout<<"0 - SALIR DEL PROGRAMA"<<endl;
	cout<<"INGRESE UNA OPCION"<<endl;
	//amacena la opcion
	cin>>opc;
	
	//verificacion de la opcion
switch(opc)
{
	//si la respuesta es uno entra a la funcion de agragar
	case 1: agregar();
 	
	break;
 	//si la respuesta es dos entrara a la funcion de lista
	case 2: lista();
	
	break;
	//si la respuesta es tres entrara a la funcion buscar
	case 3:	buscar();
	
	break;
	//si la respuesta es cero se terminara el programa
	case 0: exit(1);
	
	default: 
	//se imprime si la opcion no esta
	cout<<"\n Opcion no existe!!"<<endl; 
	
	//llama a la funcion para pausar la pantalla
	p();
	//regresa al comienzo del menu
	main();
}
	//si la opcion no es valida regresa al comienzo del menu
}while(opc<1 && opc>4);
}
	//cuerpo de la funcion para agregar datos
void agregar()
{	
	//ciclo para la respuesta
	do{
		
		//llama a la funcion de limpiar la pantalla
	l();
		
	//ciclo de verificacion
	do{
		//llama a la funcion para cambiar color de la pantalla
		c();
	//imprime peticion
	cout<<"CODIGO DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>aux.cod;
	//llama a la funcion de no acceptar letras
	nl(aux.cod);
	
	}while (aux.cod <= 0); //verifica si el dato es valido
	
		//llama a la funcion para cambiar color de la pantalla
		c();
	//imprime peticion
	cout<<"NOMBRE DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>aux.nombre;
	
		//ciclo de verificacion
	do{
		//llama a la funcion para cambiar color de la pantalla
		c();
	//imprime peticion	
	cout<<"PRECIO DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>aux.precio;
	//llama a la funcion de no acceptar letras
	nl(aux.precio);
	
	}while (aux.precio <= 0); //verifica si el dato es valido
	
		//ciclo de verificacion
	do{
		//llama a la funcion para cambiar color de la pantalla
		c();
	//imprime peticion		
	cout<<"AÑO DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>aux.year;
	//llama a la funcion de no acceptar letras
	nl(aux.year);
	
	}while (aux.year <= 0); //verifica si el dato es valido
	
	//almacena nodo en la variable auxiliar
	arreglo[nod]=aux;
	//genera otro nodo
	nod++;
	//imprime peticion
	cout<<"Desea ingresar otro nodo?  [Y/N] ";
	//almacena respuesta
	cin>>resp;
		//verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	}while(resp=='y'||resp=='Y');
	
	//llama a la funcion para pausar la pantalla
	p();
	
		//si la respuesta es n sale y regresa al menu principal
	main();
}
	//cuerpo de la funcion para imprimir datos
void lista()
{
	//llama a la funcion de limpiar la pantalla
	l();
	
	//ciclo para mostrar todos los nodos al macenado en forma de lista
	for (int i=2; i<=nod-1; i++)
	{	//imprime posicion del nodo
		cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
		//imprime codigo del nodo
		cout<<arreglo[i].cod<<endl;
		//imprime nombre del nodo
		cout<<arreglo[i].nombre<<endl;
		//imprime precio del nodo
		cout<<arreglo[i].precio<<endl;
		//imprime año del nodo
		cout<<arreglo[i].year<<endl;
		//imprime separador
		cout<<"----------------------------------------"<<endl;
	}
	//llama a la funcion para pausar la pantalla
	p();	
	//regresa al menu principal
	main();
	
}
//cuerpo de la funcion para buscar datos
void buscar()
{

	int opc;
	
	//llama a la funcion de limpiar la pantalla
	l();
	
	//llama a la funcion para cambiar color de la pantalla
	c();
	
	//ciclo para el menu de busqueda
	do{
		//imprime opciones del menu principal
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - BUSCAR POR CODIGO"<<endl;
	cout<<"2 - BUSCAR POR PRECIO"<<endl;
	cout<<"3 - BUSCAR POR AÑO"<<endl;
	cout<<"0 - REGRESAR AL MENU PRINCIPAL"<<endl;
	cout<<"INGRESE UNA OPCION"<<endl;
	//amacena la opcion
	cin>>opc;
	
	//llama a la funcion de limpiar la pantalla
	l();
	
	//verificaicon de la opcion
switch(opc)
{
	//si la respuesta es uno entra a la funcion de cod
	case 1: cod();
 	
	break;
 	
	//si la respuesta es tres entrara a la funcion precio
	case 2:	precio();
	
	break;
	
	//si la respuesta es cuatro entrara a la funcion años
	case 3:	year();
	
	break;
	//si la respuesta es cero regresa al menu principal
	case 0: main();
	
	default: 
	//se imprime si la opcion no esta
	cout<<"\n Opcion no existe!!"<<endl; 
	
	//llama a la funcion para pausar la pantalla
	p();
	//regresa al comienzo del menu
	buscar();
}
//si la opcion no es valida regresa al comienzo del menu
}while(opc<1 && opc>4);
}

//cuerpo de la funcion codigo
void cod()
{	
	//llama a la funcion de limpiar la pantalla
	l();
	
	//ciclo para la respuesta
	do{
	//imprime peticion
	cout<<"Ingrese el codigo que quiere buscar"<<endl;
		//almacena dato
   	    cin>>busq;
 	    //ciclo para recorer todos los nodos almacenados en forma de lista
		for(int i=2;i<=nod-1;i++)
		{	
			//condicion para mostrar entre todos los nodos al que se busca
			if(busq==arreglo[i].cod){
				//imprime posicion del nodo
			cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
			//imprime codigo del nodo
			cout<<arreglo[i].cod<<endl;
			//imprime nombre del nodo
			cout<<arreglo[i].nombre<<endl;
			//imprime precio del nodo
			cout<<arreglo[i].precio<<endl;
			//imprime año del nodo
			cout<<arreglo[i].year<<endl;
			//imprime separador
			cout<<"----------------------------------------"<<endl;
			
			}
		}
		//imprime peticion
		cout<<"Desea buscar otro nodo?  [Y/N] ";
	//almacena respuesta
	cin>>resp;
	
	//verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	}while(resp=='y'||resp=='Y');
	
	//llama a la funcion para pausar la pantalla
	p();
	
	buscar();
}

//cuerpo de la funcion precio
void precio(){
	
	//ciclo para la respuesta
	do{
			
	//llama a la funcion de limpiar la pantalla
	l();
	
	//imprime peticion
	cout<<"Ingrese el precio que quiere buscar"<<endl;
   	    cin>>busq;
 	    //ciclo para recorer todos los nodos almacenado en forma de lista
		for(int i=2;i<=nod-1;i++)
		{
			//condicion para mostrar entre todos los nodos al que se busca
			if(busq==arreglo[i].precio){
				//imprime posicion del nodo
			cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
			//imprime codigo del nodo
			cout<<arreglo[i].cod<<endl;
			//imprime nombre del nodo
			cout<<arreglo[i].nombre<<endl;
			//imprime precio del nodo
			cout<<arreglo[i].precio<<endl;
			//imprime año del nodo
			cout<<arreglo[i].year<<endl;
			//imprime separador
			cout<<"----------------------------------------"<<endl;
			
			}
		}
		
		//imprime peticion
		cout<<"Desea buscar otro nodo?  [Y/N] ";
	//almacena respuesta
	cin>>resp;
	
	//verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	}while(resp=='y'||resp=='Y');
	
	//llama a la funcion para pausar la pantalla
	p();
	
	buscar();
}

//cuerpo de la funcion año
void year(){
	
	//ciclo para la respuesta
	do{	
	
	//llama a la funcion de limpiar la pantalla
	l();
	
	//imprime peticion
	cout<<"Ingrese el año que quiere buscar"<<endl;
   	    cin>>busq;
 	    //ciclo para recorer todos los nodos almacenado en forma de lista
		for(int i=2;i<=nod-1;i++)
		{
			//condicion para mostrar entre todos los nodos al que se busca
			if(busq==arreglo[i].year){
				//imprime posicion del nodo
			cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
			//imprime codigo del nodo
			cout<<arreglo[i].cod<<endl;
			//imprime nombre del nodo
			cout<<arreglo[i].nombre<<endl;
			//imprime precio del nodo
			cout<<arreglo[i].precio<<endl;
			//imprime año del nodo
			cout<<arreglo[i].year<<endl;
			//imprime separador
			cout<<"----------------------------------------"<<endl;
			
			}
		}
		
		//imprime peticion
		cout<<"Desea buscar otro nodo?  [Y/N] ";
	//almacena respuesta
	cin>>resp;
	
	//verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	}while(resp=='y'||resp=='Y');
	
	//llama a la funcion para pausar la pantalla
	p();
	
	buscar();
}

		//cuerpo de la funcion para que no acepte letras o menores que 0
float nl(float clear)
{			
	//4 significa el color del fondo, 0 significa el color de la letra
	system("color 40");

	//condicion para saber si es letra o menores que 0
	if(cin.fail()||clear<0)
	{			//operacion para cumplir la funcion
		cin.clear();
		cin.ignore();
			//llama a la funcion de limpiar la pantalla
		l();
				//imprime una peticion
		cout<<"Ingrese un numero por favor"<<endl;
			//llama a la funcion para pausar la pantalla
		p();
}
				//returna a una variable para realizar un ciclo
	return clear;
}
