#include <iostream>
#include <cmath>
using namespace std;

double function(double x)
{
	return pow(x, 3) - 10 * x + 2;
}

int main()
{
	setlocale(LC_ALL, "Ukr");
	double x1, x2, y;
	const double e = 0.385;
	x1 = 3;
	x2 = 9;
	do
	{
		y = x2 - ((x2 - x1) / (function(x2) - function(x1))) * function(x2);
		x1 = x2;
		x2 = y;
	} 
	while (fabs(y - y) >= e);
	cout << "Корінь: " << y << endl;
	return 0;
}