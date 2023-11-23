// passing structure to functuon
#include <stdio.h>
struct pass
{
	int a;
	char b;
};
void funct(struct pass);
int main()
{
	struct pass s1 = {1, 'c'};
	funct(s1);
	return 0;
}
void funct(struct pass s2)
{
	printf("%d\n", s2.a);
	printf("%c", s2.b);
}