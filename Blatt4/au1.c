#include <stdio.h>

int main(int argc, char *argv[])
{
    int note = 5;
    int *pointer = &note;
    int **point = &pointer;

    printf("%d\n", note);
    printf("%p\n", (void *)pointer);
    printf("%p\n", (void *)point);
    return 0;
}