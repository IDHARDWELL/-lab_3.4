// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double R; // вхідний аргумент
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((R * R >= 1 / 2 * ((x * x) + (y * y))) && (y > 0) && (x < 0))
		cout << "yes" << endl;
	else if ((y <= R) && (y <= x) && (y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}