#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* next;
};
struct node* list = NULL;
void insertnode(struct node* pred, int val) 
{
	struct node* ins = (struct node*) malloc(sizeof(struct node));
	ins->info = val;
	ins->next = NULL;
	if(pred == NULL)
	{
		ins->next = list;
		list = ins;
	}
	else
	{
	    ins->next = pred->next;
	    pred->next = ins;
	}	
}
void deletenode(struct node* del)
{
	if(del == list) 
	{
		list  = del->next;
	}
	else
	{
		struct node* pred = list;
		while (pred->next != del)
		{
		            pred = pred->next;
		}
		pred->next = del->next;	
	}
	free(del);
}
void search(int val) 
{
	struct node* temp = list;
	while(temp != NULL) 
	{
      	if(temp->info == val)
      	{
      		printf("Searched item found.\n");
      		break;
		}		
		temp = temp->next;      		
   	}
   	if(temp == NULL)
   		printf("Searched item not found.\n");
}
void display() 
{
	struct node* temp = list;
	while(temp != NULL) 
	{
      		printf("%d\t", temp->info);
      		temp = temp->next;
   	}
}
int main()
{
	insertnode(NULL, 7);
	insertnode(list, 10);
	insertnode(list, 16);	
	insertnode(list->next, 21);	
	search(10);
	display();
	printf("\n");
	deletenode(list->next->next);
	display();
}

