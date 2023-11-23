// difference between call by value and call by reference
#include <stdio.h>
void callfunction(int, int);
void referencefunction(int *, int *);
int main()
{
	int a = 1, b = 2;
	printf("values of a and b before calling callfunction\t a = %d\t b = %d\n", a, b);
	callfunction(a, b);
	printf("\nvalues of a and b after calling callfunction\t a = %d\t b = %d\n", a, b);
	printf("\nvalues of a and b before calling referencefunction\t a = %d\t b = %d\n", a, b);
	referencefunction(&a, &b);
	printf("\nvalues of a and b after calling referencefunction\t a = %d\t b =%d\t\n", a, b);

	return 0;
}
void callfunction(int a, int b)
{
	a = 0;
	b = 0;
	printf("\nvalue inside callfunction\t a = %d and b = %d\n", a, b);
}
void referencefunction(int *a, int *b)
{
	*a = 0;
	*b = 0;
	printf("\nvalues of a and b inside referencefunction\t a = %d\t b = %d\n", *a, *b);
}