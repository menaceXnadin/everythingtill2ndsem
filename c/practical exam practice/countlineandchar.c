#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fptr = NULL;
    char ch;
    int line=1,count = 0;
    fptr = fopen("count.txt", "r");
    while ((ch = fgetc(fptr)) != EOF)
    {
        if ( ch =='\n')
        {
        line++;
        }
        if(!isspace(ch))
        count++;
    }
    fclose(fptr);
    printf("line = %d, no of characters = %d",line,count);
    return 0;
}