#include<stdio.h>
long facto(int n)
{
	long f = 1;
	for(int i = 1; i <= n; i++)
		f *=  i;
	return f;
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d", &n);
	printf("%d! = %ld", n, facto(n));
}
