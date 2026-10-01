// Lab_03_4.cpp
// < Ваше Прізвище Ім'я >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідна координата X
    double y; // вхідна координата Y
    double R; // радіус кола (параметр)

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Розгалуження в повній формі:
    // Перевірка належності точки (x, y) зафарбованій області Варіанту 3
    if ((x * x + y * y <= R * R && y >= 0 && y <= x) ||
        (x * x + y * y <= R * R && y <= 0 && x <= 0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    cin.get();
    return 0;
}