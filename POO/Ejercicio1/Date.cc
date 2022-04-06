#include <iostream>
#include "Date.h"

using namespace std;

//Comprueba si las fechas son iguales
bool Date::compare(Date& d){
	if(day==d.day && month==d.month){
		return true;
	}
	else{
		return false;
	}
}

void Date::show(){
	cout<<"Día: "<<day<<"\nMes: "<<month<<endl;
}
