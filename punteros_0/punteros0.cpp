//ACCEDER Y MANIPULAR EL VALOR DE UNA VARIABLE CON PUNTEROS

#include <iostream>
using namespace std;
typedef unsigned short int USHORT; 

int main ()
{

	USHORT miEdad;			//una variable
	USHORT *pEdad = 0;		//un puntero (guarda dirección de memoria de
							// de variable desconocida)

	miEdad = 5; 

	cout << "miEdad: " << miEdad << endl << endl; // muestra en pantalla
												// el valor que tiene mi edad
	
	//asignar variable miEdad al puntero *pEdad
	pEdad = &miEdad; // asignar dirección de memoria a variable a puntero pEdad.

	cout <<" pEdad: " << pEdad << endl; // muestra la dirección de memoria 
										// en la que está alojada miEdad
	cout << "*pEdad: " << *pEdad << endl << endl; // valor alojado en la dirección 

	cout << "Configurar *pEdad = 7 ..." << endl;

	*pEdad = 7; // Configurar miEdad como 7

	cout << "*pEdad: " << *pEdad << endl;
	cout << "miEdad: " << miEdad << endl << endl;
 
 	cout << "miEdad miEdad = 9 ... "<< endl; 
 	miEdad = 9; 

 	cout << "*pEdad: " << *pEdad << endl;
	cout << "miEdad: " << miEdad << endl << endl; // el valor que se 
										 // guarda en esta dirección

	return 0;
}