// Lab_3_3.cpp
// < Мальський Олег >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // результат обчислення

	cout << "x ="; cin >> x;

	// розгалуження в повній формі
	if (x <= -4)
		y = -2;
	else
		if (-4 < x && x <= 0)
			y = (x / 4);
		else
			if (0 < x && x <= 2)
				y = pow(x, 2);
			else
				y = 5 - (x / 2);
	cout << endl;
		cout << "y = " << y << endl;
	
		cin.get();
			return 0;
}