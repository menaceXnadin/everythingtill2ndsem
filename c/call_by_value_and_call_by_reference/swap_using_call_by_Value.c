#include <stdio.h>
void swap(int, int);
int main()
{
	int a, b;
	printf("enter two variables A and B :\n");
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("values of a and b before swapping is %d and %d", a, b);
	return 0;
}
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("the values of A and B in swap function after swapping is %d and %d\n", x, y);
}
