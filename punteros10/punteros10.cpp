//Ejemplo de puntero perdido

typedef unsigned short int USHORT;
#include <iostream>

int main (){
	//crear un puntero, para apuntar a una direccion donde se guarda una vairable de tipo USHORT
	// le asignamos una memoria en el FreeStore, mediante el uso de new. 
	USHORT * pInt = new USHORT; 
	*pInt = 10;// que se guarde un valor igual a 10. 
	std::cout << "*pInt: " << *pInt << std::endl;
	delete pInt;// aplico delete al puntero
	pInt = new USHORT; // SOLUCIÓN, reasignación de puntero 
	// un nuevo puntero que apunte a un espacio de la memoria que apunte al FreeStore 
	// donde se va a guardar un long, donde se va a tener un valor a ese long. 
	// que se imprima en pantalla

	long * pLong = new long; 
	*pLong = 90000;
	std::cout << "*pLong: " << *pLong << std::endl;

	*pInt = 20; // Error, este fue borrado! 
	std::cout << "*pInt: " << *pInt << std::endl;
	std::cout << "*Long: " << *pLong << std::endl;
	delete pLong;


  	return 0;
}

// se puede ver que pInt es un puntero salvaje de manera que no se le 
//puede dar un nuveo valor. 

// razón de error: se ha borrado la dependencia de la memoria
//después se crea un long a la memoria, y lo que se hace es  
// y en este caso lo que se hace es asignar esa memoria al long. 
//Cuando volvemos a modificar este puntero lo que se hace es guardar
// lo que hay en esta area de la memoria. 
// tiene un error que tiene que ver con parte de la memoria de error del 
//compilador


// Aquí ocurre una cosa en concreto con una gestión de la memoria en concreto.
// se puede ver que se obtiene un valor correcto.. pero luego se ve.. que 
// donde apunta long.. es un valor que no tiene nada que ver.. con el que 
// escribimos. Se ve que algo imprevisible y que a veces afecta a otras partes 
// del programa.. y no directamente al lugar donde debería estar el error. 
// de ahí la dificultad con los punteros perdidos. 

// se ve que en el código no se modifica para nada el valro que tení a long y
// sin embargo el valor no es correcto. 

//SOLUCIÓN: reasignarlo. 
// se ve que ya no se tiene el error y se vuelve a tener un área en memoria 
//Reasignada, que es donde se guardara el valor de 20 y 90000, que no van a 
// interferir uno en el otro.  
// se compila y se ve que funciona correctamente. 
