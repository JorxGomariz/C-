#include "board.h"

Board::Board(uint32_t r, uint32_t c, char bg){
	rows = r;
	cols = c;
	this->bg=bg;
	for (uint32_t i = 0; i < r; i++){
		for (uint32_t j = 0; i < c; j++){
			cv[i][j]=nullptr;
		}
	}
}

Board::~Board(){

}

void Board::clear_row (uint32_t r){
	
}

void Board::clear_column (uint32_t c){
	
}

uint32_t Board::get_nrows(){
	return rows;
}

uint32_t Board::get_ncols(){
	return cols;
}

void Board::set_cell_at (CellPtr c, uint32_t row, uint32_t col){

}

void rectangle (const vector<char>& v, uint32_t row, uint32_t col, uint32_t w, uint32_t h){

}
/*
bool Board::cell_exists(const CellPtr c){
	
}
*/