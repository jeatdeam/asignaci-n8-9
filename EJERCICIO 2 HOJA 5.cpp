//ejercicio 2 hoja 5
#include<iostream>

using namespace std;
int main()
{
	int a,Dias,NumeroMes;
	cout << "Inserte el numero del mes: ";
	cin >> NumeroMes;
	Dias = 31;
	if (NumeroMes == 28) {
		a = Dias - 3;
		cout << "El mes " << NumeroMes << " tiene " << a << " dias" << endl;
	}
	else {
		if (NumeroMes == 4) {
			a = Dias - 1;
			cout << "El mes " << NumeroMes << " tiene " << a << " dias" << endl;
		}
		else {
			if (NumeroMes == 6) {
				a = Dias - 1;
				cout << "El mes " << NumeroMes << " tiene " << a< " dias" << endl;
			}
			else {
				if (NumeroMes == 9) {
					a = Dias - 1;
					cout << "El mes " << NumeroMes << " tiene " << a << " dias" << endl;
				}
				else {
					if (NumeroMes == 11) {
						a = Dias - 1;
						cout << "El mes " << NumeroMes << " tiene " << a << " dias" << endl;
					}
					else {
							a = Dias;
							cout << "El mes " << NumeroMes << " tiene " << X << " dias" << endl;
						}
					}
				}
			}
		}
	system("pause");
    return 0;
}