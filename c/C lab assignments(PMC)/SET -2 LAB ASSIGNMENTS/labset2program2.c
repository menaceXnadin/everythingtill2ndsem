#include <stdio.h>
int main()
{
    int score;
    printf("Enter Your Score : ");
    scanf("%d", &score);
    if (score >= 80 && score <= 100)
    {
        printf("Result : DIstinction");
    }
    else if (score >= 70 && score < 80)
    {
        printf("Result : first Division");
    }
    else if (score >= 55 && score < 70)
    {
        printf("Result : second Division");
    }
    else if (score >= 40 && score < 55)
    {
        printf("Result :Third Division");
    }
    else
    {
        printf(" Result : fail");
    }

    return 0;
}
