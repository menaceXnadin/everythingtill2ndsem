#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Allocate memory using malloc()
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate memory using realloc()
    int new_size;
    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);
    arr = (int *)realloc(arr, new_size * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", new_size);
    for (int i = 0; i < new_size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements after reallocation: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
