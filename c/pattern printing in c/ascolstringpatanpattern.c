
#include<stdio.h>
#include<string.h>
int main()
{
	char ascol[]="PATAN";
int i,len,k,n=5;

len=strlen(ascol);

for(i=1;i<=5;i++)
{
	
		for(k=0;k<n;k++)
		{
		
		printf("%c",ascol[k]);
		
        	}
        	n--;
	
	printf("\n");
}


return 0;
}

