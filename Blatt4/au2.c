#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char *data;
    struct Node *next;
    struct Node *previous;
} *nodep;

void printList(nodep lst)
{
    while (lst->next != NULL)
    {
        printf("%p\n", lst);
        lst = lst->next;
    }
}

nodep insertAt(nodep lst, int pos, char *inhalt)
{
    int i;

    nodep newP;

    newP = malloc(sizeof(struct Node));
    if (!newP)
    {
        return 1;
    }

    newP->data = inhalt;

    if (lst == NULL)
    {
        lst = newP;
        lst->next = NULL;
        lst->previous = NULL;
    }
    else
    {
        if (pos == -1)
        {
        }
        if (pos == 0)
        {
            newP = lst->previous;
        }
        for (i = 0; i < pos; i++)
        {
            lst = lst->next;
            if (i == pos)
            {
                lst->data = inhalt;
            }
        }
    }
}

int main(void)
{

    nodep Liste = NULL;

    insertAt(Liste, 0, "hallo mein name ist berhan");
    printList(Liste);

    return 0;
}