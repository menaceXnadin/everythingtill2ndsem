// using for loop find the average age of students in class of 20 students
#include <stdio.h>
int main()
{
	int i, avrg = 0, agesum = 0;
	int s[20];
	for (i = 0; i < 20; i++)
	{
		printf("enter the age for student %d : ", i + 1);
		scanf("%d", &s[i]);
	}
	for (i = 0; i < 20; i++)
	{
		agesum = agesum + s[i];
	}
	printf("the average age of students in class is %d", agesum / 20);

	return 0;
}
