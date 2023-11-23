#include <stdio.h>
int main()
{
int hour,min,sec;
printf("enter sec : ");
scanf("%d",&sec);
hour = sec/3600;
sec = sec % 3600;
min = sec / 60;
sec = sec%60;
printf("%dh :  %dm :  %ds",hour,min,sec);
    return 0;
}