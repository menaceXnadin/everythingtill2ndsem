// write a program to determine whether a given number is
// pallindrome or not
#include <stdio.h>
int main()
{
    int num, rem, rev = 0, org;
    printf("Enter the number : ");
    scanf("%d", &num);
    org = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (org == rev)
    {
        printf("Pallindrome ");
    }
    else
    {
        printf("Not pallindrom ");
    }
    return 0;
}