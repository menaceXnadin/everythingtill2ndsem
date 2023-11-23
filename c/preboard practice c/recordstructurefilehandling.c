#include<stdlib.h>
#include<stdio.h>
int main()
{
typedef struct student{
	int roll;
	char name[20];
	float percnt;
}rec;
int i;
rec s[10];
FILE *fptr1 = NULL;
fptr1 = fopen("record.txt","w");
if(fptr1 == NULL)
{
printf("error in creating file");
exit(0);
	}
for(i=0;i<2;i++)
{
printf("enter student %d",i+1);
printf("\nenter roll no\t name\t percentage\t\n ");
scanf(" %d\t %s\t %f",&s[i].roll,s[i].name,&s[i].percnt);	
}
for(i=0;i<2;i++)
{
printf("detail of student %d",i+1);
printf("\n roll no\t name\t percentage\t\n ");
printf(" %d\t %s\t %.1f",s[i].roll,s[i].name,s[i].percnt);	
}

	for(i=0;i<2;i++)
	{
		fprintf(fptr1,"\nrecord of student (%d)\n",i+1);
	fprintf(fptr1,"roll = %d\n",s[i].roll);
		fprintf(fptr1,"name = %s\n",s[i].name);
			fprintf(fptr1,"percentage= %.1f\n",s[i].percnt);
}
printf("\nsuccessfully stored ");
fclose(fptr1);
return 0;
}
