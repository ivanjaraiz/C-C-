//CREAR, INICIALIZAR Y REASIGNAR PUNTEROS
//ACCEDER A VALOR Y MODIFICARLO
#include <iostream>
using namespace std;
int main ()
{
	
	unsigned short int miEdad = 5, tuEdad = 10;
	//un puntero
	unsigned short int *pEdad = &miEdad; //creo y asigno puntero
	cout << "miEdad:\t" << miEdad << "\t\ttuEdad:\t" << tuEdad <<endl;
	cout << "&miEdad:\t" << &miEdad << "\t\t&tuEdad:\t" << &tuEdad << endl;

	cout << "pEdad:\t" << pEdad << endl; //dirección a la que apunta
	cout << "*pEdad:\t" << *pEdad << endl;// valor de dirección a la que apunta
	cout << "&pEdad:\t" << &pEdad << endl; // dirección donde está guardado el propio puntero

	cout << "\nReasignar: pEdad = &tuEdad ..." << endl << endl;
	pEdad = &tuEdad; //reasignar puntero

	cout << "miEdad:\t" << miEdad << "\t\ttuEdad:\t" << tuEdad <<endl;
	cout << "&miEdad:\t" << &miEdad << "\t\t&tuEdad:\t" << &tuEdad << endl;

	cout << "pEdad:\t" << pEdad << endl; //dirección a la que apunta
	cout << "*pEdad:\t" << *pEdad << endl;// valor de dirección a la que apunta
	cout << "&pEdad:\t" << &pEdad << endl; // dirección donde está guardado el propio puntero

	return 0;
}