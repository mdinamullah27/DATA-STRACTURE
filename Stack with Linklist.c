///Stack
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
typedef struct Node
{
    int data;
    struct Node *next;

}node;
node *top;
int count=1;
void push(int data)
{
    if(count>SIZE)
    {
        printf("OVERFLOW!\n");
    }
    else{

    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(top==NULL)
    {
        top=temp;
    }
    else
    {

        temp->next=top;
        top=temp;

    }
    }
    count++;
}
void stack()
{
    if(top==NULL)
    {
        printf("stack id empty\n");
    }
    else
    {
    printf("%d ",top->data);
    printf("\n");
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("Underflow!\n");
    }
    else
    {
        node *p;
        p=top;
        top=p->next;
        p->next=NULL;
        free(p);
    }
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(10);
    push(9);
    push(8);
    stack();
    pop();
    stack();
    return 0;

}

