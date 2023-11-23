//smallest element of an array using pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*ptr,min,i;
printf("enter size of array : ");
scanf("%d",&n);
ptr = (int*)calloc(n,sizeof(int));
//inputting values
printf("enter the numbers :\n ");
for(i=0;i<n;i++)
{
	scanf("%d",(ptr+i));
}
///for finding smallest element in an array
min = *ptr;
for(i=1;i<n;i++)
{
	if(*(ptr+i)<min)
	{
		min = *(ptr+i);
	}
}
printf("\nthe minimum value is %d",min);
free(ptr);
return 0;
}
