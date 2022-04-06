//CREAR OBJETOS

#include <iostream>
#include "Point.h"

using namespace std;

int main(int argc, char const *argv[]) {
	//Objeto ESTÁTICO
	Point p1(2,1); //Llamada al Constructor 1 para que cree el objeto

	cout<<"El valor de X1 es: "<<p1.getX()<<endl; //Obtiene el valor de X
	cout<<"El valor de Y1 es: "<<p1.getY()<<endl; //el . se utiliza para acceder a los miembros utilizando objetos estáticos

	//Objeto DINÁMICO
	Point* p2 = new Point(); //Reserva memoria / Llamada al Constructor 2 para que cree el objeto

	cout<<endl;
	cout<<"El valor de X2 es: "<<p2->getX()<<endl;
	cout<<"El valor de Y2 es: "<<p2->getY()<<endl;

	p2->setX(5); //Establece el valor de X
	p2->setY(8); //el -> se utiliza para acceder a los miembros utilizadno objetos dináimicos

	cout<<endl;
	cout<<"El valor de X2 es: "<<p2->getX()<<endl;
	cout<<"El valor de Y2 es: "<<p2->getY()<<endl;

	return 0;
}