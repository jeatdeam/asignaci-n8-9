// ejericio 3 hoja 4
#include <iostream>
using namespace std;
int main()
{
	int diametro, ingredientes;
	double P, P1, PX;
	cout << "Diametro: ";cin >> diametro;
	cout << "Cantidad de ingredientes extra: ";cin >> ingredientes;
	P = 1.5;
	P1 = 2.5;
	PX = (diametro*P) + (ingredientes*P1);cout << PX << endl;
	system("pause");
	return 0;
}
