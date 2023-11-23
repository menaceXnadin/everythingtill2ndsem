#include <stdio.h>
int main()
{
	char a[89], lowercase[20];
	int i, count = 0;
	printf("input string: ");
	scanf("%[^\n]s", a); // you can use gets() function ->[easy way]
	for (i = 0; a[i] != '\0'; i++)
	{
		count++;

		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		else
			continue;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
	printf("\ntotal no of characters : %d", count);
	return 0;
}
