// NIF: 46088497-Q
// NOMBRE: GOMARIZ VELASCO, JORGE
// -*- mode:c++; -*-
#ifndef BOARD_H
#define BOARD_H

// -------------------- SYSTEM ------------------------
#include <cstdint>
#include <vector>
#include <string>
#include <boost/signals2/signal.hpp>

using namespace std;
// -------------------- PROJECT -----------------------
#include "cell.h"

class Board;
using BoardPtr = Board*;

class Board
{
public:
    Board(uint32_t r, uint32_t c, char bg = '.');
    ~Board();

    void set_cell_at (CellPtr c, uint32_t row, uint32_t col);
    void rectangle (const vector<char>& v, uint32_t row, uint32_t col,
                    uint32_t w, uint32_t h);

    void update_cells();
    string draw();
    void show();

    void clear_row(uint32_t r);
    void clear_column(uint32_t c);

    uint32_t get_nrows();
    uint32_t get_ncols();
/*
    // Signals //------------------------------------------------------------
    boost::signals2::signal<void (BoardPtr)> cellsUpdated;
    boost::signals2::signal<void (BoardPtr, const string& b)> boardDrawn;
    boost::signals2::signal<void (BoardPtr b, CellPtr cell, uint32_t r, uint32_t c)>  cellInserted;
    boost::signals2::signal<void (BoardPtr b, CellPtr cell, uint32_t r, uint32_t c)>  cellNotInserted;
    boost::signals2::signal<void (BoardPtr b, uint32_t row, uint32_t col, uint32_t w, uint32_t h)> rectangleInserted;
    boost::signals2::signal<void (BoardPtr b, uint32_t row, uint32_t col, uint32_t w, uint32_t h)> rectangleNotInserted;
    //-----------------------------------------------------------------------
*/
private:
    bool cell_exists(const CellPtr c);
    vector<vector<CellPtr>> cv;
    uint32_t rows, cols;
    char bg;
};

#endif /* BOARD_H */
