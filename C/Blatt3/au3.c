#include <stdio.h>
#include <ctype.h>
#include <string.h>

void soundex(const char s[100], char res[])
{

    char *org[] = {"BFPV", "CGJKQSXZ", "DT", "L", "MN", "R"};
    char sondex[] = {'1', '2', '3', '4', '5', '6'};
    int index, i, j;
    index = 1;
    res[0] = toupper(s[0]);

    for (i = 1; index < 6; i++)
    {
        char ziffer = '\0';
        if (strchr(org[i], s[i]) != NULL)
        {
            res[i] = sondex[i];
        }
        index++;
    }
    while (index < 6)
    {
        res[index++] = '0';
    }

    res[index] = '\0';
}

int main(void)
{

    char eingabe[50];
    char res[7];

    printf("Geben sie eine Zahl ein:\n");

    while (scanf("%c", eingabe) != EOF)
    {
        soundex(eingabe, res);
        printf("%s", res);
    }
    return 0;
}