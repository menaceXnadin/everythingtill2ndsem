#include <stdio.h>
int main()
{
    int i, j;
    char str[5] = "NEPAL";
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {

            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}
