#include <stdio.h>
#include <string.h>
#define n 10
int main()
{
	int a;
	char s[n];
	printf("enter string : ");
	scanf("%[^\n]s", s); // use gets(); for for more easier way
	printf("%s", s);
	a = strlen(s);
	printf("\nthe length of character is : %d", a);

	return 0;
}
