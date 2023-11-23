#include<stdio.h>
int main()
{
	char ascol[]="PATAN";
int i,j;
for(i=5;i>=1;i--)
{
		for(j=0;j<i;j++)
		{		
		printf("%c",ascol[j]);	
        	}	
	printf("\n");
}
return 0;
}


