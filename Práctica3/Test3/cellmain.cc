#include <iostream>
#include "cell.h"

int main(int argc, char const *argv[])
{
	CellPtr C = new Cell();
	cout<<C->get_current()<<endl<<endl;

/*
	CellPtr c = new Cell({'a', 'b', 'c'});
	cout<<c->get_current()<<endl;

	c->set_v({'v', 'w', 'x', 'y', 'z'});
	cout<<c->get_current()<<endl;
*/
	return 0;
}