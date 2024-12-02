#include <stdio.h>

int main(void)
{
    double x,w, neuW;

    printf("Gebe eine zahl zum furzeln ein\n");

    scanf("%lf", &x);
    w = (1+x)/2;

    do
    {
        neuW = w;
        w = (neuW+(x/neuW))/2;
        

    } while (neuW - w > 1e-7);

    printf("%10.4lf",neuW);

    return 0;
}