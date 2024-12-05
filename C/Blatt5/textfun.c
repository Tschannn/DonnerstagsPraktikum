#include <stdio.h>
#include "textfun.h"
#include <stdlib.h>

ListEle *wordList = NULL;

void addPair(const char *such,const char *ersatz){
    strcpy(wordList->suchWort,such);
    strcpy(wordList->ersatzWort,ersatz);
}

void clearList(void){
    while (wordList != NULL)
    {
    ListEle *temp;
    temp = wordList;
    wordList = temp->next;
    free(wordList);
    }
}

struct Fundstelle find(const char *s){
    struct Fundstelle foundStelle;

    while(wordList->next != NULL){
        if(strcmp(s,wordList->suchWort)== 0){
            s = foundStelle.stelleImSuchString;
            return foundStelle;
        }

    wordList = wordList->next;
    }
}

int replaceAll(char *s){

    return 0;
}