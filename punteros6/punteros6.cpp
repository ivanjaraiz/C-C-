//Acceder a datos miembro de objetos en el "heap"
// usando el operador ->

#include <iostream>

using namespace std;

class SimpleCaballo
{
public:
	SimpleCaballo() {suEdad = 2; }
	~SimpleCaballo(){}
	int ObtenerEdad () const {return suEdad; }
	void ConfigurarEdad (int edad) {suEdad = edad; }
private: 
	int suEdad;	
};

int main()
{
	SimpleCaballo * Eclipse = new SimpleCaballo;
	cout << "Eclipse tiene " << Eclipse->ObtenerEdad() << " a\xa4os de edad" << endl;//mostrar en pantalla, de nuevo utilziando eclipse.. 
															// y obtener edad el valor que en este momento tiene que sería 2
	Eclipse->ConfigurarEdad(5);
	cout << "Eclipse tiene " << Eclipse->ObtenerEdad() << " a\xa4os de edad" << endl;
	delete Eclipse;



	return 0;
}