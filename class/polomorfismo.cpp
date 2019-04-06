#include<iostream>
#include <math.h>
using namespace std;

class Figura {
  protected:
  float base;
  float altura; 
  
  public:
 void captura();

 virtual float perimetro()=0;
 virtual float area()=0;
};

class Rectangulo: public Figura { 
 public:
  void imprime();
  float perimetro(){return 2*(base+altura);}
  float area(){return base*altura;}
};

class Triangulo: public Figura {
 public:
  void muestra();
  float area(){return (base*altura)/2;}
  float perimetro(){ //{return 2*sqrt(altura^2+(base/2)^2)+base;} //Usando pitágoras
  float x;
  x=(altura*altura)+(base/2 * base/2);
  x=2*sqrt(x)+base;
  return x;
  
  }
};

void Figura::captura()
{
 cout << "CALCULO DEL AREA Y PERIMETRO DE UN TRIANGULO ISÓSCELES Y UN RECTANGULO:" << endl;
 cout << "escribe la altura: ";
 cin >> altura;
 cout << "escribe la base: ";
 cin >> base;
 cout << "EL PERIMETRO ES: " << perimetro();
 cout << "EL AREA ES: " << area();
getchar();
//return 0;
}

int main()
{
	Rectangulo *r;
	r=new Rectangulo();
	r->captura();

	Triangulo *t;
	t=new Triangulo();
	t->captura();
	
	return 0;
}
