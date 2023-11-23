#include <stdio.h>
int bubblesort(int * a,int n)
{
    int i,j,temp;
    for (i = 0; i < n - 1;i++)
    {
        for (j = 0; j < n - i - 1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[100], n, i;
    printf("enter the size of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // printf("elements before sorting : \n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    bubblesort(arr, n);
    printf("\nelements after sorting : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}