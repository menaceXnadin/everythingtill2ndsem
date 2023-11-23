#include <stdio.h>
#include <stdlib.h>
int main()
{
    char filename[20];
    printf("enter file name : ");
    gets(filename);
    FILE *fptr = NULL;
    fptr = fopen(filename, "r");/*content.txt*/
    char c;
    if (fptr == NULL)
    {
        printf("---ERROR---");
        exit(1);
    }
        while (!feof(fptr))
        {
            c = fgetc(fptr);
            printf("%c", c);
        }
    fclose(fptr);
    return 0;
}