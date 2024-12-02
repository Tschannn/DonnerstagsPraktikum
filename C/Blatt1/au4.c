#include <stdio.h>

int main(void)
{

    int zahl;
    int ergebnis;
    int i;

    printf("Geben sie eine arabische Zahl ein:\n");
    scanf("%d", &zahl);

        ergebnis = zahl/100;
        zahl = zahl%100;

        for(i=0;i<ergebnis;i++){
            printf("C");
        }

         ergebnis = zahl/50;
        zahl = zahl%50;

        for(i=0;i<ergebnis;i++){
            printf("L");
        }

         ergebnis = zahl/10;
        zahl = zahl%10;

        for(i=0;i<ergebnis;i++){
            printf("X");
        }

         ergebnis = zahl/5;
        zahl = zahl%5;

        for(i=0;i<ergebnis;i++){
            printf("V");
        }

         ergebnis = zahl/1;
        zahl = zahl%1;

        for(i=0;i<ergebnis;i++){
            printf("I");
        }
        

    return 0;
}