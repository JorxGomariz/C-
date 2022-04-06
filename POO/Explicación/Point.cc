//DEFINICIÓN DE MÉTODOS

#include "Point.h"

//Establece el valor de X
void Point::setX(int valueX){ //(Point:: -> hay que indicar a que clase pertenece el método)
	x = valueX;
}

//Establece el valor de Y
void Point::setY(int valueY){
	y = valueY;
}

//Obtiene el valor de X
int Point::getX(){
	return x;
}

//Obtiene el valor de Y
int Point::getY(){
	return y;
}