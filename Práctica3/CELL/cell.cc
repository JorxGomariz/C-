// NIF: 46088497-Q
// NOMBRE: GOMARIZ VELASCO, JORGE
#include "cell.h"
#include <ctime>
#include <iostream>

using namespace std;

Cell::Cell(){
	srand(unsigned(time(0)));
	this->v.push_back(97 + rand() % (122-97));
	current = this->v[0];
}

Cell::~Cell(){

}

Cell::Cell(const vector<char>& v){
	this->v=v;
	current = this->v[0];
}

void Cell::set_v(const vector<char>& v){
	this->v=v;
	current = this->v[0];
	vectorSet(this, &this->v);
}

char Cell::get_current(){
	return current;
}

void Cell::clear(){
	vector<char> v(1,' ');
	this->v=v;
	cellCleared(this);
}

void Cell::next(){
	char actual = current;
	for (size_t i = 2; i <= this->v.size(); ++i){
		if (actual == this->v[this->v.size()-i]){
			current = this->v[this->v.size()-i+1];
		}
		else if (actual == this->v[this->v.size()-1]){
			current = this->v[0];
		}
	}
	nextCalled(this);
}
