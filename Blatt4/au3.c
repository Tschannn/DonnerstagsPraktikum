#include <stdio.h>
#include <ctype.h>
#include <string.h>


enum{MAXLAENGE =  200};

int main(int argc,char *argv[]){

    char *boseworte[MAXLAENGE];
    int i;
    char eingabe[MAXLAENGE];

        for ( i = 1; i < argc; i++)
        {   
            boseworte[i-1] = argv[i];
        }

    printf("Geben sie den zu ändernden Text ein: \n");

    while (scanf("%s",eingabe) != EOF)
    {
        if(strcmp(eingabe,*boseworte)){
            printf("YA Kelb ");
        }
    }
    

    return 0;
}