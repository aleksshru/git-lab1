#include <iostream>
#include <iomanip>
using namespace std;
double f(double x);
void main()
{
    double y1, y2, x1, x2;
    x1 = 2;
    cout << "x = " << x1 << endl;
    cout << "y = " << fixed << setprecision(4) << f(x1) << endl;
    cout << "Enter x ";
    cin >> x2;
    cout << "y = " << fixed << setprecision(4) << f(x2);
}
double f(double x)
{
    return pow(cos(x), 2) - pow(sin(x), 2);
}