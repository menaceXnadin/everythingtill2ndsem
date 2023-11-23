
#include<stdio.h>
#include<string.h>
int main()
{
	char ascol[]="PATAN";
int i,len,k;

len=strlen(ascol);

for(i=1;i<=5;i++)
{
	
		for(k=0;k<i;k++)
		{
		
		printf("%c",ascol[k]);
		
        	}
        
	
	printf("\n");
}


return 0;
}

