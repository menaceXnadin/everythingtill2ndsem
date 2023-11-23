#include <stdio.h>
int main()
{
int arr[20],i,j,n,small,temp,big;
printf("Enter Array limit : ");
scanf("%d",&n);
printf("enter elemets in an array :");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
small=arr[0];
big = arr[0];
for(i=1;i<n;i++)
{
 if(arr[i]<small)
 {
    temp = arr[i];
    arr[i]=small;
    small=temp;

 }
 if(arr[i]>big)
 {
    temp = arr[i];
    arr[i]=big;
    big=temp;

 }
}
printf("small = %d",small);
printf("\n big = %d",big);
    return 0;
}