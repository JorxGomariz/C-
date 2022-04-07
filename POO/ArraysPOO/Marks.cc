#include <iostream>
#include "Marks.h"

using namespace std;

void ask(){
	cout<<"Introduza la nota de Fundamentos de Matemática Aplicada II: "; cin>>markFMA2;
	cout<<"Introduza la nota de Programación II: "; cin>>markP2;
	cout<<"Introduza la nota de Fundamentos de Fundamentos Físicos de la Ingeniería II: "; cin>>markFFI2;
	cout<<"Introduza la nota de Fundamentos de Iniciación a la Ingeniería Robótica: "; cin>>markIIR;
	cout<<"Introduza la nota de Computadores: "; cin>>markC;
}

void show()
	cout<<"Media aritmética de las notas del segundo cuatrimestre: "<<(markFMA2+markP2+markFFI2+markIIR+markC)/5<<endl