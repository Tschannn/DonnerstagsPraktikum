#include <stdio.h>

int main(void)
{

    int i = 0, j,temp;
    int v[20];

    while (i< 20 && scanf("%d", &v[i]) != EOF)
    {
        i++;
    }
    

    for (j = 0; j < i; j++)
    {
        if(v[j] > v[j+1]){
            temp = v[j];
            v[j] = v[j+1];
            v[j+1] = temp;
        }
    }

    for ( i = 0; i < j; i++)
    {
    printf("%6d\n", v[i]);
    }
    
    return 0;
}