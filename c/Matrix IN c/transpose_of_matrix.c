//transpose of matrix
// it means changing row into column and column into row
#include<stdio.h>
int main()
{
int a[5][5],transpose[5][5];
int r,c,i,j;
printf("ENter rows : and column : ");
scanf("%d %d",&r,&c);
//for storing values
printf("Enter the values :\n ");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("the entered values are : \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
// to transpose
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		transpose[i][j]=a[j][i];
	}
}
printf("the transpose of matrix are :\n ");
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
	printf("%d\t",transpose[i][j]);
	}
	printf("\n");
}
return 0;
}
