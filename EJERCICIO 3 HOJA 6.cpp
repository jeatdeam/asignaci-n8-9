//ejercicio 3 hoja 6
#include <iostream>
#include <conio.h>
#include <string> 

using namespace std;

int main() {
	int a�os;
	string estudios;
	cout << " ingrese los a�os de estudio :" << endl;cin >> a�os;
	cout << " ingrese el grado de estudios ): " << endl;cin >> estudios;

	if (a�os < 5) {
		if (estudios == "Primaria") {

			cout << "obtuvo 10 puntos" << endl;
		}
		else if (estudios == "Secundaria") {
			cout << "obtuvo 15 puntos" << endl;
		}
		else if (estudios == "Universitario") {
			cout << "obtuvo 25 puntos" << endl;
		}
		else if (estudios == "Postgrado") {
			cout << "obtuvo 35 puntos" << endl;
		}
	}


	else if (a�os >= 5) {
		if (estudios == "Primaria") {
			cout << "obtuvo 15 puntos" << endl;
		}
		else if (estudios == "Secundaria") {
			cout << "obtuvo 20 puntos" << endl;
		}
		else if (estudios == "Universitaro") {
			cout << "obtuvo 30 puntos" << endl;
		}
		else if (estudios == "postgrado") {
			cout << "obtuvo 40 puntos" << endl;
		}
	}
	_getch();
}