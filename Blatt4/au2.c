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
    nodep temp = lst;
    while (temp != NULL)
    {
        printf("%s\n", temp->data);
        temp = temp->next;
    }

}

nodep insertAt(nodep lst, int pos, char *inhalt)
{
    nodep newP = malloc(sizeof(struct Node));
    if (!newP) return lst;

    newP->data = inhalt;
    newP->next = NULL;
    newP->previous = NULL;

    if (lst == NULL)
    {
        lst = newP;
    }
    else
    {
        nodep temp = lst;
        if (pos == 0)
        {
            newP->next = lst;
            lst->previous = newP;
            lst = newP;
        }
        else
        {
            int i;
            for (i = 0; temp != NULL && i < pos - 1; i++)
            {
                temp = temp->next;
            }
            if (temp != NULL)
            {
                newP->next = temp->next;
                if (temp->next != NULL)
                    temp->next->previous = newP;
                temp->next = newP;
                newP->previous = temp;
            }
        }
    }

    return lst;
}

int main(int argc, char *argv[])
{
    nodep Liste = NULL;
    

        char *eingabe = argv[1];
        Liste = insertAt(Liste, 0, eingabe);
        printList(Liste);
    free(Liste);

    return 0;
}