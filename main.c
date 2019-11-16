#include <stdio.h>
#include "myMath.h"

int main()
{
double num;
    printf("Please inset a real number: ");
    scanf("%lf", &num);
    printf("\n");
    double res = sub( add( Exp(num), Pow(num, 3) ), 2 );
    printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %0.4lf is: %0.4lf\n", num, res);
   double res1 = add( mul(3 , num), mul(2 , Pow(num , 2)) );
   printf("The value of f(x) = 3x + 2X^2 at the point %0.4lf is: %0.4lf\n", num, res1);
    double res2 = sub(div(mul(Pow(num , 3) , 4) , 5) , mul (2 , num));
    printf("The value of f(x) = (4x^3)/5 -2x at the point %0.4lf is: %0.4lf\n", num, res2);
}
