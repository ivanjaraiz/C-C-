// uso de punteros con métodos const
#include <iostream>
using namespace std;

class Rectangulo {
public: 
	Rectangulo();
	~Rectangulo();
	void ConfigurarLargo (int largo) { suLargo = largo; }
	int ObtenerLargo() const { return suLargo; }
	void ConfigurarAncho (int ancho) { suAncho = ancho; }
	int ObtenerAncho() const { return suAncho; }

private: 
	int suLargo;
	int suAncho; 
};

Rectangulo::Rectangulo()
{
	suAncho = 5; 
	suLargo = 10; 
}

Rectangulo::~Rectangulo()
{}

int main ()
{

	Rectangulo* pRect = new Rectangulo;
	const Rectangulo * pConstRect = new Rectangulo;
	Rectangulo* const pConstPtr = new Rectangulo; 

	cout << "pRect ancho: " << pRect->ObtenerAncho() << "centímetros" << endl;
	cout << "pConstRect: " << pConstRect->ObtenerAncho() << "centímetros" << endl;
	cout << "pConstPtr: " << pConstPtr->ObtenerAncho() << "centrímetros" << endl;

	pRect->ConfigurarAncho(10); // configuramos el puntero pRect el valor a 10 
	//pConstRect->ConfigurarAncho(10); // error debido a que la clase Rectangulo es constate, es decir, no se puede configurar
 	pConstPtr->ConfigurarAncho(10); // es este caso lo que es constante es el puntero, es decir, el puntero tiene 
 									// que ser constante a rectangulo. En este caso no se modifica el lugar al que apunta, 
 									// por tanto es totalmente correcto. 
	cout << "pRect ancho: " << pRect->ObtenerAncho() << "centímetros" << endl;
	cout << "pConstRect: " << pConstRect->ObtenerAncho() << "centímetros" << endl;
	cout << "pConstPtr: " << pConstPtr->ObtenerAncho() << "centrímetros" << endl; 	

	return 0;
}
// se crea main que es donde vamos a tener la clase. 
//creamos 3 punteros en main. 
// Primero, se pone un puntero que apunte a la clase rectangulo, es dice, que va a contener 
// un objeto de la clase rectangulo. 
// Indicamos el tipo, posteriormente el puntero, con el operador puntero, y 
// asignandole memoria mediante el uso de new. y el tipo que se va guardar que 
// es un objeto de la calse rectangulo. 
// 
// Lo que va ser constante es el rectangulo. No podemos modificar el objeto al que 
// apunta. 
// El tipo al que apunta tiene que ser constante y no puede modificarse. 
// Este es el nombre que le damos al puntero y le asignamos mediante new su 
// situación en memoria. 

// tenemos dos punteros, uno que no es constante y otro que el tipo , en este caso 
// el objeto es lo que es constante. 

// creamo sun tercer tipo, en el que va a se contante el puntero. Y por tanto, 
// no puede cambiarse el lugar al que apunta el puntero. 
// Como ya sabemos y mirando a la derecha de la palabra cable. 

// a continuación en una mañana se puede tener. vamos a ver que datos se tiene 
// en meoeria.  