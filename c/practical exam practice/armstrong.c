#include <stdio.h>
int main()
{
    int rem = 0, arm = 0, org, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    org = n;
    while (n > 0)
    {
        rem = n % 10;
        arm += rem * rem * rem;
        n = n/10;
    }
    if(arm==org)
    {
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}