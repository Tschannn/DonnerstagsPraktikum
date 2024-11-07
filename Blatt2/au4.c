#include <stdio.h>

int main(void)
{
    int n, i = 0, j = 0, middle, input1,counter;
    int v[9][9] = {0};
    int finished = 1;
    printf("Gebe eine Zahl bis 9 ein:\n");
    scanf("%d", &n);

    while (n % 2 == 0 || n > 9 || n < 1)
    {
        printf("Bitte geben sie eine gültige Zahl ein:}\n");
        scanf("%d", &n);
    }

    input1 = 1;
    middle = n / 2;
    v[middle][middle] = input1;

    while (finished)
    {
        printf("\n");
        while (v[(middle + input1  + counter) % n][(middle - input1- counter ) % n] == 0)
        {
            v[(middle + input1 + counter) % n ][(middle - input1 - counter) % n] = input1++;
            counter++;
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {

                printf("%d", v[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}