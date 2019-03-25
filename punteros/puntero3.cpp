#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char *c = "programadores";
	int cont=0;
	
	while (*c!='\0')
	{
		if (*c=='a' || *c=='e' || *c=='i' || *c=='o' || *c=='u')
		{
			cont++;
		}
		c++;
	}
	cout<<cont<<endl;
	
	getch();
}
