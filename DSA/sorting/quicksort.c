#include <stdio.h>

int partition(int *a, int lb, int ub) {
    int pivot = a[lb], start = lb, end = ub;
    while (start < end) {
        while (a[start] <= pivot) {
            start++;
        }
        while (a[end] > pivot) {
            end--;
        }
        if (start < end) {
            int temp;
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    a[lb] = a[end];
    a[end] = pivot;
    return end;
}

void quicksort(int *a, int lb, int ub) {
    if (lb < ub) { // Add a base case for recursion
        int loc = partition(a, lb, ub);
        quicksort(a, lb, loc - 1);
        quicksort(a, loc + 1, ub);
    }
}

int main() {
    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int lb, ub, i;
    lb = 0, ub = 8; // Correct the upper bound
    quicksort(arr, lb, ub);
    printf("\nElements in sorted form\n");
    for (i = 0; i <= ub; i++) { // Use ub instead of 9
        printf("%d\t", arr[i]);
    }
    return 0;
}
