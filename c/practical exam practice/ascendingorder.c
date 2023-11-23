#include <stdio.h>
int main()
{
    int arr[20], n;
    printf("enter the limit : ");
    scanf("%d", &n);
    printf("entert the array elements : ");
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    printf("ascending order : \n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
            printf("%d\t",arr[i]);
    }
    return 0;
}