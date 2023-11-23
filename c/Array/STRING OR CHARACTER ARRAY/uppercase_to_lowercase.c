#include <stdio.h>
int main()
{
	char a[20];
	int i, count = 0, c;
	printf("Enter string : ");
	gets(a); // scanf("%[^\n]s",a);

	for (i = 0; a[i] != '\0'; i++)
	{
		count++;
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
		printf("%c", a[i]);
	}
	return 0;
}
