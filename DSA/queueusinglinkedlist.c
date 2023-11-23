#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int d)
{
    struct node* new_n;
    new_n = (struct node*)malloc(sizeof(struct node));
    new_n->data = d;
    new_n->next = NULL;
    if ((front == NULL) && (rear == NULL)) {
        front = rear = new_n;
    }
    else {
        rear->next = new_n;
        rear = new_n;
    }
}

void display()
{
    struct node* temp;
    if ((front == NULL) && (rear == NULL)) {
        printf("\nQueue is Empty");
    }
    else {
        temp = front;
        while (temp) {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
    }
}
void dequeue()
{
    if ((front == NULL) && (rear == NULL)) {
        printf("\nQueue is Empty");
    }
    else {
        struct node *temp = front;
        printf("Dequeued element: %d\n", temp->data);
        front = front->next;
        free(temp);
    }
}


int main()
{
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("Queue:");
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
