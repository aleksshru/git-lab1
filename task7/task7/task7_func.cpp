#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
double x, result;
void f(void)
{
    result = pow(cos(x), 2) - pow(sin(x), 2);
}