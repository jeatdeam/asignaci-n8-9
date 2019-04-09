//ejercicio 3 hoja 6
#include <iostream>
#include <conio.h>
#include <string> 

using namespace std;

int main() {
	int años;
	string estudios;
	cout << " ingrese los años de estudio :" << endl;cin >> años;
	cout << " ingrese el grado de estudios ): " << endl;cin >> estudios;

	if (años < 5) {
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


	else if (años >= 5) {
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