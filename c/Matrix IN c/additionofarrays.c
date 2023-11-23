#include<stdio.h>
int main()
{
int a[3][3],b[3][3],sum[3][3],i,j;
//for value of A
	printf("enter values for matrix A\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	
		scanf("%d",&a[i][j]);
	}
	
}
//for value of b
	printf("enter values for matrix B\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	
		scanf("%d",&b[i][j]);
	}
}
	//sum
	printf("the sum is\n");
		for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	sum[i][j]=a[i][j]+b[i][j];
	printf("%d\t ",sum[i][j]);
	}
	printf("\n");	
}
return 0;
}

