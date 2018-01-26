//Punteros como datos miembro a los que accedemos con el operador ->

#include <iostream>
using namespace std;
class SimpleCaballo // declarar clase llamada SimpleCaballo
//se observa que las dos variable miembro que son los punteros a numeros enteros 

{
	
public: 
	SimpleCaballo();
	~SimpleCaballo();
	int ObtenerEdad() const {return *suEdad; }
	void ConfigurarEdad (int edad) {*suEdad = edad; }

	int ObtenerPeso() const {return *suPeso; }
	void ConfigurarPeso (int peso) {*suPeso = peso; }
private: 
	int * suEdad;
	int * suPeso; 

};

SimpleCaballo::SimpleCaballo() //se define el constructor
{
	suEdad = new int (2); //inicializa punteros para apuntar memoria FreeStore con new, además
	// de dar valores por defecto 
	// es en la clase donde es usan los punteros
	// y es en el cuerpo del constructor, donde se llama al new integer pasandole un valor, 
	//se inicializa para cada una de las variables miembro, y aquí vemos el sumador de 2 y 5. 
	suPeso = new int (5); 
}

SimpleCaballo::~SimpleCaballo() // dentro de la definición del destructor
// se usa delete para lo dos punteros, para suEdad y suPeso
{
	delete suEdad;
	delete suPeso;
}

int main()
{
	SimpleCaballo *Eclipse = new SimpleCaballo;
	cout << "Eclipse tiene " << Eclipse->ObtenerEdad() <<"a\xa4os de edad " << endl;
	Eclipse->ConfigurarEdad(5);
	cout << "Eclipse tiene " << Eclipse->ObtenerEdad() <<"a\xa4os de edad " << endl;

	delete Eclipse;
	return 0;
}