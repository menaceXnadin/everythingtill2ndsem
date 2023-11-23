/*write a program using loop to print the following flyod's
triangle as given below when input is n.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
#include <stdio.h>
int main()
{
    int i, j, c = 0, n;
    printf("enter no of rows you want to print : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            c++;
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}
