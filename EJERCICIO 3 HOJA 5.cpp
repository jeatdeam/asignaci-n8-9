//ejercicio 3 hoja 5
#include <iostream>

using namespace std;
int main()
{
	int x, y, punto;cout << "Digite x: ";
	cin >> x;cout << "Digite y: ";cin >> y;
	if (0 < x && 0 < y)
	{
		cout << "El punto se encuentra en el primer cuadrante" << endl;
	}
	else
	{
		if (x < 0 && 0 < y) {
			cout << "El punto se encuentra en el segundo cuadrante" << endl;
		}
		else {
			if (0 < x && y < 0) {
				cout << "El punto se encuentra en en el cuarto cuadrante" << endl;
			}
			else {
				if (x < 0 && y < 0) {
					cout << "El punto se encuentra en el tercer cuadrante" << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}
