#include <iostream>

using namespace std;

class Cola {
	private:
		class Nodo{
			public:
			int x;
			int y;
			int z;
			Nodo *sig;
		};
		Nodo *raiz;//primer nodo que entra a la cola
		Nodo *fondo;// ultimo nodo que esta en la cola
	public:
		public:
		Cola(); //contructor es el que se encarga en construir un objeto
		~Cola(); 
		void insertar(int x, int y, int z);
		int extraer();
		void imprimir();
		bool vacia();
};

Cola::Cola() //cuando se inician las colas tanto su raiz y su fondo es null porque no tienen nada
{
	raiz = NULL;
	fondo = NULL;
}

Cola::~Cola()
{
	Nodo *reco = raiz;
	Nodo *bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

void Cola::insertar(int x, int y, int z)
{
	Nodo *nuevo;
	nuevo = new Nodo();
	nuevo->x = x;
	nuevo->y = y;
	nuevo->z = z;
	nuevo->sig = NULL;
	if (vacia())
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else{
		fondo->sig = nuevo;
		fondo = nuevo;
	}
} 

int Cola::extraer()
{
	if (!vacia())
	{
		int informacion = raiz->x;
		Nodo *bor = raiz;
		if (raiz == fondo)
		{
			raiz = NULL;
			fondo = NULL;
		}
		else
		{
			raiz = raiz->sig;	
		}
		delete bor;
		return informacion;
	}
	else
		return -1;
}

void Cola::imprimir()
{
	Nodo *reco = raiz;
	cout<<"Listado de todos los elementos de la cola"<<endl;
	while (reco != NULL)
	{
		cout<<"Coordenadas x="<<reco->x<<" y="<<reco->y<<" z="<<reco->z<<" ";
		reco = reco->sig;
	}
	cout<<endl;
}

bool Cola::vacia()
{
	if (raiz == NULL)
		return true;
	else 
		return false;
}

int main()
{
	Cola *cola1 = new Cola();
	cola1->insertar(5,3,10);
	cola1->insertar(10,12,5);
	cola1->insertar(50,44,20);
	cola1->imprimir();
	cout<<"Extraemos el primero de la cola"<<endl;
	cola1->imprimir();
	delete cola1;
	system ("pause");
	return 0;
}
