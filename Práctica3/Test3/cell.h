// -*- mode:c++; -*-
#ifndef CELL_H
#define CELL_H

// -------------------- SYSTEM ------------------------
#include <cstdint>
#include <cstdlib>
#include <vector>
//#include <boost/signals2/signal.hpp>

using namespace std;

class Cell;
using CellPtr = Cell*;
using VectorPtr = vector<char>*;

class Cell
{
public:
  Cell();
  Cell(const vector<char>& v);
  virtual ~Cell();

  void set_v(const vector<char>& v);
  void clear();
  char get_current();
  void next();

/*
  // Signals //------------------------------------------------------------
  boost::signals2::signal<void (CellPtr)> nextCalled;
  boost::signals2::signal<void (CellPtr)> cellCleared;
  boost::signals2::signal<void (CellPtr, VectorPtr)> vectorSet;
  //-----------------------------------------------------------------------
*/
private:
  vector<char> v;
  uint32_t current;
};

#endif /* CELL_H */
