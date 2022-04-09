#include "cell.h"
#include <ctime>

Cell::Cell(){
	srand(unsigned(time(0)));
	current = 97 + rand() % (122-97);
}

Cell::~Cell(){

}

Cell::Cell(const vector<char>& v){
	
}

void Cell::set_v(const vector<char>& v){
	
}

char Cell::get_current(){
	return current;
}
