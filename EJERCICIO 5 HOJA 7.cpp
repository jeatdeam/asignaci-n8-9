//ejercicio 5 hoja 7
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	char tamano(10);
	int precioU;
	double x;


	cout << "tipo de pizza grande, familiar, fiesta:";cin >> tamano;
	cout << "Precio por unidad :";cin >> precioU;

	if (tamano == 'G')
	{
		x = precioU * 0.9;
	}
	if (tamano == 'F')
	{
		x = precioU * 0.85;
	}
	if (tamano == 'T')
	{
		x = precioU * 0.8;
	}

	cout << "Total: " << x;

	_getch();

	return 0;
}