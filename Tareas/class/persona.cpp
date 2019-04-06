#include <iostream>
#include <string.h>

using namespace std;

class Persona 
{
	private:
		int ID;
		string nombre;
		string apellido;
	
	public:
	
//=========================================
	void setID(int id)
	{
		this->ID = id; //this es para que lo busque
	}

	int getID()
	{
		return this->ID;
	}
//=========================================
	void setnombre(string n)
	{
		this->nombre = n;
	}

	string getnombre()
	{
		return this->nombre;
	}
//=========================================
	void setapellido(string a)
	{
		this->apellido = a;
	}

	string getapellido()
	{
		return this->apellido;
	}
//=========================================
	void imprimirdatopersona()
	{
		cout<<this->ID<<endl;
		cout<<this->nombre<<endl;
		cout<<this->apellido<<endl;	
	}
//=========================================
	virtual void imprimirPDF()
	{
	
	}

};


class Estudiante : public Persona
{
	private:
		string DUE;
	
	public:
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

class Profesor : public Persona
{
	private:
		string categoria;
	
	public:
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

	Estudiante *e;
	e=new Estudiante();
	
	e->setID(1);
	
	cout<<"ID: "<<e->getID()<<endl;
	
	e->setDUE("CH18030");
	
	cout<<"DUE: "<<e->getDUE()<<endl;
	
	e->setnombre("Juan");
	
	cout<<"Nombre: "<<e->getnombre()<<endl;
	
	e->setapellido("Coreas");
	
	cout<<"Apellido: "<<e->getapellido()<<endl;
	
	cout<<"Datos de persona"<<endl;
	
	e->imprimirdatopersona();
	
	e->imprimirPDF();

	
	Profesor *p;
	p=new Profesor();
	
	p->setID(12);
	
	cout<<"ID: "<<p->getID()<<endl;
	
	p->setcategoria("primera");
	
	cout<<"Categoria: "<<p->getcategoria()<<endl;
	
	p->setnombre("Juan");
	
	cout<<"Nombre: "<<p->getnombre()<<endl;
	
	p->setapellido("Herrera");
	
	cout<<"Apellido: "<<p->getapellido()<<endl;
	
	cout<<"Datos de persona"<<endl;
	
	p->imprimirdatopersona();
	
	p->imprimirPDF();
	
	return 0;
}
