#include <stdio.h>
#include <string.h>
int main()
{
	char a[20], c[20];
	int i, count = 0;
	printf("enter string : ");
	// scanf("%[^\n]s",a);
	gets(a);
	strcpy(c, a);
	for (i = 0; a[i] != '\0'; i++)
	{
		count++;
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	printf("The upper case of %s is \t", c);
	for (i = 0; i < count; i++)
	{
		printf("%c", a[i]);
	}
	printf("\nlength is %d", count);

	return 0;
}
