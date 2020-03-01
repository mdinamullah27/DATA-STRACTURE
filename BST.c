#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}node;
node *Newnode(int data)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
node *insert(node *temp,int data)
{
    if(temp==NULL)return Newnode(data);
    if(data>temp->data)
    {
        temp->right=insert(temp->right,data);
    }
    else if(data<temp->data)
    {
        temp->left=insert(temp->left,data);
    }
    return temp;
}
void inorder(node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d->",temp->data);
        inorder(temp->right);
    }
}
int main()
{
    node *head=NULL;
    head=insert(head,10);
    insert(head,15);
    insert(head,185);
    insert(head,25);
    insert(head,35);
    inorder(head);
    return 0;
}
