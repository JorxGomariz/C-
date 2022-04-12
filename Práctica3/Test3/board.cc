#include "Board.h"

Board::Board(uint32_t r, uint32_t c, char bg = '.'){
	rows = r;
	cols = c;
	//¿qué hago con bg?
}

Board::~Board(){

}

void Board::clear_row (uint32_t r){
	r->clear();
}

void Board::clear_column (uint32_t c){
	c->clear();
}

uint32_t Board::uint32_t get_nrows(){
	return rows;
}

uint32_t Board::uint32_t get_ncols(){
	return cols;
}