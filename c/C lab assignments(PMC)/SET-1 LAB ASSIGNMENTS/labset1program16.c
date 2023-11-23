// write a program in c to display the multiplication table of
// a given integer
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter The Number : ");
    scanf("%d", &num);
    printf("The Multiplication Table of %d : \n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}