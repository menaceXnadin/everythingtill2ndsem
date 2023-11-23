#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5 
#define TRUE 1      
int queue[MAXSIZE];     
int front = -1, rear = -1;
int isempty() 
{
	if(rear == -1)
    		return 1;
   	else
		return 0;
}
int isfull() 
{
	if(rear == MAXSIZE - 1)
    		return 1;
   	else
    		return 0;
}
void enqueue(int data) 
{
	if(isfull())
		printf("Queue is full.\n");
	else
	{
		if(isempty()) 
		{
			rear = front = 0;
			queue[0] = data;
		}
		else
			queue[++rear] = data;
	}
}
void dequeue() 
{
	int data;
   	if(isempty()) 
   		printf("Queue is empty.\n");
   	else
   	{
   		data = queue[front++];
      	if(front > rear)
			front = rear = -1;
		printf("Removed element is %d\n", data);
   	}
}
void peek() 
{
	if(isempty()) 
   		printf("Queue is empty.\n"); 	
	else 
   		printf("Front element is %d\n", queue[front]);
}
int main()
{
	while(TRUE)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
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
				enqueue(val);
				break;
			case 2:
				dequeue();					
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
