#include <iostream>
#include <iomanip>
using namespace std;

void f(void);
extern double x, result;
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


