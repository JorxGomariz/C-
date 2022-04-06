class Date{
	//Atributos
	private:
		int day, month;

	//Métodos
	public:
		Date(int _day, int _month){ //Constructor
			day = _day;
			month = _month;
		}

		bool compare(Date& d); //Comprueba si las fechas son iguale
		void show();
};