#include <stdio.h>
int main()
{
int y,w,d;
printf("enter days : ");
scanf("%d",&d);
y = d/365;
d = d%365;
w = d/7;
d = d%7;
printf("%d y: %d w: %d d",y,w,d);

    return 0;
}