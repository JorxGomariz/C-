//DECLARACIÓN DE UNA CLASE

class Point{
	//Atributos
	private:
		int x,y;

	//Métodos
	public:
		Point(int _x, int _y){ //Constructor 1
			x = _x;
			y = _y;
		}

		Point(){ //Constructor 2
			x = y = 0;
		}

		void setX(int valueX); //Establece el valor de X
		void setY(int valueY); //Establece el valor de Y
		int getX(); //Obtiene el valor de X
		int getY(); //Obtiene el valor de Y
};