#include "Board.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	Board b(5,7);
	cout<<b.get_nrows()<<endl;
	cout<<b.get_ncols()<<endl;

	return 0;
}