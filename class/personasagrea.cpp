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
		void captura();
		
		void setid(int id);
		int getid();
		
		void setnombre(string n);
		string getnombre();
		
		void setapellido(string a);
		string getapellido();
		
		void imprimirdatopersona();
		void imprimirPDF();
};

void Persona::setid(int id)
{
	ID = id;
}

int Persona::getid()
{
	return ID;
}

void Persona::setnombre(string n)
{
	nombre = n;
}

string Persona::getnombre()
{
	return nombre;
}

void Persona::setapellido(string a)
{
	apellido = a;
}

string Persona::getapellido()
{
	return apellido;
}

class Estudiante : public Persona
{
	private:
		string DUE;
	
	public:
		void setDUE(string d);
		string getDUE();
		
	
};



class Profesor : public Persona
{
	private:
		string categoria;
	
	public:
		void setcategoria(string d);
		string getcategoria();
};

void Persona::captura()
{
	int i;
	string n,a;
	
 cout << "escribe ID: ";
 cin >> i;
 setid (i);
 cout << "escribe Nombre: ";
 cin >> n;
 setnombre (n);
 cout << "escribe Apellido: ";
 cin >> a;
 setapellido (a);
 cout << "EL PERIMETRO ES: " << ID<<endl;
 cout << "EL PERIMETRO ES: " << nombre<<endl;
 cout << "EL AREA ES: " << apellido<<endl;
getchar();
}

int main ()
{
	Persona *p;
	p=new Persona();
	p->captura();
	
	return 0;
	
}
