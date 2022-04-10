#include "cell.h"
#include <ctime>
#include <iostream>
using namespace std;

Cell::Cell(){
	vector<char> v1;
	srand(unsigned(time(0)));
	v1.push_back(97 + rand() % (122-97));
}

Cell::~Cell(){

}

Cell::Cell(const vector<char>& v){
	vector<char> v2;
	int tam = v.size();
	for (int i = 0; i < tam; i++) {
		v2[i] = v[i];  
	}
}

void Cell::set_v(const vector<char>& v){

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
	
}
