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
void deletenode(int pos)
{
	struct node* del = list, *pred;
	int i;
	if(pos == 1) 
	{
		list  = del->next;
	}
	else
	{		
		for(i = 1; i < pos; i++)
		{
			pred = del;
			del = del->next;			
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
	int c, n, pos, i;
	struct node* temp;
	while(1)
	{
		printf("1. Insert\n");
		printf("2. Remove\n");
		printf("3. Display\n");
		printf("4. Search\n");
		printf("5. Clear\n");
		printf("6. Exit\n");
		printf("Enter choice:");
		scanf("%d", &c);
		switch(c)
		{
			case 1:
				printf("Enter position to insert:");
				scanf("%d", &pos);
				printf("Enter element to insert:");
				scanf("%d", &n);
				if(pos == 1)
					insertnode(NULL, n);
				else
				{
					temp = list;
					for(i = 2; i < pos; i++)
						temp = temp->next;
					insertnode(temp, n);
				}
				break;
			case 2:
				printf("Enter position to delete:");
				scanf("%d", &pos);				
				deletenode(pos);					
				break;				
			case 3:
				display();
				printf("\n");
				break;
			case 4:
				printf("Enter element to search:");
				scanf("%d", &n);
				search(n);
				break;
			case 5:
				system("CLS");
				break;
			case 6:
				exit(0);
			default:
				printf("Wrong choice!\n");
		}		
	}	
}
