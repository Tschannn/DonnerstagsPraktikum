#include <stdio.h>
#include <math.h>

double regula(double x1, double x2, double (*f)(double))
{
    double xs;
    double ende;
    ende = 1E-6;

    do
    {
    xs = x1 - (f(x1)*(x2-x1))/(f(x2)-f(x1));

    if(f(xs)*f(x1) > 0){
        x1 = xs;
    }else if(f(xs)*f(x1) < 0) {
        x2 = xs;
    }

    } while (fabs(f(xs)) > ende);

    return xs;
}

double f(double x)
{
    return (x * x) - 9;
}

int main(void)
{
    double x1,x2,nullstelle;
    x1= 5.0;
    x2= -6.0;
    nullstelle = regula(x1,x2,f);

    printf("%f", nullstelle);

    return 0;
}