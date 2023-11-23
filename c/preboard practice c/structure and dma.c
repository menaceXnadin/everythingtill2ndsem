#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
	char name[20];
	char address[20];
	int age;
	float salary;
} emp;/*now i can simplu use emp as structure variable*/
int main()
{
	int n, i;
	float avg = 0.0, sum = 0.0;
	printf("ENter no . of employee : ");
	scanf("%d", &n);
	emp *sptr;
	sptr = (emp *)calloc(n, sizeof(emp));
	for (i = 0; i < n; i++)
	{
		printf("enter details of employee %d\n", i + 1);
		printf("enter name\t enter address\t enter age\t enter salary\n");
		scanf(" %s %s %d %f", (sptr + i)->name, (sptr + i)->address, &(sptr + i)->age, &(sptr + i)->salary);
	}
	printf("\n-------------Details of employee-----------------\n");
	for (i = 0; i < n; i++)
	{
		printf("\n Details of employee %d\n", i + 1);
		printf("Name =  %s \t Address = %s \t Age = %d \t  Salary = %f", (sptr + i)->name, (sptr + i)->address, (sptr + i)->age, (sptr + i)->salary);
	}
	// for average salary
	for (i = 0; i < n; i++)
	{
		sum = sum + (*(sptr + i)).salary;
	}
	avg = sum / n;
	printf("\nthe average salary is %f", avg);
	return 0;
}
