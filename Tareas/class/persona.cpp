/*codigo creado por: Ulises Edgardo Coreas Huezo
carnet: CH18030 */

//librerias obligatorias
#include <iostream>
#include <string.h>

//cuerpo del programa
using namespace std;

//clase padre
class Persona 
{
	private:
		int ID;
		string nombre;
		string apellido;
	
	public:
//lo que heredara las class hijos
//=========================================
	//funcion para la ID
	void setID(int id)
	{
		this->ID = id;
	}

	int getID()
	{
		return this->ID;
	}
//=========================================
	//funcion para el nombre
	void setnombre(string n)
	{
		this->nombre = n;
	}

	string getnombre()
	{
		return this->nombre;
	}
//=========================================
	//funcion para el apellido
	void setapellido(string a)
	{
		this->apellido = a;
	}

	string getapellido()
	{
		return this->apellido;
	}
//=========================================
//funcion para imprimir todos los datos almacenado en la class persona
	void imprimirdatopersona()
	{
		cout<<this->ID<<endl;
		cout<<this->nombre<<endl;
		cout<<this->apellido<<endl;	
	}
//=========================================
	//funcion para imprimir lo solicitado
	virtual void imprimirPDF()
	{
	
	}

};

//clase hijo
class Estudiante : public Persona
{
	private:
		string DUE;
	
	public:
	//funcion para el DUE (propio)
		void setDUE(string due){
		 this->DUE=due;
		}
		
		string getDUE()
		{
			return this->DUE;
		}
		
		virtual void imprimirPDF()
	{
		cout<<"-----------------"<<endl;
	}

};

//clase hijo
class Profesor : public Persona
{
	private:
		string categoria;
	
	public:
		//funcion para la categoria (propio)
		void setcategoria(string ca){
		 this->categoria=ca;
		}
		string getcategoria()
		{
			return this->categoria;
		}
			virtual void imprimirPDF()
	{
		cout<<"*******************"<<endl;
	}
};


int main()
{
	//puntero tipo Estudiante
	Estudiante *e;
	//hace particion del espacio en memoria corespondido
	e=new Estudiante();
	//al macena ID
	e->setID(1);
	
	cout<<"ID: "<<e->getID()<<endl;
	//al macena DUE
	e->setDUE("CH18030");
	//imprime informacion
	cout<<"DUE: "<<e->getDUE()<<endl;
	//al macena el nombre
	e->setnombre("Juan");
	//imprime informacion
	cout<<"Nombre: "<<e->getnombre()<<endl;
	//al macena el apellido
	e->setapellido("Coreas");
	//imprime informacion
	cout<<"Apellido: "<<e->getapellido()<<endl;
	
	cout<<"Datos de persona"<<endl;
	//muestra todo los datos
	e->imprimirdatopersona();
	
	e->imprimirPDF();

	//puntero tipo Profesor
	Profesor *p;
	//hace particion del espacio en memoria corespondido
	p=new Profesor();
	//al macena ID
	p->setID(12);
	//imprime informacion
	cout<<"ID: "<<p->getID()<<endl;
	//al macena la categoria
	p->setcategoria("primera");
	//imprime informacion
	cout<<"Categoria: "<<p->getcategoria()<<endl;
	//al macena el nombre
	p->setnombre("Carlos");
	//imprime informacion
	cout<<"Nombre: "<<p->getnombre()<<endl;
	//al macena el apellido
	p->setapellido("Herrera");
	//imprime informacion
	cout<<"Apellido: "<<p->getapellido()<<endl;
	
	cout<<"Datos de persona"<<endl;
	//muestra todo los datos
	p->imprimirdatopersona();
	
	p->imprimirPDF();
	
	return 0;
}
