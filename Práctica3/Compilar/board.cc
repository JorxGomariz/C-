#include "board.h"

Board::Board(uint32_t r, uint32_t c, char bg = '.'){
	rows = r;
	cols = c;
	this->bg=bg; 
}

Board::~Board(){

}

void Board::clear_row (uint32_t r){
	r->clear();
}

void Board::clear_column (uint32_t c){
	c->clear();
}

uint32_t Board::get_nrows(){
	return rows;
}

uint32_t Board::get_ncols(){
	return cols;
}

void Board::set_cell_at (CellPtr c, uint32_t row, uint32_t col){
	
}