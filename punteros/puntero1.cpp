//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main(){

char *cadena = "UES";
cout <<cadena <<endl;

system("pause");
return EXIT_SUCCESS;
}
int longitud ( char *cadena){

char *p = cadena;
	while(p[0] != '\0')
	{
		p++;
	}
return (int)(p - cadena);


return 0;
}
