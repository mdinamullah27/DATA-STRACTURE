#include<stdio.h>
#define SIZE 5
int top=-1;
int stack[SIZE];

void push(int x)
{
    if(top+1>=SIZE)
    {
        printf("OVERFLOW!\n");

    }
    else{
        stack[top+1]=x;
        top++;
    }

}
void pop()
{
    if(top==-1)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        printf("pop=%d\n",stack[top]);
        top=top-1;
    }
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
}
