#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *head=NULL;
void appendLast()
{
    int data;
    scanf("%d",&data);
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *p;
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}
void display()
{
    node *p;
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void  appendFirst()
{
    int data;
    scanf("%d",&data);
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=head;
    head=temp;


}
void appendMiddil()
{
    int data,position,count=2;

    printf("POSITION ");
    scanf("%d",&position);
    printf("INPUT ");
    scanf("%d",&data);
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    node *p;
    p=head;
    while(count<position)
    {
        count++;
        p=p->next;

    }

    temp->next=p->next;
    p->next=temp;



}
void scarch()
{
    node *p;
    int data,count=1,d=0;
    scanf("%d",&data);
    p=head;
    while(p!=NULL)
    {

        if(data==p->data)
        {

            d=1;
            break;

        }
        p=p->next;
        count++;
    }

    if(d==0)
    {
        printf("Not found\n");
    }
    else
    {
        printf("found\nposition=%d\n",count);
    }
}
void  deletFirstNode()
{
    node *p;
    p=head;
    head=p->next;
    p->next=NULL;
    free(p);
}
void deletLastNode()
{
    node *p,*q;
    p=head;
    q=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;


}
void deledMidilNode()
{
    node *p=head,*q;
    int count=2,pos;
    printf("position=");
    scanf("%d",&pos);
    while(pos>count)
    {
        count++;

        p=p->next;
    }
    q=p->next;
    p->next=q->next;
    q->next=NULL;


}
int main()
{
    appendLast();
    appendLast();
    appendLast();
    deledMidilNode();
    deletLastNode();
    display();
    appendFirst();

    display();
    deletFirstNode();
    display();
    appendMiddil();
    display();
    scarch();
    deletFirstNode();
    display();
    deletLastNode();
    display();
}

