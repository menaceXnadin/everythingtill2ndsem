#include <stdio.h>
#include <stdlib.h>
int sumofarray(int *ptr, int n);
int main()
{
    int n, *ptr, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the elements in the array : ");
    for (i = 0; i < n; i++)
        scanf("%d", (ptr + i));
    int new_size;
    printf("\nEnter the new size of the array : ");
    scanf("%d", &new_size);
    ptr = realloc(ptr, new_size * sizeof(int));
     for (i = 0; i < new_size; i++)
        scanf("%d", (ptr + i));
    printf("the sum of all elements in a array is %d", sumofarray(ptr, new_size));
   
}
int sumofarray(int *ptr, int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
        sum = sum + *(ptr + i);
    return sum;
}