/*
Codigo creado por: Ulises Edgardo Coreas Huezo
Carnet: CH18030

Codigo de botones de paises con su capital, cada vez que se ejecutaba 
cambiaran de posicion los botones
*/

//librerias utilizada
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_message.H>
#include <iostream> 
#include <stdio.h>
#include <string.h>

//clase Pais
class Pais:public Fl_Window {

Fl_Button	*p1;
Fl_Button	*p2;
Fl_Button	*p3;
Fl_Button	*p4;
Fl_Button	*p5;
Fl_Button	*cr;
int n;

public:
	//tamaño de la ventana
Pais() : Fl_Window(750,500) {

	begin();
	//genera un numero randon entre 1 y 4
	srand(time(NULL));
	n=1+rand()%4;

	//condicional para asignar posicion y color de cada pais
	if(n==1)
	{	
	   //posicion de los boton
	   p1  =new Fl_Button(100, 100, 90, 100,"El Salvador");
	   p2  =new Fl_Button(500, 100, 90, 100,"Brasil");
	   p3  =new Fl_Button(300, 100, 90, 100,"Argentina");	   
	   p4  =new Fl_Button(300, 300, 90, 100,"Mexico");
	   p5  =new Fl_Button(100, 300, 90, 100,"Espania");

	//COLOR DE LETRAS	
	p1->labelcolor(FL_BLACK);
	p2->labelcolor(FL_BLACK);
	p3->labelcolor(FL_BLACK);
	p4->labelcolor(FL_WHITE);
	p5->labelcolor(FL_WHITE);

	//COLOR DE BOTONES
	p1->color(FL_CYAN);
	p2->color(FL_CYAN);
	p3->color(FL_CYAN);
	p4->color(FL_BLUE);
	p5->color(FL_BLUE);

	}
	
	if(n==2)
	{
	   //posicion de los boton
	   p1  =new Fl_Button(100, 100, 90, 100,"Brasil");
	   p2  =new Fl_Button(500, 100, 90, 100,"Espania");
	   p3  =new Fl_Button(300, 100, 90, 100,"El Salvador");
	   p4  =new Fl_Button(300, 300, 90, 100,"Argentina");
	   p5  =new Fl_Button(100, 300, 90, 100,"Mexico");
	   
	//COLOR DE LETRAS	
	p1->labelcolor(FL_WHITE);
	p2->labelcolor(FL_WHITE);
	p3->labelcolor(FL_WHITE);
	p4->labelcolor(FL_BLACK);
	p5->labelcolor(FL_BLACK);

	//COLOR DE BOTONES
	p1->color(FL_BLUE);
	p2->color(FL_BLUE);
	p3->color(FL_BLUE);
	p4->color(FL_CYAN);
	p5->color(FL_CYAN);
	
	}

	if(n==3)
	{
	   //posicion de los boton
	   p1  =new Fl_Button(100, 100, 90, 100,"Brasil");
	   p2  =new Fl_Button(500, 100, 90, 100,"Mexico");
	   p3  =new Fl_Button(300, 100, 90, 100,"Espania");
	   p4  =new Fl_Button(300, 300, 90, 100,"Argentina");
	   p5  =new Fl_Button(100, 300, 90, 100,"El Salvador");
	
	//COLOR DE LETRAS	
	p1->labelcolor(FL_BLACK);
	p2->labelcolor(FL_BLACK);
	p3->labelcolor(FL_BLACK);
	p4->labelcolor(FL_WHITE);
	p5->labelcolor(FL_WHITE);

	//COLOR DE BOTONES
	p1->color(FL_CYAN);
	p2->color(FL_CYAN);
	p3->color(FL_CYAN);
	p4->color(FL_BLUE);
	p5->color(FL_BLUE);

	}
	
	if(n==4)
	{
	   //posicion de los boton
	   p1  =new Fl_Button(100, 100, 90, 100,"Espania");
	   p2  =new Fl_Button(500, 100, 90, 100,"El Salvador");
	   p3  =new Fl_Button(300, 100, 90, 100,"Brasil");
	   p4  =new Fl_Button(300, 300, 90, 100,"Argentina");
	   p5  =new Fl_Button(100, 300, 90, 100,"Mexico");

	//COLOR DE LETRAS	
	p1->labelcolor(FL_WHITE);
	p2->labelcolor(FL_WHITE);
	p3->labelcolor(FL_WHITE);
	p4->labelcolor(FL_BLACK);
	p5->labelcolor(FL_BLACK);

	//COLOR DE BOTONES
	p1->color(FL_BLUE);
	p2->color(FL_BLUE);
	p3->color(FL_BLUE);
	p4->color(FL_CYAN);
	p5->color(FL_CYAN);
	}
	//posicion y color del boton cerrar
	cr  =new Fl_Button(500, 300, 90, 100,"Cerrar");
	cr->color(FL_RED);
	
	end();
	p1->callback(Button_CB, (void*)this);
	p2->callback(Button_CB, (void*)this);
	p3->callback(Button_CB, (void*)this);
	p4->callback(Button_CB, (void*)this);
	p5->callback(Button_CB, (void*)this);
	cr->callback(Button_CB, (void*)this);


 }


static void Button_CB(Fl_Widget *w, void *data) {

	//condicional para mostrar la capital
	if ( strcmp(w->label(), "El Salvador") == 0 ) {

	fl_message("%s: %s", "Capital","San Salvador");
	}

	if ( strcmp(w->label(), "Brasil") == 0 ) {

	fl_message("%s: %s", "Capital","Brasilia");
	}

	if ( strcmp(w->label(), "Mexico") == 0 ) {
	fl_message("%s: %s", "Capital","Ciudad de Mexico");
	}

	if ( strcmp(w->label(), "Argentina") == 0 ) {

	fl_message("%s: %s", "Capital","Buenos Aires");
	}

	if ( strcmp(w->label(), "Espania") == 0 ) {

	fl_message("%s: %s", "Capital","Madrid");
	}

	if ( strcmp(w->label(), "Cerrar") == 0 ) {

	Pais *p = (Pais*)data;
	 p->hide();
	}

}


}; //fin de la clase


int main(int argc, char **argv) 
{
	Pais *p = new Pais();
	p->show();
	

return Fl::run();
}
