// Lab_03_4.cpp
// < ���������� ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 14
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R1; // ����� ����������� ����
    double R2; // ����� ���������� ����

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    // ���������� ������ �� ����� �� ������� ���������
    double distance = sqrt(x * x + y * y);

    // ������������ � ����� ����
    if ((distance >= R1 && distance <= R2) && (x >= 0 && y >= 0 || x <= 0 && y <= 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cin.get();
    return 0;
}
