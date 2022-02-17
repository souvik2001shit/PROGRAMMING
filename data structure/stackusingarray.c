#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)//struct stack ptr
{
    if(ptr->top==-1)//ptr.top==-1
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr)//struct stack ptr
{
    if(ptr->top==ptr->size-1)//ptr.top==ptr.size-1
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    
     //struct stack s;
    // s.size=6;
     //s.top=-1;
    // s.arr=(int *)malloc(s.size*sizeof(int));
     struct stack *s;
     s->size=6;
     s->top=-1;
     s->arr=(int *)malloc(s->size*sizeof(int));

     //Pushing element manually
    s->arr[0]=7;
    s->top++;
    s->arr[1]=9;
    s->top++;
    s->arr[2]=11;
    s->top++;
    s->arr[3]=23;
    s->top++;
    s->arr[4]=33;
    s->top++;
    s->arr[5]=45;
    s->top++;


    if(isEmpty(s))
    {
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }


    if(isFull(s))
    {
        printf("The stack is full");
    }
    else{
        printf("The stack is not full");
    }

    return 0;
}