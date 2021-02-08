// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double y1, y2, x1, x2;
    x1 = 2;
    y1 = pow(cos(x1),2) - pow(sin(x1),2);
    cout << "x = " << x1 << endl;
    cout << "y = " << fixed << setprecision(4) << y1 << endl;
    cout << "Enter x ";
    cin >> x2;
    y2 = pow(cos(x2), 2) - pow(sin(x2), 2);
    cout << "y = " << fixed << setprecision(4) << y2;
}