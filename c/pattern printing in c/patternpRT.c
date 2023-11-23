#include<stdio.h>
int main()
{
int i,j,n,k;
printf("enter no of rows you want : ");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
	for(j=i;j<n;j++)
	{
		printf(" ");
	}
	for(k=i;k>=1;k--)
	{
		printf("*");
	}
	printf("\n");
}



return 0;
}

