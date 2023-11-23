//multiplication of the matrix
#include<stdio.h>
int main()
{
int i,j,k;
int a[2][2],b[2][2],mul[2][2];
printf("enter the values for Matrix A : \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("enter the values for Matrix B : \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
printf("the values after A * B : \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		mul[i][j]=0;
		for(k=0;k<2;k++)
	{
		mul[i][j]+=a[i][k]*b[k][j];
		
	}
	printf("%d\t",mul[i][j]);
	}
	printf("\n");
}


return 0;
}
