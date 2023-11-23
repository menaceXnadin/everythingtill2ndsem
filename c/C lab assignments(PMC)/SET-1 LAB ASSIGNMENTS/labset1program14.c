/* write a c program to find the elgibility of admission for a
professional course based on the following criteria :
Marks in Maths > = 65
Marks in phy > = 55
Marks in chem > = 50
and total in all three subject > = 180 or Total in Math and
subjects > = 140  */
#include <stdio.h>
int main()
{
    int phy, maths, chem, total;
    printf("Enter Marks for Physics : ");
    scanf("%d", &phy);
    printf("Enter Marks for Mathematics : ");
    scanf("%d", &maths);
    printf("Enter Marks for chemistry : ");
    scanf("%d", &chem);
    total = phy + chem + maths;
    if((phy>=55 && chem >= 50 && maths >=65 && total >=180 || total >=140))
    {
        printf("---You are eligible to study---");
    }
    else{
        printf("---Not enough Marks to Get admitted---");
    }
    return 0;
}