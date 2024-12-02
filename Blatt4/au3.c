#include <stdio.h>
#include <ctype.h>
#include <string.h>

int istBoese(char *eingabe,char *argv[],int argc){
    int i = 1;
    while(i<argc)
    {
        if(strcmp(eingabe,argv[i]) == 0) return strcmp(eingabe,argv[i]);
        else i++;
    }
    return 1;
}

enum{MAXLAENGE =  200};

int main(int argc,char *argv[]){

    char eingabe[MAXLAENGE];
    int i;

    printf("Geben sie den zu ändernden Text ein: \n");

    while (scanf("%s",eingabe) != EOF)
    {
        if(istBoese(eingabe,argv,argc) == 0){
            i = 1;
            printf("%c",eingabe[0]);
            while (eingabe[i] != '\0')
            {
                printf("*");
                i++;
            }        
            printf(" ");
        }
        else{
            printf("%s ",eingabe);
        }
    }
    return 0;
}