#include "myMath.h"

#define EXPONENT 2.71828182846

double Exp(int x)
{
    return Pow(EXPONENT, x);
}

double Pow(double x , int y)
{
    if (y == 0)
    {
        return 1.0;
    }
    double base = x;
    x = 1;
    for (int i = 0; i < y; i++)
    {
        x = x * base;
    }
    if ( y < 0 )
    {
        x = 1.0 / x;
    }
    return x;
}

