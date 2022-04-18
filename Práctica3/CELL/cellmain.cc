#include <iostream>
#include "cell.h"
#include "board.h"

///////////////////////////////////////////////////////////////////////////////
//                                   Slots                                   //
///////////////////////////////////////////////////////////////////////////////
void on_cell_setv(CellPtr c, VectorPtr v) {
    cout << "CellPtr(" << c << ") set v.length: "
         << v->size() << '\n';
}

void on_cell_next(CellPtr c) {
    cout << "Cell(" << c << ") next called.\n";
}

void on_cell_clear(CellPtr c) { cout << "Cell(" << c << ") clear called.\n"; }

// ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{

  CellPtr c = new Cell({'a', 'b', 'c'});

  c->vectorSet.connect(on_cell_setv);
  c->nextCalled.connect(on_cell_next);
  c->cellCleared.connect(on_cell_clear);

  for (auto i = 0; i < 5; i++) {
    cout << "c: " << c->get_current() << '\n';
    cout << "\n-------------------------\n";
    c->next();
  }

  c->set_v({'v', 'w', 'x', 'y'});
  for (auto i = 0; i < 6; i++) {
    cout << "c: " << c->get_current() << '\n';
    cout << "\n-------------------------\n";
    c->next();
  }
  c->clear();

  return 0;
}