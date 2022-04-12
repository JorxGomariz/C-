#include "cell.h"
#include <ctime>
#include <iostream>
using namespace std;

Cell::Cell(){
	srand(unsigned(time(0)));
	v.push_back(97 + rand() % (122-97));
}

Cell::~Cell(){

}

Cell::Cell(const vector<char>& v){
	//¿como igualo el vector parámetro al vector célula si se llaman igual?
}

void Cell::set_v(const vector<char>& v){
	//¿tengo que limpiar antes el vector célula antes de cambiar el contenido?
}

char Cell::get_current(){
	return current;
}

void Cell::clear(){
	int tam = v.size();
	for (int i = 0; i < tam; ++i){
		v.pop_back();
	}
}

void Cell::next(){
	//no entiendo esta función
}
