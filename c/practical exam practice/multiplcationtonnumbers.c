#include <stdio.h>
int main()
{
    int i, n,c;
    printf("enter nth term : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for (c= 1; c <= 10; c++)
        {
            printf("%d * %d = %d\n", i, c, c * i);
            
        }
    }
    return 0;
}