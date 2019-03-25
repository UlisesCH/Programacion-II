/*Programa realisado por Ulises Edgarco Coreas Huezo
Carnet: CH18030 */

/*4. Diseñar una función area() que pueda calcular 
el área de un cuadrado y un cubo. 
Escribir un programa que haga uso de esta función.*/

//librerias utilizadas
#include <iostream>

//cuerpo del programa
using namespace std;

//funcion para el area de un cuadrado
void arecua();
//funcion para el area de un cubo
void arecub();

//variables globales
double b; //base
double a; //altira
double are; //resultado

int main()
{
	//variable para las opciones
	int opc;
//siclo para repertir si selecciona una opcion invalida
do
{
	//comando para limmpiar pantalla
	system ("cls");
	
	//menu de opciones
cout<<"\t1. Sarca area de un cuadrado"<<endl;

cout<<"\t2. Sarca area de un cubo"<<endl;

cout<<"\t3. Salir"<<endl;

//peticion de la opcion
cout<<"\n Ingrese opcion: ";
//asigna el valor
cin>>opc;
	
	//comando para limmpiar pantalla
	system ("cls");

//verificaicon de la opcion
switch(opc)
{
	//si la respuesta es uno se llama a la funcion del area de un cuadrado
	case 1: arecua();
 	
	break;
 	//si la respuesta es dos se llama a la funcion del area de un cubo
	case 2: arecub();
	
	break;
	//si la respuesta es tres se sale del programa
	case 3: exit(1);

	default: 
	//se imprime si la opcion no esta
	cout<<"\n Opcion no valida!!"<<endl; 
	
	//comando para detener la pantalla
	system ("pause");
	
}//verificacion si lo seleccionado es diferente a las opciones
} while(!1,2,3);
//comando apra retornar a 0
return 0;
}

void arecua()
{
	//peticion de valores
	cout<<"ingrese la base del cuadrado"<<endl;
	//asigna valor a la variable b
    cin>>b;
    //peticion del valor
	cout<<"ingrese la altura del cuadrado"<<endl;
	//asigna valor a la variable a
    cin>>a;
    
	//proceso para sacar el area de un cuadrado
	are=b*a;
	
	//imprime el resultado
   cout<<"Su base es " << b << " su altura: "<< a <<" su area es: "<< are <<endl;
   
   //comando para detener la pantalla
	system ("pause");
} 

void arecub()
{
	//peticion del valor
	cout<<"ingrese la base del cuadrado"<<endl;
	//asigna valor a la variable b
    cin>>b;
    //peticion del valor
    cout<<"ingrese la altura del cuadrado"<<endl;
    //asigna valor a la variable a
    cin>>a;
 	
	 //proceso para sacar el area de un cubo
	are=6 * b * a;

	//imprime el resultado
    cout<<"Su base es " << b << " su altura: "<< a <<" su area es: "<< are <<endl;

	//comando para detener la pantalla
	system ("pause");
} 
