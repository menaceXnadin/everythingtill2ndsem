#include <stdio.h>
int main()
{
	int i;
	struct marks
	{
		int math;
		int cprog;
		int english;
	};
	struct students
	{
		char name[20];
		int rollno;
		struct marks m1;
	};
	int n;
	printf("Enter no of students : ");
	scanf("%d", &n);
	struct students s[n];
	for (i = 0; i < n; i++)
	{
		printf("enter the name for student %d\n", i + 1);
		scanf(" %[^\n]s", s[i].name);
		printf("enter the roll number for student %d\n", i + 1);
		scanf(" %d", &s[i].rollno);
		printf("enter the marks  for math of student %d\n", i + 1);
		scanf(" %d", &s[i].m1.math);
		printf("enter the marks  for c programming of student %d\n", i + 1);
		scanf(" %d", &s[i].m1.cprog);
		printf("enter the marks  for english of student %d\n", i + 1);
		scanf(" %d", &s[i].m1.english);
	}
	for (i = 0; i < n; i++)
	{
		if (s[i].m1.cprog >= 24)
		{
			printf("%s  whose roll number is %d is passed in cprogramming with %d marks\n ", s[i].name, s[i].rollno, s[i].m1.cprog);
		}
	}
	return 0;
}
