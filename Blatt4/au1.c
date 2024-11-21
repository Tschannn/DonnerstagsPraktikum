#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum
{
    LAENGE = 25
};
struct Mensch
{
    char name[LAENGE];
    struct Mensch *next;
} *mokel, *merke = NULL;

int main(int argc, char *argv[])
{
    char eingabe[LAENGE];

    while (scanf("%s", eingabe) != EOF)
    {
        mokel = malloc(sizeof(struct Mensch));
        if (!mokel)
            return 1;

        strcpy(mokel->name, eingabe);

        /*Hier wird der erste Mensch eingesetzt*/
        if (merke == NULL)
        {
            merke = mokel;
            merke->next = merke;
        }
        else
        {
            merke->next = mokel;
            mokel->next = merke;
        }
        merke = mokel;
    }
    merke = merke->next;
    if (mokel != NULL)
    {
       
    }
    else
    {
        printf("Bitte Namen eingeben:\n");
    }

    return 0;
}