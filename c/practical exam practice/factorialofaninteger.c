#include <stdio.h>
int main()
{
    int fact = 1, i, n;
    printf("Entert n : ");
    scanf("%d", &n);
    for(i=n;i!=0;i--)
    {
        fact *=i;

    }
    printf("%d",fact);
}