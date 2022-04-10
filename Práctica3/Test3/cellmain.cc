#include <iostream>
#include "cell.h"

int main(int argc, char const *argv[])
{
	CellPtr c1 = new Cell();
	cout<<c1<<endl;

	CellPtr c2 = new Cell({'a', 'b', 'c'});
	cout<<c2<<endl;

	c2->clear();
/*
	CellPtr c = new Cell({'a', 'b', 'c'});
	cout<<c->get_current()<<endl;

	c->set_v({'v', 'w', 'x', 'y', 'z'});
	cout<<c->get_current()<<endl;
*/
	return 0;
}