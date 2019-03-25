#include <iostream> 

using namespace std;

void DemoLocal( int valor ) 
{    
	cout << "Dentro de DemoLocal, valor =" << valor << endl;
    valor = 75;    
	cout << "Dentro de DemoLocal, valor =" << valor << endl; 
}
int main(void) 
{    
int n = 10;    
cout << "Antes de llamar a DemoLocal, n= " << n << endl;    
DemoLocal(n); 
 cout << "Después de llamar a DemoLocal, n= " << n << endl;    
 cout << "Pulse Intro para continuar";    
 cin.get();
 }
