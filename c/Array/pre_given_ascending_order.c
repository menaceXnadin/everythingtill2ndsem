// arrange array in asceding order
#include <stdio.h>
int main()
{
	int a[5] = {43, 32, 45, 23, 45};
	int i, smallest, d;
	for (i = 0; i < 5; i++)
	{
		if (a[i] > a[i + 1]) // 43 > 32
		{
			d = a[i];		 // d= 43
			a[i] = a[i + 1]; // a[0]=32
			a[i + 1] = d;	 // a[1]= 43
		}
		// sm
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}
