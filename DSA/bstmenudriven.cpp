#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
struct node
{
	int info;
	struct node *left, *right;
};
struct node *root = NULL;
void search(int val) 
{
	struct node *curr = root;
	for(;;)
	{
		if(curr == NULL)
		{
			printf("Searched item is not found.\n");
			break;
		}
		if(val == curr->info)
		{
			printf("Searched item is found.\n");
			break;
		}
		else if(val < curr->info)
			curr = curr->left;
		else
			curr = curr->right;
	}
}
void insert(int val) 
{
	struct node *ins = (struct node*) malloc(sizeof(struct node));
	ins->info = val;
	ins->left = NULL;
	ins->right = NULL;
	if(root == NULL)
		root = ins;
	else
	{
		struct node *parent = NULL, *curr = root;
		while(curr != NULL)
		{
			parent = curr;
			if(ins->info < curr->info)
				curr = curr->left;
			else
				curr = curr->right;					
		}
		if(ins->info < parent->info)
			parent->left = ins;
		else
			parent->right = ins;		
	}
}
void del(int val) 
{
	struct node *parent = NULL, *curr = root;
	while(curr->info != val)
	{
		parent = curr;
		if(val < curr->info)
			curr = curr->left;
		else
			curr = curr->right;					
	}
	if(curr->left == NULL && curr->right == NULL)
	{
		if(curr->info < parent->info)
			parent->left = NULL;
		else
			parent->right = NULL;
		free(curr);
	}
	else if(curr->left == NULL && curr->right != NULL)
	{
		if(curr->info < parent->info)
			parent->left = curr->right;
		else
			parent->right = curr->right;
		free(curr);
	}
	else if(curr->left != NULL && curr->right == NULL)
	{
		if(curr->info < parent->info)
			parent->left = curr->left;
		else
			parent->right = curr->left;
		free(curr);
	}
	else
	{
		struct node *leftmost = curr->right, *pre = curr;
		while(leftmost->left != NULL)
		{
			pre = leftmost;
			leftmost = leftmost->left;			
		}
		curr->info = leftmost->info;
		if(leftmost->info < pre->info)
			pre->left = leftmost->right;
		else
			pre->right = leftmost->right;
		free(leftmost);
	}		
}
void preorder(struct node *n) 
{
	if (n != NULL)
	{		
		printf("%d ", n->info);
		preorder(n->left);
    	preorder(n->right);
  	}
}
void inorder(struct node *n) 
{
	if (n != NULL)
	{
		inorder(n->left);
		printf("%d ", n->info);
    	inorder(n->right);
  	}
}
void postorder(struct node *n) 
{
	if (n != NULL)
	{
		postorder(n->left);		
    	postorder(n->right);
    	printf("%d ", n->info);
  	}
}
int main()
{
	while(TRUE)
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Search\n");
		printf("4.Preorder traversal\n");
		printf("5.Inorder traversal\n");
		printf("6.Postorder traversal\n");
		printf("7.Clear\n");
		printf("8.Exit\n");
		int choice, val;
		printf("Enter a choice (1-8):");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:				
				printf("Enter an element to insert:");
				scanf("%d", &val);
				insert(val);
				break;
			case 2:
				printf("Enter an element to delete:");
				scanf("%d", &val);
				del(val);					
				break;
			case 3:
				printf("Enter an element to search:");
				scanf("%d", &val);
				search(val);
				break;
			case 4:
				printf("Preorder traversal is : ");
				preorder(root);
				printf("\n");
				break;
			case 5:
				printf("Inorder traversal is : ");
				inorder(root);
				printf("\n");
				break;
			case 6:
				printf("Postorder traversal is : ");
				postorder(root);
				printf("\n");
				break;
			case 7:
				system("CLS");
				break;
			case 8:
				exit(0);
			default:
				printf("Wrong choice\n");
		}
	}	
}
