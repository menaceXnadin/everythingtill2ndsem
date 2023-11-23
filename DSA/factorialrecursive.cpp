#include<stdio.h>
long facto(int n)
{
	if(n == 0)
		return 1;
	else
		return n * facto(n - 1);
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d", &n);
	printf("%d! = %ld", n, facto(n));
}
