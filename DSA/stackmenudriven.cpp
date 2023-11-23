#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
#define TRUE 1
int stack[MAXSIZE];
int top = -1;
int isempty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if(top == MAXSIZE - 1)
		return 1;
	else
		return 0;
}
void peek()
{
	if(isempty())
		printf("Stack is empty\n");
	else
		printf("Top element is %d\n", stack[top]);
}
void push(int val)
{
	if(isfull())
		printf("Stack is full\n");
	else
		stack[++top] = val;
}
void pop()
{
	if(isempty())
		printf("Stack is empty\n");
	else
		printf("Removed element is %d\n", stack[top--]);
}
int main()
{
	while(TRUE)
	{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Clear\n");
		printf("5.Exit\n");
		int choice, val;
		printf("Enter a choice (1-5):");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:				
				printf("Enter an element to insert:");
				scanf("%d", &val);
				push(val);
				break;
			case 2:
				pop();					
				break;
			case 3:
				peek();
				break;
			case 4:
				system("CLS");
				break;
			case 5:
				exit(0);
			default:
				printf("Wrong choice\n");
		}
	}	
}
