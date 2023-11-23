#include <stdio.h>
int main()
{
int n,a,i;
do
{
printf("enter : ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    printf("%d * %d = %d\n",n,i,n*i);
}
printf("do you want to continue :(yes =1 /n=0): " );
scanf("%d",&a);
}
while(a==1);
    return 0;
}