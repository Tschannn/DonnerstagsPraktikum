#include <stdio.h>
#include <string.h>

#ifndef SIZE
    #define SIZE 3
#endif


#ifdef DE
    #define TEXT "Ohne Hoergeraet hoer ich nichts"
#elif NL
    #define TEXT "Zonder gehoorapparaat hoor ik niets"
#elif FI
    #define TEXT "Ilman kuuloeitta en kuula mitaeaen"
#elif SE
    #define TEXT "Jag hoer ingenting utan hoerselapparat"
#elif IT
    #define TEXT "Senza làpparecchio d`autito non sento niente"
#elif CN
    #define TEXT "mei zhu ting qi jiu tingbujian"
#else
    #define TEXT "Ilman kuuloeitta en kuula mitaeaen"
#endif

void drawRectangle(int abstandSize,char* text){
    int i=0,j=0;
    int textLen = strlen(text);
    int total = abstandSize+textLen;
    for ( i = 0; i < total; i++)
    {
       printf("*");
    }
       printf("\n");

    for (i = 0; i < abstandSize; i++) {
        printf("*");
        for ( j = 0; j < total - 2; j++) {
            printf(" ");  
        }
        printf("*\n");
    }

    printf("*");
    printf("%s",text);
    printf("  *\n");
    
    for (i = 0; i < abstandSize; i++) {
        printf("*");
        for ( j = 0; j < total - 2; j++) {
            printf(" ");  
        }
        printf("*\n");
    }

    for ( i = 0; i < total; i++)
    {
       printf("*");
    }
       printf("\n");

}

int main(int argc,char *argv[]){

 drawRectangle(SIZE,TEXT);

}