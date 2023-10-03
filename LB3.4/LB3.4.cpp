// Lab_03_4.cpp
// < Мальського Олега >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 14
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R1; // радіус внутрішнього кола
    double R2; // радіус зовнішнього кола

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    // розрахунок відстані від точки до початку координат
    double distance = sqrt(x * x + y * y);

    // розгалуження в повній формі
    if ((distance >= R1 && distance <= R2) && (x >= 0 && y >= 0 || x <= 0 && y <= 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cin.get();
    return 0;
}
