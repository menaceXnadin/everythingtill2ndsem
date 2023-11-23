// write a c program to determine whether a given number
// is armstrong or not
#include <stdio.h>
int main()
{
    int num, rem, org, arm = 0;
    printf("Enter the Number : ");
    scanf("%d", &num);
    org = num;
    while (num > 0)
    {
        rem = num % 10;
        arm += (rem * rem * rem);
        num = num/10;
    }
    if(org==arm)
    {
        printf("%d  = %d (armstrong)",arm,org);
    }
    else{
        printf("%d ! = %d (not armstrong)",arm,org);
    }
    return 0;
}