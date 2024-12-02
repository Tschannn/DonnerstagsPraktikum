#include <stdio.h>

void schreibbit(unsigned z)
{
    int i;
    for (i = 15; i >= 0; i--)
    {
        printf("%d", (z & 1 << i) != 0);
    }
}

unsigned liesbit(void)
{
    unsigned int zahl = 0;
    char c;
    
    while ((c = getchar()) == '1' || c == '0')
    {
        zahl  = (zahl<<1) | c - '0'; 
    }
    return zahl;
}

int main(void)
{
    unsigned a, b;
    printf("Gebe eine zahl ein:\n");
    a = liesbit();
    printf("Another one:\n");
    b = liesbit();

    printf("a & b:\n");
    schreibbit(a & b);
    printf("\n");
    printf("a | b:\n");
    schreibbit(a | b);
    printf("\n");
    printf("a ^ b:\n");
    schreibbit(a ^ b);

    return 0;
}