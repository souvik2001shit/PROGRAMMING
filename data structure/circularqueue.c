#include<stdio.h>
#include<stdlib.h>
struct circularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isEmpty(struct circularQueue *p)
{
    if(p->rear==p->front)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct circularQueue *p)
{
    if((p->rear+1)%p->size==p->front)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct circularQueue *p,int val)
{
    if(isFull(p))
    {
        printf("Circular queue overflow\n");
    }
    else{
        p->rear=(p->rear+1)%p->size;
        p->arr[p->rear]=val;
        printf("Enqued element :%d\n",val);
    }
}
int dequeue(struct circularQueue *p)
{
    int val=-1;
    if(isEmpty(p))
    {
        printf("circular queue underflow\n");
    }
    else{
         p->front=(p->front+1)%p->size;
         val=p->arr[p->front];
    }
    return val;
}
int main()
{
    struct circularQueue q;
    q.size=4;
    q.front=q.rear=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,34);
    enqueue(&q,56);
    enqueue(&q,45);
    
    
     printf("Dequeueing element %d\n",dequeue(&q));
     printf("Dequeueing element %d\n",dequeue(&q));
     printf("Dequeueing element %d\n",dequeue(&q));
     
    // enqueue(&q,45);
    // enqueue(&q,45);
    // enqueue(&q,45);

     if(isEmpty(&q))
     {
         printf("Queue is empty\n");
     }
     if(isFull(&q))
     {
         printf("Queue is full\n");
     }



    return 0;
}