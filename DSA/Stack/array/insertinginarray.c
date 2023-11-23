#include <stdio.h>
void insert(int farr[50], int n);
int main()
{
    int pos, val, arr[50] = {4, 5, 6, 8, 12};

    insert(arr, 5);
    delete (arr, 5);
}
void insert(int farr[50], int n)
{
    int pos, val, i;
    printf("enter the position : ");
    scanf("%d", &pos);
    printf("enter the value : ");
    scanf("%d", &val);
    for (i = n - 1; i >= pos; i--)
    {
        farr[i + 1] = farr[i];
    }
    farr[pos] = val;
    n = n + 1;
    printf("the Values of array are : \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d\t", farr[i]);
    }
}
void delete(int sarr[50],n)
{
    int pos;
    printf("enter the position : ");
    scanf("%d", &pos);
    for (i = pos; i <n;i++)
    {
        sarr[i ] = sarr[i+1];
    }


}