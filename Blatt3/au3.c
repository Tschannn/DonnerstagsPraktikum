#include <stdio.h>
#include <ctype.h>

void soundex(const char s[100], char res[])
{
    res[0] = toupper(s[0]);
    int index = 1,i,j;

    char *s[] = {"BFPV", "CGJKQSXZ", "DT", "L", "MN", "R"};
    char res[] = {'1', '2', '3', '4', '5', '6'};

    for(i = 0; s[i] != "\0" && index <6;i++){
        char c = toupper(s[i]);
        char ziffer = '\0';

        for (j = 0; j < 6;j++)
        {
            if()
        }
        
    }
    res[6] = '\0';
}

int main(void)
{

    char eingabe[50];
    char res[7];

    while (scanf("%c", eingabe) != EOF)
    {
        soundex(eingabe, res);
        printf("%s\n", res);
    }
    return 0;
}