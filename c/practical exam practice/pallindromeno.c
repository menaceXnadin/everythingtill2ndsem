#include <stdio.h>
int main()
{
    int n, rev = 0, org, rem;
    printf("enter n : ");
    scanf("%d", &n);
    org = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (org == rev)
    {
        printf("pallindrome");
    }
    else
    {
        printf("not pallindrome");
    }
    return 0;
}