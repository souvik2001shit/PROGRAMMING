#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *top=NULL;

void linkListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isEmpty(struct Node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node *top)
{
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node * push(struct Node *top,int x)
{
    if(isFull(top))
    {
        printf("stack overflow\n");
    }
    else{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->data=x;
    n->next=top;
    top=n;
    return top;
    }
}
int pop(struct Node *tp)
{
    if(isEmpty(tp))
    {
        printf("stack underflow\n");
    }
    else{
        struct Node *n=tp;
        top=(tp)->next;
        int x=n->data;
        free(n);
        return x;
    }
}

int main()
{
    top=push(top,78);
    top=push(top,7);
    top=push(top,8);

    int element=pop(top);
    printf("popped element is %d\n",element);
    linkListTraversal(top);
    
    return 0;
}