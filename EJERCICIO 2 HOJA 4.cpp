//ejercicio 2 hoja 4
#include<iostream>
using namespace std;
int main() {
int edad, precio;
	bool muj;
	cout << "Digite 1 si es mujer o 0 si es hombre: ";
	cin >> muj;
	cout << "Edad: ";
	cin >> edad;
	if (!muj && edad < 25) {  
		precio = 1000;
	}
	else
	{
		if (!muj && edad >= 25) {
			precio = 700;
		}
	}
	if (muj && edad < 21)
	{
		precio = 800;
	}
	else
	{
		if (muj && edad >= 21) {

			precio = 500;
		}
	}
	cout << precio << endl;

	system("pause");

	return 0;


}