// Linear Search in C

#include <stdio.h>

int search(int array[], int n, int x)
{

    // Going through array sequencially
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int main()
{
    int array[100], n,i;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int x;
    printf("enter the element to search : ");
    scanf("%d", &x);

    int result = search(array, n, x);

    (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}