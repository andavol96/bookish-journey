#include "Farma.h"
#include <string.h>
#include <iostream>

using namespace std;

Farma::Farma( char *_nombrefarmaco, float _precio)
{
	strcpy(nombrefarmaco, _nombrefarmaco);
	precio = _precio;
}

void Farma :: mostrar();
{
	cout << "Farmaco: "<< nombrefarmaco << endl;
	cout << "Precio: " << precio << endl;
	
}
