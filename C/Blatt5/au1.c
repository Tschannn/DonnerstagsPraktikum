#include <stdio.h>
#include <stdlib.h>

union un{
    double d;
    int integer[2];
}var1;

void printBinary(int z){
    int i;
    for (i = 31; i >= 0; i--)
    {
        printf("%d", (z >> i) & 1);
    }   
}

int main(int argc,char *argv[]){
    double eingabe;

    if(sscanf(argv[1],"%lf",&eingabe) != 1){
        printf("Fehler, da kein doule eingegeben wurde!!!!!!");
        return 1;
    }

    var1.d = eingabe; 

    printf("Hier der High level shit:\n");
    printBinary(var1.integer[1]);
    printf("\n");

    printf("Hier der low level shit:\n");
    printBinary(var1.integer[0]);
    printf("\n");

    return 0;
}