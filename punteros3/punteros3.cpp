//asignar y borrar un puntero que apunta al FreeStore. 
#include <iostream>
using namespace std;
int main ()
{
	int variableLocal = 5;
	int *pLocal = &variableLocal; //apunta a una variable que está en la pila (stack)
	int *pHeap = new int; //FreeStore con new y tipo de valor que contiene. 
	*pHeap = 7;// dirección que apunta el puntero se guarde un valor. 

	cout << "variableLocal: " << variableLocal << endl;
	cout << "*pLocal: " << *pLocal << endl;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap; //libera memoria FreeStore (puntero salvaje)
	pHeap = new int; // se asigna de nuevo a new int, no hace falta * porque el puntero ya esta creado
	*pHeap = 17; 
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap; 
	return 0; // si se llega a return se elimina el FreeStore
}

//*pLocal está en la pile, luego se elimina automaticamente
//*pHeap está en FreeStore, se debe elimina manualmente. 