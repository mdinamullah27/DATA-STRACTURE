#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}node;
node *head=NULL;

node *GetNewNode(int data)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}

void insertlast()
{
    int data;
    scanf("%d",&data);
    node *temp=head;
    node *newnode=GetNewNode(data);

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void inserthead()
{
    node *temp=head;

    int data;
    scanf("%d",&data);
    node *newnode=GetNewNode(data);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;

}
void Print()
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void ReversePrint()
{
     node *temp;
    temp=head;
    if(head==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->prev;
    }
}
int main()
{
    insertlast();
    insertlast();
    insertlast();
    inserthead();
    insertlast();
    Print();
    printf("\n");
    ReversePrint();
    return 0;
}
