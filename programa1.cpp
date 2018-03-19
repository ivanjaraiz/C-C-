#include <iostream>
#include <stdlib.h>

using namespace std;


class Casa{

	private: // atributos
		int altura; 
		string color; 

	public:  // métodos
		Casa(int, string);//  constructor
		void llover();
		void nevar(); 


};

//constructor, nos sirve para iniciar los atributos
Casa::Casa(int _altura, string _color){
altura = _altura;
color = _color;

}

void Casa::llover(){
	cout << "la altura es"<< altura <<" metros" << endl;
}

void Casa::nevar(){
	cout << "el color es" << color << " oscuro" << endl;
}

int main()
{

	Casa p1 = Casa (20, "negra"); // objeto p1 de la clase Casa.
	Casa p2 (19, "blanca");// objeto p2 de clase Casa. 
	Casa p3 (21, "verde");


	p1.llover();
	p2.nevar();

	p3.llover();
	p3.nevar();

	system("pause");
	return 0;
}