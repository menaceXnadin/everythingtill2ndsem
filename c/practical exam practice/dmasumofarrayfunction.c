#include <stdio.h>
#include <stdlib.h>
int arr(int *, int);
int main()
{
    int *ptr, n, i, sum = 0;
    printf("Enter the size : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    sum = arr(ptr, n);
    printf("sum = %d", sum);
    return 0;
}
int arr(int *a, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += *(a + i);
    }
    return sum;
}