/*pass by value*/
#include <stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("Enter two variables A and B : ");
    scanf("%d %d", &a, &b);
    printf("value of 'a' is %d and 'b' is %d before swapping.", a, b);
    swap(a, b);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nvalue of 'a' is %d and 'b' is %d after swapping.", x, y);
}
