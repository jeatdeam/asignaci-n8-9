//ejercicio 4 hoja 7
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int num;
	int a, b, c, d;
	int a1, b1, c1, d1;

	
	cout << "Numero = "<<endl;
	cin >> num;


	a = (num/ 1000);
	b = ((num / 100) - (a * 10));
	c = ((num / 10) - ((a * 100) + (b * 10)));
	d = ((num / 1) - ((a * 1000) + (b * 100) + (c * 10)));

	cout << a << "-" << b << "-" << c << "-" << d << endl;

	if (a / 1 == 1 || a / 3 == 1 || a / 5 == 1 || a / 7 == 1 || a / 9 == 1)
	{
		a1 = a;

	}
	else
	{
		a1 = 0;
	}

	if (b / 1 == 1 || b / 3 == 1 || b / 5 == 1 || b / 7 == 1 || b / 9 == 1)
	{
		b1 = b;
	}
	else
	{
		b1 = 0;
	}

	if (c / 1 == 1 || c / 3 == 1 || c / 5 == 1 || c / 7 == 1 || c / 9 == 1)
	{
		c1 = c;

	}
	else
	{
		c1 = 0;
	}

	if (d / 1 == 1 || d / 3 == 1 || d / 5 == 1 || d / 7 == 1 || d / 9 == 1)
	{
		d1 = d;

	}
	else
	{
		d1 = 0;
	}

	cout << a1 + b1 + c1 + d1;

	_getch();
	return 0;
}