#include <iostream>
#include <iomanip>
using namespace std;
void f(void);
double x,  result;
void main()
{
    x = 2;
    cout << "x = " << x << endl;
    f();
    cout << "y = " << fixed << setprecision(4) << result << endl;
    cout << "Enter x ";
    cin >> x;
    f();
    cout << "y = " << fixed << setprecision(4) << result;
}
void f(void)
{
    result = pow(cos(x), 2) - pow(sin(x), 2);
}
