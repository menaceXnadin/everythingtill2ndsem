#include <stdio.h>
int main()
{

	int num, cube=1,i;
	printf("enter any Number : ");
	scanf("%d", &num);
	// cube = num * num * num;
	for(i=1;i<=3;i++)
	{
		cube =cube *num;
	}
	printf("\n The cube root of %d is %d", num, cube);
	return 0;
}
