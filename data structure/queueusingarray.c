#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
};
int isEmpty(struct Queue *p)
{
    if(p->front==p->rear)
    {
       return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Queue *p)
{
    if(p->rear==p->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct Queue *p,int value)
{
  if(isFull(p))
  {
      printf("Queue is overflow\n");
  }
  else{
      p->rear++;
      p->arr[p->rear]=value;
      printf("Enqueue element :%d\n",value);
  }
}
int dequeue(struct Queue *p)
{
    int a=-1;
    if(isEmpty(p))
    {
        printf("Queue is underflow\n");
    }
    else{
        p->front++;
        a=p->arr[p->front];
        return a;
    }
}
int main()
{
    struct Queue q;
    q.size=5;
    q.front=q.rear=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    printf("Before insert,Empty:%d\n",isEmpty(&q));
    printf("Before insert,Full:%d\n",isFull(&q));
    enqueue(&q,14);
    enqueue(&q,6);
    enqueue(&q,7);
    enqueue(&q,9);
    enqueue(&q,10);

    
    printf("The element is:%d\n",dequeue(&q));
    printf("The element is:%d\n",dequeue(&q));
    printf("The element is:%d\n",dequeue(&q));
    printf("The element is:%d\n",dequeue(&q));
    printf("The element is:%d\n",dequeue(&q));

    

    printf("Before insert,Empty:%d\n",isEmpty(&q));
    printf("Before insert,Full:%d\n",isFull(&q));
    return 0;
}