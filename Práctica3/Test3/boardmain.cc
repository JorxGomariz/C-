#include "board.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	Board b(5,7);
	cout<<b.get_nrows()<<endl; //en el mainp3 está como b->get_nxxx porque se le pasa con un puntero, pero aquí no lo paso como puntero
	cout<<b.get_ncols()<<endl;
	return 0;
}