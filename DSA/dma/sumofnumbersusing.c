#include <stdio.h>
#include <stdlib.h>
int sumofarray(int *ptr, int n);
int main()
{
    int n, *ptr,i;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the elements in the array : ");
    for (i = 0; i < n;i++)
        scanf("%d", (ptr + i));

    // sumofarray(ptr, n
    printf("the sum of all elements in a array is %d", sumofarray(ptr, n));
}
int sumofarray(int * ptr,int n)
{
    int sum=0,i;
    for (i = 0; i < n;i++)
        sum = sum + *(ptr + i);
    return sum;
}