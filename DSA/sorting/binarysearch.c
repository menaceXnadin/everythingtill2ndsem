#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int array[n];
  printf("Enter %d elements in ascending order:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  int x;
  printf("Enter the target element to search: ");
  scanf("%d", &x);

  int result = binarySearch(array, x, 0, n - 1);

  if (result == -1)
    printf("Element not found");
  else
    printf("Element found at index %d", result);

  return 0;
}
