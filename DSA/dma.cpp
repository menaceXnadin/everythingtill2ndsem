#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *a,sum=0,avg;
   	int n,i;
   	printf("How many numbers?");
	scanf("%d",&n);
   	a=(float*)calloc(n,sizeof(float));
   	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
   	{
   		scanf("%f",(a+i)); 
      	sum=sum+*(a+i);
   	}
   	avg=sum/n;
   	printf("Sum=%f\n",sum);
   	printf("Average=%f",avg);
	free(a);
}

