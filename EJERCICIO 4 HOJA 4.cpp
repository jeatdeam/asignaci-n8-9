//ejercicio 4 hoja 4
#include <iostream>
using namespace std;
int main()
{
	int Hour, Pago;
	cout << "Horas: ";cin >> Hour;
	if (Hour <= 40) {
		Pago = 16 * Hour;
	}
	else {
		if (Hour > 40) {
			Pago = (16 * 40) + ((Hour - 40) * 20);
		}
	}
	cout << Pago << endl;
	system("pause");
	return 0;