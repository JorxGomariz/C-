//Arrays de objetos

#include <iostream>
#include "Marks.h"

int main(int argc, char const *argv[])
{
	int g1, g2
	cout<<"Introduzca el número de alumnos del grupo 2: "; cin>>g1;
	cout<<"Introduzca el número de alumnos del grupo 2: "; cin>>g2;
	
	//Arrays de objetos estáticos
	Marks group1[g1] //Se especifica el tamaño del array, pero no se inicializan parámetros (quién inicializa variables es el constructor por defecto)
	
	for (int i = 0; i < g1; i++) {
		group1[i].ask();
		cout<<endl;
	}
	group1.show();

	//Arrays de objetos dinámicos
	Marks* group2 = new Marks[g2]; //Se especifica el tamaño del array...

	for(int i = 0; i < g2; i++) {
		(group2+i)->ask();
		cout<<endl;
	}
	group2->show();
	
	return 0;

}