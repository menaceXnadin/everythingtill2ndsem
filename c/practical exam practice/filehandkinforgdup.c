#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr1 = NULL, *fptr2 = NULL;
    fptr1 = fopen("original.txt", "r");
    fptr2 = fopen("duplicate.txt", "w");
    if (fptr1 == NULL && fptr2 == NULL)
    {
        printf("---ERROR OPENIG FILE---");
        exit(1);
    }
    char ch;
    while (!feof(fptr1))
    {
        ch = fgetc(fptr1);
        fputc(ch, fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("successfully copied");
    return 0;
}