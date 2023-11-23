// write a cprogram to convert specified no of days into
// years,weeks and days.
#include <stdio.h>
int main()
{
    int years;
    int weeks;
    int days;
    printf("Enter Number  of Days : ");
    scanf("%d", &days);
    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;
    printf("%d years : %d weeks : %d days\n", years,weeks,days);
    return 0;
}