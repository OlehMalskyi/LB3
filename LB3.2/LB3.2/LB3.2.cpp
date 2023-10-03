// Lab_03_2.cpp
// < Мальський Олег >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний агрумент 
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	double g; // сума x + c

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	g = x + c;
	if (g < 0 && a != 0)
		F = -a * pow(x, 2) + b;
	if (g > 0 && a == 0)
		F = (x - a) / (x - c);
	if (!(g < 0 && a != 0) && !(g > 0 && a == 0))
		F = (x / c) + (c / x);
	cout << endl;
	cout << "1) F = " << F << endl;

	// спосіб 2: розгалуження в повінй формі
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