/*crear un programa que permita almacenar en una cola 
numero de cuenta, nombre, apellido
de un ahorrante, hacer un menu que muestre la cola*/

#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

struct Ahorrante
{
	char ncuenta[10];
	char nombre[50];
	char apellido[50];
};

void agrega();  
void elimina(); 
void mostrar();

queue<Ahorrante> s; 
Ahorrante aux;	
Ahorrante *pun;	

int main()
{

	int opc;

	system ("cls");
	
	do{
		
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - MOSTRAR COLA"<<endl;
	cout<<"2 - AGREGAR NODO"<<endl;
	cout<<"3 - ELIMINAR NODO"<<endl;
	cout<<"4 - SALIR"<<endl;

	cout<<"INGRESE UNA OPCION"<<endl;

	cin>>opc;


switch(opc)
{
	case 1: mostrar();
	
	break;
	
	case 2: agrega();

	break;

	case 3: elimina();

	break;

	case 4: exit(1);

	default:

	cout<<"\n Opcion no valida!!"<<endl; 

	system ("pause");
}
 	main();
}while(opc<1 && opc>4);
	return 0;
}

void mostrar()
{
	system ("cls");
	
	pun=&s.front();

	for (int i=1;i<=s.size();i++){
			aux = *pun;

	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;

	cout<<"Numero de cuenta: "<<aux.ncuenta<<endl;
	cout<<"Nombre: "<<aux.nombre<<endl;
	cout<<"Apellido: "<<aux.apellido<<endl;

	pun++;
	}

	system("pause");
main();
}

void agrega()
{
	char res; 
	
	system ("cls");

	do{

	cout<<"ingrese numero de cuenta: "<<endl;
	cin>>aux.ncuenta;
	cout<<"ingrese nombre: "<<endl;
	cin>>aux.nombre;
	cout<<"ingrese apellido: "<<endl;
	cin>>aux.apellido;

	s.push(aux);

	cout<<"agregar otro nodo? Y/N: "<<endl;
	cin>>res;

	}while(res=='y'||res=='Y');

main(); 
}

void elimina()
{

system ("cls");
	
	pun=&s.front();

	for (int i=1;i<=s.size();i++){
			aux = *pun;

	cout<<"----------------------------"<<endl;
	cout<<"    se elimina la cuenta    "<<endl;
	cout<<"----------------------------"<<endl;

	cout<<"Numero de cuenta: "<<aux.ncuenta<<endl;
	cout<<"Nombre: "<<aux.nombre<<endl;
	cout<<"Apellido: "<<aux.apellido<<endl;

	pun++;
	}

s.pop();

system("pause");

main();
}
