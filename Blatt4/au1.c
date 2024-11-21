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
} *mensch, *pointer = NULL;

int main(int argc, char *argv[])
{
    char eingabe[LAENGE];
    int i;

    while (scanf("%s", eingabe) != EOF)
    {
        mensch = malloc(sizeof(struct Mensch));
        if (!mensch)
            return 1;

        strcpy(mensch->name, eingabe);

        /*Hier wird der erste Mensch eingesetzt*/
        if (pointer == NULL)
        {
            pointer = mensch;
            pointer->next = pointer;
        }
        else
        {
            mensch->next = pointer->next;
            pointer->next = mensch;
        }
        pointer = mensch;
    }

    if (mensch != NULL)
    {
        argc--;
     do
        {
            mensch = pointer->next;
            for ( i = 1; i < argc; i++)
            {
               pointer = mensch;
               mensch = mensch->next;
            }
            printf("%s\n",mensch->name);
            pointer->next = mensch->next;
            free(mensch);    
        }while (pointer != mensch);
    }
    else
    {
        printf("Bitte Namen eingeben:\n");
    }

    return 0;
}