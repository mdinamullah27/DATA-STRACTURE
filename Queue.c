///QUEUE
#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};

struct node *front=NULL, *rear=NULL;

void enqueue()
{
    int data;
    scanf("%d", &data);
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(rear == NULL)
    {
        rear = temp;
        front = temp;
    }
    else
    {
        rear->next=temp;
        rear = temp;
    }
}

void dequeue()
{
    if(front == NULL)
    {
        printf("Queue underflow!!!\n");
        return;
    }
    struct node *p = front;
    front = p->next;
    p->next=NULL;
    free(p);
    if(front == NULL)
    {
        rear = NULL;
    }

}

void front_value()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Front is: %d\n", front->data);
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    front_value();
    dequeue();
    front_value();
    dequeue();
    front_value();
    dequeue();
    front_value();
    dequeue();
    return 0;
}
