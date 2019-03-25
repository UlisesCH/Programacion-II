/* Menú para insertar nodos, para eliminar nodos utilizando la plantilla de cola
Creado por: Ulises Edgardo Coreas Huezo
Carnet: CH18030 */

//librerias utilizadas
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <queue>

//cuerpo del programa
using namespace std;

//estructura
struct estru
{
	char marca[26];//almacena la marca
	int memo; //almacena la capacidad de memoria
};
//funciones
void agrega();  //funcion para agregar datos
void elimina(); //funcion para eliminar datos
void lista();	//funcion para la lista de datos

queue<estru> s; //variable de tipo estru
estru aux;	//variable auxiliar
estru *pun;	//variable puntero

int main()
{
	//variable para las opciones
	int opc;
	//cogigo para limpiar pantalla
	system ("cls");
	
	//ciclo para el menu
	do{
		
	//menu del programa
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - INGRESAR DATO"<<endl;
	cout<<"2 - ELIMINAR DATO"<<endl;
	cout<<"3 - LISTA"<<endl;
	cout<<"0 - SALIR"<<endl;
	//peticion 
	cout<<"INGRESE UNA OPCION"<<endl;
	//almacena valor
	cin>>opc;

	//verificaicon de la opcion
switch(opc)
{
	//si la respuesta es uno entra a la funcion de agregar
	case 1: agrega();

	break;
	//si la respuesta es dos entra a la funcion de eliminar
	case 2: elimina();

	break;
	//si la respuesta es tres entra a la funcion lista
	case 3: lista();

	break;
	//si la respuesta es cero se sale del programa
	case 0: exit(1);

	default:	//si la opcion no esta, entra a esto
	//se imprime en pantalla
	cout<<"\n Opcion no valida!!"<<endl; 
	//codigo para pausar la pantalla
	system ("pause");
}
//verifica si se cumple
}while(opc<1 && opc>4);
	return 0;
}

//funcion de agregar
void agrega()
{
	char res; //almacena respuesta
	
	//cogigo para limpiar pantalla
	system ("cls");
	//ciclo
	do{
	//peticion de datos
	cout<<"ingrese marca de la computadora: "<<endl;
	cin>>aux.marca;
	cout<<"ingrese espacio de memoria en GB: "<<endl;
	cin>>aux.memo;
	//almacena
	s.push(aux);
	//imprime peticion
	cout<<"agregar otro nodo? Y/N: "<<endl;
	cin>>res;
	// verifica si comple 
	}while(res=='y'||res=='Y');

main(); //regresa al menu principal
}

//funcion para eliminar
void elimina()
{
//codigo para alimianar
s.pop();
//codigo para pausar la pantalla
system("pause");

main();	//regresa al menu principal
}
//funcion para mostrar listado
void lista()
{	//cogigo para limpiar pantalla
	system ("cls");
	//puntero a punta al comienzo
	pun=&s.front();
	//ciclo para recorrer toda la cola
	for (int i=1;i<=s.size();i++){
			aux = *pun;

	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	//imprime el resoltado
	cout<<"Memoria: "<<aux.memo<<endl;
	cout<<"Marca: "<<aux.marca<<endl;

	pun++;
	}
	//regresa al menu principal
	system("pause");
main();
}
