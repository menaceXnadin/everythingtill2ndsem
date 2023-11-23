#include<stdio.h>
int main()
{
	int row,space,column;
	for(row=1;row<=4;row++)
	{
		for(space=row;space<=4;space++)
		{
			printf(" ");
		}
		for(column=1;column<=(2*row-1);column++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
