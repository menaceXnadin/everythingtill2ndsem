/*sort an array in ascending order*/
#include <stdio.h>
void main()
{
    int num[20];
    int i, j, temp, n;
    printf("Enter The limit : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Given Elements in  Ascending Order :\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", num[i]);
    }
}
