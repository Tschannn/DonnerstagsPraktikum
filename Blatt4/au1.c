#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    struct Mensch
    {
        char name[25];
        struct Mensch *next;
    } *mokel, *merke = NULL;

    char eingabe[25];

    while (scanf("%s", eingabe) != EOF)
    {
        mokel = malloc(sizeof(struct Mensch));

        strncpy(mokel->name, eingabe, 25);

        if (merke == NULL)
        {
            merke = mokel;
            merke->next = merke;
        }else{
            merke->next = mokel;
            mokel->next = merke;
        }
    }
    free(mokel);
    return 0;
}