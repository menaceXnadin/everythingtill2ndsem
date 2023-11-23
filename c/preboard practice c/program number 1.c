#include <stdio.h>
int main()
{
	int a, b, n = 1;
	char c;
	do
	{
		printf("\nenter the operation you want : ");
		scanf(" %c", &c);
		printf("\nenter integers a : ");
		scanf("%d", &a);
		printf("\nenter integers b : ");
		scanf("%d", &b);
		switch (c)
		{
		case '+':
			printf("%d + %d = %d ", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d ", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d ", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %d ", a, b, a / b);
			break;
		case '%':
			printf("%d %% %d = %d ", a, b, a % b);
			break;
		default:
			printf("wrong operator input\n");
		}

		printf("\ndo you want to perform the operation again then type '1' else press '0' \n");
		scanf("%d", &n);
	} while (n == 1);
	return 0;
}
