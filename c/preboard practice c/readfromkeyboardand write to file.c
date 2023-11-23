//reading from keyboard and writing to file
#define N 100
#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[N];
printf("enter text : ");
scanf("%[^\n]s",str);
FILE *fptr1 = NULL;
fptr1 = fopen("read.txt","w");
fputs(str,fptr1);
return 0;
}