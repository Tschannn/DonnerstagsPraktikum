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
    if (mokel != NULL)
    {
        argc--;
        do
        {
            mokel = merke->next;
            printf("%s\n",mokel->name);

            merke->next = merke->next;
            free(mokel);
            argc--;
        } while (merke != mokel && argc > 0 );
        while (merke != mokel)
        {
            mokel = merke->next;
            merke->next = mokel->next;
            free(mokel);
        }
    }
    else
    {
        printf("Bitte Namen eingeben:\n");
    }

    return 0;
}