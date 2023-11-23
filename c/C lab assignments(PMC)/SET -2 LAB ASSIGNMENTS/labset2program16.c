// sum of array using DMA
#include <stdio.h>
#include <stdlib.h>
int func(int[], int);
int main()
{
    int *ptr, n, i, sum = 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    sum = func(ptr, n);
    printf("The sum of array is %d!", sum);
    return 0;
}
int func(int ptr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + ptr[i];
    }
    return sum;
}
