/*find smallest element in an array*/
#include <stdio.h>
int main()
{
    int min, i, n;
    int arr[13];
    printf("Enter the Limit : ");
    scanf("%d", &n); // 12 13 2 4 5
    printf("Enter the elemnts in Array :  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The samllest elements is %d", min);
    return 0;
}
