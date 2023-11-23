/* write a c program to convert a given
 integer(in seconds) to hours,minutes and seconds*/
#include <stdio.h>
int main()
{
    int sec = 0, hour = 0, min = 0;
    printf("Enter second : ");
    scanf("%d", &sec);
    hour = sec / 3600; /*1 hour = 3600 seconds*/
    sec = sec % 3600;
    min = sec / 60;
    sec = sec % 60;
    printf("%d hour : %d minutes : %d seconds ", hour, min, sec);
    return 0;
}
