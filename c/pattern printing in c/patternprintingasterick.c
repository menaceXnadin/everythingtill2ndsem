#include<stdio.h>
int main()
{
	int entrow,row,col,nocol;
	printf("enter no of rows you want to show :");
	scanf("%d",&entrow);
	nocol=entrow;
	
	for(row=1;row<=entrow;row++)
		 {
		 	for(col=nocol;col>=row;col--)
		 	{
		 		printf("*");
			 }
			 printf("\n");
}
return 0;

	
	
	
}
