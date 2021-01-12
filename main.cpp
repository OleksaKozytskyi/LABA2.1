// Lab_02.cpp
// < Козицького Олекса >
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 7

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Pi = 4 * atan(1.);
    double A;
    double z1;
    double z2;

    cout << "а = "; cin >> A;


    z1 = cos(((3 * Pi) / 8) - (A / 4)) * cos(((3 * Pi) / 8) - (A / 4)) - cos(((11 * Pi) / 8) + (A / 4)) * cos(((11 * Pi) / 8) + (A / 4));
    z2 = sqrt(2) / 2 * sin(A / 2);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}