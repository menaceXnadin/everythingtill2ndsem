#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr; // declaration of integer pointer
    int n;    // to store array limit
    int i;    // loop counter
    int sum;  // to store sum of all elements
    int average;
    printf("Enter limit of the array: ");
    scanf("%d", &n);

    // declare memory dynamically
    ptr = (int *)calloc(n, sizeof(int));

    // read array elements
    for (i = 0; i < n; i++)
    {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    // print array elements
    printf("\nEntered array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    // calculate sum of all elements
    sum = 0; // assign 0 to replace garbage value
    for (i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", sum);
    average = sum / n;
    printf("The average is %d", average);

    // free memory
    free(ptr); // free dynamically allocated memory

    return 0;
}