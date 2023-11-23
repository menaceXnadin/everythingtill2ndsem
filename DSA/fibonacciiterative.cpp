#include<stdio.h>
int fibo(int n)
{
	int f1 = 0, f2 = 1, f;
	for(int i = 0; i < n - 2; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	if(n == 1)
		f = f1;
	else
		f = f2;
	return f;
}
int main()
{
	int n, f;
	printf("n = ");
	scanf("%d", &n);
	f = fibo(n);
	printf("Fibonacci number is %d", f);
}
