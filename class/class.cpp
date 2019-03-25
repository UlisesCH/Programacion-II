#include <iostream>
#include <conio.h>

using namespace std;

class Vehiculo{
	//todos los atributos son de tipo privador
	private:
	char modelo [50];
	char marca [50];
	char color [50];
	float velocidadmax;
	
	//y los metodos son publicos
	public:
	Vehiculo(); //constructor
	void acelerar();
	void frenar();
	~Vehiculo(); //destructor (siempre va con ese signo
};

Vehiculo::Vehiculo(){
	this->velocidadmax=180.0f;
}

//se declara quien quiere que haga la accion
void Vehiculo::acelerar()
{
	cout<<"Estoy acelerando"<<endl;
}

void Vehiculo::frenar()
{
	cout<<"Estoy fredanando"<<endl;
}

int main()
{
	//secrea un putero (recerca un espacion de memoria
	Vehiculo *v1;
	/*con el new se hace la ceparacion de lo que esta en la class*/
	v1=new Vehiculo();
	v1->acelerar();
	v1->acelerar();
	v1->frenar();

	getch;
	return 0;	
}
