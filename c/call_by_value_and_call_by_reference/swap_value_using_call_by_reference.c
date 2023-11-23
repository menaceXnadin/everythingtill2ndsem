#include <stdio.h>
void swap(int *, int *);
int main()
{
	int a, b;
	printf("enter two varables A and B : \n");
	scanf("%d %d", &a, &b);
	printf("the values of A and B before swapping is %d and %d\n", a, b);
	swap(&a, &b);
	printf("values of a and b after calling the swap funtion is %d and %d", a, b);
	return 0;
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("value of A and B in the swap function after swapping is %d and %d\n", *x, *y);
}