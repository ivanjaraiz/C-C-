//Usar el puntero this
#include <iostream>
using namespace std;

class Rectangulo
{
public: 
	Rectangulo();
	~Rectangulo();
	void ConfigurarLargo (int largo)
	{ (*this).suLargo=largo; }
	int ObtenerLargo() const
	{ return (*this).suLargo; }

	void ConfigurarAncho (int ancho)
	{ this -> suAncho = ancho; }
	int ObtenerAncho() const
	{ return this -> suAncho; }

private:
	int suLargo;
	int suAncho; 
};

Rectangulo::Rectangulo() // Primero, nos devuelve en pantalla los valores con ese constructor.
{
	suAncho = 5;
	suLargo = 10;
}
Rectangulo::~Rectangulo()
{}

int main ()
{
	Rectangulo elRect; 
	cout <<"elRect tiene " << elRect.ObtenerLargo() << "centimetros de Largo." << endl;
	cout <<"elRect tiene " << elRect.ObtenerAncho() << "centimetros de Ancho." << endl;
	// segundo, los que le pasamos en ConfigurarLargo y ConfigurarAncho para 
	// modificar esos valores.
	elRect.ConfigurarLargo(20);
	elRect.ConfigurarAncho(10);
	cout <<"elRect tiene " << elRect.ObtenerLargo() << "centimetros de Largo." << endl;
	cout <<"elRect tiene " << elRect.ObtenerAncho() << "centimetros de Largo." << endl;
	// se ha configurado un nuevo largo y un nuevo ancho
}

