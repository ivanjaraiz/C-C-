#include <iostream>
using namespace std;

class SimpleCaballo
{
public:
	SimpleCaballo();
	~SimpleCaballo();
private: 
	int suEdad;

};

SimpleCaballo::SimpleCaballo()
{
	cout << "Constructor llamado. " << endl;
	suEdad = 1;
}

SimpleCaballo::~SimpleCaballo()
{
	cout << "Destructor llamado. " << endl;
}

int main()
{
	cout << "SimpleCaballo Eclipse... " << endl;
	SimpleCaballo Eclipse; 
	cout << "SimpleCaballo *puntero = new SimpleCaballo... " << endl;
	SimpleCaballo * pPuntero = new SimpleCaballo;
	cout << "delete pPutento... " << endl;
	delete pPuntero;

	return 0;
}