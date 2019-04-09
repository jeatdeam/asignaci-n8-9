#include <iostream>
using namespace std;
int main()
{
	int lado1, lado2, lado3;
	cout << "Digite el lado 1: ";cin >> lado1;
	cout << "Digite el lado 2: ";cin >> lado2;
	cout << "Digite el lado 3: ";cin >> lado3;
	if (lado1 == lado2 && lado3 == lado2)
	{
		cout << "Equil: V" << endl << "Isosceles: F" << endl << "Escaleno : F" << endl;
	}
	else
	{
		if (lado1 == lado2) {
			cout << "Equil: F" << endl << "Isosceles: V" << endl << "Escaleno : F" << endl;
		}
		else
		{
			if (lado2 == lado3) {
				cout << "Equil: F" << endl << "Isosceles: V" << endl << "Escaleno : F" << endl;
			}
			else
			{
				if (lado1 == lado3) {
					cout << "Equil: F" << endl << "Isosceles: V" << endl << "Escaleno : F" << endl;
				}
				else {
					cout << "Equil: F" << endl << "Isosceles: F" << endl << "Escaleno : V" << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}