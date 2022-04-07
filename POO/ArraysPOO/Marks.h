class Marks{
	//Atributos
	private:
		float markFMA2, markP2, markFFI2, markIIR, markC;

	//Métodos
	public:
		Marks(){ //Constructor por defecto. Se puede poner o no (C++ lo genera automáticamente cuando tratas arrays de objetos) 

		}

		void ask(); //Pregunta las notas
		void show(); //Muestra el promedio de las notas
};