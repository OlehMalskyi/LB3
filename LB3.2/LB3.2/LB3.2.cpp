// Lab_03_2.cpp
// < ��������� ���� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� �������� 
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	double g; // ���� x + c

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	g = x + c;
	if (g < 0 && a != 0)
		F = -a * pow(x, 2) + b;
	if (g > 0 && a == 0)
		F = (x - a) / (x - c);
	if (!(g < 0 && a != 0) && !(g > 0 && a == 0))
		F = (x / c) + (c / x);
	cout << endl;
	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ����� ����
	if (g < 0 && a != 0)
		F = -a * pow(x, 2) + b;
	else
		if (g > 0 && a == 0)
			F = (x - a) / (x - c);
		else
			F = (x / c) + (c / x);

	cout << "2) F = " << F << endl;

	cin.get();
		return 0;
}