// Lab_03_4.cpp
// Казанівський Віктор
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10
#include <iostream>
using namespace std;
int main()
{
	double x; 
	double y; 
	double a;
	double b;
	double R;

	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if (((y >= -b && y <= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2)) && (x <= 0 && x >= -a)) ||
	((y >= 0 && y <= b) && (pow(x, 2) + pow(y, 2) >= pow(R, 2)) && (x <= a && x >= R)))

		cout << "yes" << endl;
	else
		cout << "no" << endl;
	
	cin.get();
	return 0;
}
