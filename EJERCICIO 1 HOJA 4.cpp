//ejercicio 1 practica 4

#include <iostream>
using namespace std;
int main()
{
	int N, P1, P2, P3, Y;
	cout << "Cuantos neumaticos va a comprar: ";
	cin >> N;
	P1 = 145;
	P2 = 138;
	P3 = 135;
	if (N < 3)
	{
		Y = P1 * N;
	}
	else {
		if (N >= 3 && N <= 5)
		{
			Y = P2 * N;
		}
		if (5 < N)
		{
			Y = P3 * N;
		}
	}
	cout << Y << endl;

	system("pause");

	return 0;
}