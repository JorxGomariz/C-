#include <iostream>
#include "Date.h"

using namespace std;

int main(int argc, char const *argv[]){
	Date* today;
	Date* birthday;
	int d, m;

	cout<<"Introduzca la fecha de hoy"<<endl;
	cout<<"Día: "; cin>>d;
	cout<<"Mes: "; cin>>m;

	today = new Date(d, m);

	cout<<"\nIntroduzca la fecha de su cumpleaños"<<endl;
	cout<<"Día: "; cin>>d;
	cout<<"Mes: "; cin>>m;

	birthday = new Date(d, m);

	cout<<"\nLas fechas introducidas son:"<<endl;
	today->show();
	cout<<endl;
	birthday->show();

	if(today->compare(*birthday)){
		cout<<"\n¡Feliz cum! ;)"<<endl;
	}
	else{
		cout<<"\nHoy no es tu cumple, pero te regalo este corazón <3"<<endl;
	}

	return 0;
}