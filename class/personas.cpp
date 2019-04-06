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
		cout<<"--------";
	}

};

class Profesor : public Persona
{
	private:
		string categoria;
	
	public:
		void setcategoria(string ca)
		{
		 this->categoria=ca;
		}
		string getcategoria()
		{
			return this->categoria;
		}
			virtual void imprimirPDF()
	{
		cout<<"*******************";
	}
};

int main ()
{
	Estudiante *p;
	p=new Estudiante();
	p->setID(1);
	
	cout<<p->getID()<<endl;
	
	p->setnombre("juan");
	
	cout<<p->getnombre()<<endl;
	
	p->setapellido("herrera");
	
	cout<<p->getapellido()<<endl;
	
	p->setDUE("CH18030");
	
	cout<<"Datos de persona"<<endl;
	
	p->imprimirdatopersona();
	
	p->imprimirPDF();
	
	return 0;
	
}
