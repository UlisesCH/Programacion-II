#include<iostream>
#include <math.h>
using namespace std;

class Figura {
  private:
  float base;
  float altura; 
  float lado;
  
  public:
 float getaltura();
 void setaltura(float al);
 
 float getbase();
 void setbase(float bas);
 
 float getlado();
 void setlado(float la);
 
 void captura();
 void inf();
 
 virtual float perimetro()=0;
 virtual float area()=0;
};

float Figura::getaltura(){
	return altura;
}

void Figura::setaltura(float al){
	altura=al;
}

float Figura::getbase(){
	return base;
}

void Figura::setbase(float bas){
	base=bas;
}

float Figura::getlado(){
	return lado;
}

void Figura::setlado(float la){
	lado=la;
}

class Rectangulo: public Figura { 
 public:
  void imprime();
  float perimetro(){return 2*(getbase()+getaltura());}
  float area(){return getbase()*getaltura();}
};

class Triangulo: public Figura {
 public:
  void muestra();
  float area(){return (getbase()*getaltura())/2;}
  float perimetro(){ //{return 2*sqrt(altura^2+(base/2)^2)+base;} //Usando pitágoras
  float x;
  x=(getaltura()*getaltura())+(getbase()/2 * getbase()/2);
  x=2*sqrt(x)+getbase();
  return x;
  
  }
};

class Cuadrado: public Figura { 
 public:
  void ver();
  float perimetro(){return 4*getlado();}
  float area(){return getlado()*getlado();}
};

void Figura::captura()
{
float x,y;

 cout << "escribe la altura: ";
 cin >> x;
 setaltura (x);
 cout << "escribe la base: ";
 cin >> y;
 setbase (y);
 cout << "EL PERIMETRO ES: " << perimetro()<<endl;
 cout << "EL AREA ES: " << area()<<endl;
getchar();
//return 0;
}

void Figura::inf()
{
float x,y;

 cout << "escribe el valor del lado: ";
 cin >> x;
 setlado (x);
 cout << "EL PERIMETRO ES: " << perimetro()<<endl;
 cout << "EL AREA ES: " << area()<<endl;
getchar();
//return 0;
}

class Principal{
	public:
void objetos()
{
	cout << "CALCULO DEL AREA Y PERIMETRO DE UN RECTANGULO: "<<endl;
	Rectangulo *r;
	r=new Rectangulo();
	r->captura();
	
	cout << "CALCULO DEL AREA Y PERIMETRO DE UN TRIANGULO ISÓSCELES: "<<endl;
	Triangulo *t;
	t=new Triangulo();
	t->captura();

	cout << "CALCULO DEL AREA Y PERIMETRO DE UN CUADRADO: "<<endl;
	Cuadrado *c;
	c=new Cuadrado();
	c->inf();
}

};

int main()
{
	Principal *x=new Principal(); //new significa que hay una depemdencia 
	x->objetos();
	
	return 0;
}
