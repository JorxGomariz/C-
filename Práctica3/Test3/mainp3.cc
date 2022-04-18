/*
 * Copyright (C) 2022
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include "cell.h"
#include "board.h"

///////////////////////////////////////////////////////////////////////////////
//                                   Slots                                   //
///////////////////////////////////////////////////////////////////////////////
void on_cell_not_inserted(BoardPtr b, CellPtr c,
                          uint32_t r, uint32_t col) {
    cout << "Cell not inserted@ row: " << r
         << " col: " << col << '\n';
}

void on_cell_inserted(BoardPtr b, CellPtr c, uint32_t r, uint32_t col) {
    cout << "Cell inserted@ row: " << r
         << " col: " << col << '\n';
}

void on_cell_setv(CellPtr c, VectorPtr v) {
    cout << "CellPtr(" << c << ") set v.length: "
         << v->size() << '\n';
}

void on_board_updated(BoardPtr b) {
    cout << "Board(" << b << "): " << b->get_nrows()
         << "x" << b->get_ncols() << '\n';
}

void on_board_drawn(BoardPtr b, const string& s) {
    auto ncols = b->get_ncols();
    cout << "\nBoard(" << b << ") drawn.\n";
    for (auto c = 0u; c < ncols; c++)
        cout << ">";

    cout << '\n' << s << '\n';

    for (auto c = 0u; c < ncols; c++)
        cout << "<";
    cout << '\n';
}

void on_cell_next(CellPtr c) {
    cout << "Cell(" << c << ") next called.\n";
}

void on_cell_clear(CellPtr c) { cout << "Cell(" << c << ") clear called.\n"; }

void on_rectangle_inserted(BoardPtr b, uint32_t row, uint32_t col, uint32_t w, uint32_t h) {
    cout << "Rectangle INSERTED @(" << row << ',' << col
         << ") x (" << w << ',' << h << ")\n";
}

void on_rectangle_not_inserted(BoardPtr b, uint32_t row, uint32_t col, uint32_t w, uint32_t h) {
    cout << "Rectangle NOT INSERTED @(" << row << ',' << col
         << ") x (" << w << ',' << h << ")\n";
}
// ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
  //srand(3);
  Board b(5,7);
  CellPtr c = new Cell({'a', 'b', 'c'});

  c->vectorSet.connect(on_cell_setv);
  c->nextCalled.connect(on_cell_next);
  c->cellCleared.connect(on_cell_clear);

  b.cellNotInserted.connect(on_cell_not_inserted);
  b.cellInserted.connect(on_cell_inserted);
  b.cellsUpdated.connect(on_board_updated);
  b.boardDrawn.connect(on_board_drawn);

  b.rectangleInserted.connect(on_rectangle_inserted);
  b.rectangleNotInserted.connect(on_rectangle_not_inserted);

  b.clear_row(3);
  b.clear_row(7);
  b.clear_row(33);

  b.clear_column(4);
  b.clear_column(6);
  b.clear_column(46);

  b.show();

  b.set_cell_at(c, 30, 4);

  cout << "\n-------------------------\n";

  b.set_cell_at(c, 3, 4);
  cout << "Check duplicate insert:\n";
  b.set_cell_at(c, 3, 4);

  for (auto i = 0; i < 5; i++) {
    //cout << "c: " << c->get_current() << '\n';
    b.show();
    cout << "\n-------------------------\n";
    c->next();
  }

  c->set_v({'v', 'w', 'x', 'y', 'z'});
  c->clear();

  b.update_cells();
  b.show();

  cout << "\nRectangle: \n";
  b.rectangle({'+','-','*','/'}, 1, 1, 0, 1);
  b.rectangle({'+','-','*','/'}, 1, 1, 2, 0);
  b.rectangle({'+','-','*','/'}, 1, 1, 4, 3);
  b.show();
  for (auto fr = 0; fr <= 6; fr++) {
      b.update_cells();
      b.show();
  }

  return 0;
}
