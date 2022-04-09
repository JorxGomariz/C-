#include "cell.h"

Cell::Cell(){
	v = 97 + long int random(void) % (122-97);
}

Cell::~Cell(){

}

Cell::Cell(const vector<char>& v){
	
}

void Cell::set_v(const vector<char>& v){

}

