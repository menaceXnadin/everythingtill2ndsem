#include <stdio.h>
int main()
{
	char a[200], b[200] = {'\0'};
	int i, length = 0, c = 0, flag = 1;
	printf("enter string : ");
	scanf("%[^\n]s", a); // you can use gets() for more easier way
	// finding length of string
	for (i = 0; a[i] != '\0'; i++)
	{
		length++;
	}
	// printing length of string
	printf("\n %d is length of string \n", length);
	// reverse  of given string
	for (i = length - 1; i >= 0; i--)
	{
		b[c] = a[i];
		c++;
	}
	printf("Reversed form is = : %s\n", b);
	// checking pallindrome or not
	for (i = 0; i < length; i++)
	{ 
		if (b[i] != a[i])
		{
			flag = 0;
			break;
		}
		else
			continue;
	}
	if (flag == 1)
	{
		printf("%s == %s \nso,Given string is pallindrome", a, b);
	}
	else
	{
		printf("%s != %s \nso,Given string is not pallindrome", a, b);
	}
	return 0;
}
