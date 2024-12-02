#include <stdio.h>

int main(void)
{

    char eingabe;
    

    printf("gebe hier deinen geheimen Satz ein: \n");

    while (scanf("%c", &eingabe) != EOF) /*End of File*/
    {
    if (eingabe >= 'a' && eingabe <= 'z')
    {
        if (eingabe + 13 > 'z')
        {
            eingabe -= 13;
        }
        else
            eingabe += 13;
    }
    else if (eingabe >= 'A' && eingabe <= 'Z')
    {
        if(eingabe +13 > 'Z'){
            eingabe -= 13;
        }else eingabe +=13;
    }
    
    printf("%c", eingabe);

    }



    return 0;
}