// Lab_03_4.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.1
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double R; // ������� ��������
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((R * R >= 1 / 2 * ((x * x) + (y * y))) && (y > 0) && (x < 0))
		cout << "yes" << endl;
	else if ((y <= R) && (y <= x) && (y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}