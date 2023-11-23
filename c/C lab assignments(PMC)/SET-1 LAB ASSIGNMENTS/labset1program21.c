/*write a c program inc to make such a pattern like a pyramid with
numbers increased by 1.
              1
             2  3
           4   5  6
         7   8   9  10     */
#include <stdio.h>
int main()
{
    int i, j, k, n, c = 0;
    printf("enter no of rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            c++;
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}
