/*pass by reference*/
#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter two varables 'a' and 'b' : ");
    scanf("%d %d", &a, &b);
    printf("value of 'a' is %d and 'b' is %d before swapping.\n", a, b);
    swap(&a, &b);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("value of 'a' is %d and 'b' is %d after swapping.", *x, *y);
}