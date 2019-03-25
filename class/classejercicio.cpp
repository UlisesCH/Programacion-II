#include <iostream>
#include <conio.h>

using namespace std;

class Persona{	
	private:
	char Nombre[50];
	char Apellido[50];
	int Edad;
	
	public:
	Persona();
	void caminar();
	void hablar();
	void dormir();
	~Persona();
};

Persona::Persona(){
	Edad=19.0f;
}

void Persona::caminar(){
	cout<<"Estoy caminando"<<endl;
}

void Persona::hablar(){
	cout<<"Estoy hablando"<<endl;
	cout<<"Dejo de hablar"<<endl;
}


void Persona::dormir(){
	cout<<"Estoy durmiendo"<<endl;
}

int main()
{
	Persona *p1;
	
	p1=new Persona();
	p1->caminar();
	p1->hablar();
	p1->dormir();
	
	getch;
	return 0;
}
