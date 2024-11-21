#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char input;
    char abc[] = {"abcdefghijklmnopqrstuvwxyz"};
    char cba[] = {"wgsnqcdvmeyluzoabhrjfkxipt"};
    int i;


    if(!strcmp(argv[2], "decrypt") || !strcmp(argv[2], "encrypt")){
        printf("Geben sie entweder 'encrypt' oder 'decrypt' ein");
    }

    printf("Geben sie ihren Satz ein Herr Plotzenhotz: \n");
    while (scanf("%c", &input) != EOF)
    {
        if (input == ' ')
        {
            printf(" ");
            continue;
        }

        if (strcmp(argv[1], "decrypt") == 0)
        {
            for (i = 0; i < 25; i++)
            {
                if (input == abc[i])
                {
                    printf("%c", cba[i]);
                }
            }
        }
        else if (strcmp(argv[1], "encrypt") == 0)
        {
            for (i = 0; i < 25; i++)
            {
                if (input == cba[i])
                {
                    printf(" %c", abc[i]);
                }
            }
        }
        else
        {
            printf("falsche Eingabe bra\n");
            break;
        }
    }
    return 0;
}

/*cc -g -ansi -pedantic -Wall au2.c -o au2*/