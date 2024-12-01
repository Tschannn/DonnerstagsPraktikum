#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char *data;
    struct Node *next;
    struct Node *previous;
} *nodep;

void printList(nodep lst)
{
    if (lst == NULL)
    {
        printf("Liste ist null\n");
        return;
    }
    printf("PRINT LIST\n");
    while (lst != NULL)
    {
        printf("Data pointer: %p\n", (void *)lst->data);
        printf("Node Data: %s\n", lst->data);
        lst = lst->next;
    }
}

nodep copyList(nodep lst)
{
    nodep tempNode = malloc(sizeof(struct Node));
    if (!tempNode)
        return lst;

    while (lst != NULL)
    {
        tempNode->data = lst->data;
        tempNode->next = lst->next;
        tempNode->previous = lst->previous;
        lst = lst->next;
    }

    return tempNode;
}

nodep deleteAt(nodep lst)
{
}

void deletelist(nodep lst)
{
    nodep tempNode;
    while (lst != NULL)
    {
        tempNode = lst;
        lst = lst->next;
        
        free(tempNode->data);
        free(tempNode);
    }
}



nodep insertAt(nodep lst, int pos, char *inhalt)
{
    int i;
    nodep newP = malloc(sizeof(struct Node));
    if (!newP)
    {
        return lst;
    }

    newP->data = malloc(strlen(inhalt) + 1);
    if (newP->data == NULL)
    {
        free(newP);
        return lst;
    }
    strcpy(newP->data, inhalt);

    newP->next = NULL;
    newP->previous = NULL;

    if (lst == NULL)
    {
        return newP;
    }
    else
    {
        if (pos == 0)
        {
            newP->next = lst;
            lst->previous = newP;
            return newP;
        }
        else
        {
            nodep current = lst;
            for (i = 0; i < pos - 1 && current != NULL; i++)
            {
                current = current->next;
            }

            if (current == NULL)
            {
                printf("Position außerhalb der Liste\n");
                free(newP->data);
                free(newP);
                return lst;
            }
            else
            {
                newP->next = current->next;
                if (current->next != NULL)
                {
                    current->next->previous = newP;
                }
                current->next = newP;
                newP->previous = current;
            }
        }
    }

    return lst;
}
int main(void)
{

    nodep list = NULL;

    list = insertAt(list, 0, "First");
    list = insertAt(list, 1, "Second");
    list = insertAt(list, 2, "Third");
    list = insertAt(list, 1, "Inserted at position 1");
    printList(list);

    deletelist(list);

    printf("-----------------------------------------------------");

    printList(list);

    return 0;
}