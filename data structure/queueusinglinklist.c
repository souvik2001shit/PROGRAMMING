#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
    struct Node *front=NULL;
    struct Node *rear=NULL;
void linkListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isEmpty()
{
    if(front==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull()
{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int val)
{
  if(isFull(rear))
  {
      printf("The queue is full\n");
  }
  else{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
      n->data=val;
      n->next=NULL;
      if(front==NULL)
      {
          front=rear=n;
      }
      else{
          rear->next=n;
          rear=n;
      }
  }
}
int dequeue()
{
    int val=-1;
    struct Node *ptr=front;
    if(isEmpty(front))
    {
        printf("The queue is empty\n");
    }
    else{
        front=front->next;
        val=ptr->data;
        free(ptr);
        return val;
        
    }
}
int main()
{
    enqueue(12);
    enqueue(16);
    enqueue(17);
    enqueue(14);
    linkListTraversal(front);
    printf("The value is %d\n",dequeue());
    printf("The value is %d\n",dequeue());
    printf("The value is %d\n",dequeue());
    printf("The value is %d\n",dequeue());
    printf("The value is %d\n",dequeue());



    return 0;
}