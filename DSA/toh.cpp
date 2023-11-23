#include<stdio.h>
int towers(int n, char frompeg, char topeg, char auxpeg)
{
	if(n == 1)
	{
		printf("\nMove disc 1 from %c peg to %c peg", frompeg, topeg);
		return 1;
	}
	int moves1 = towers(n - 1, frompeg, auxpeg, topeg);
	printf("\nMove disc %d from %c peg to %c peg", n, frompeg, topeg);
	int moves2 = towers(n - 1, auxpeg, topeg, frompeg);	
	return moves1 + 1 + moves2;
}
int main()
{
	int n, m;
	printf("How many disks?");
	scanf("%d", &n);
	m = towers(n, 'A', 'C', 'B');
	printf("\nNumber of moves = %d", m);
}
