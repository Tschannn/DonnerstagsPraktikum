#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char input;
    char abc[] = {"abcdefghijklmnopqrstuvwxyz"};
    char cba[] = {"wgsnqcdvmeyluzoabhrjfkxipt"};
    int i;

    printf("Geben sie ihren Satz ein Herr Plotzenhotz: \n");

    while(scanf("%c",&input)!= EOF){

    if(strcmp(argv[1],"decrypt") == 0){
        for(i=0;i<25;i++){
            if(input == abc[i]){
                printf("%c",input);
            }
        }
    }else if(strcmp(argv[1],"encrypt") == 0){
        for(i=0;i<25;i++){
            if(input == cba[i]){
                printf("%c",input);
            }
    }

    }
    printf("Es hat nicht funktioniert...");
    }
    return 0;
}

/*cc -g -ansi -pedantic -Wall au2.c -o au2*/