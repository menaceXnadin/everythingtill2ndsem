#include <stdio.h>
int main()
{
    char str[20];
    printf("enter string : ");
    scanf("%[^\n]s", str);
    int i, count = 0;
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == 'e')
        {
            count++;
        }
    }
    printf("\n e= %d",count);
    return 0;
}